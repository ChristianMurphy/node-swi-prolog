#include <SWI-Prolog.h>
#include <nan.h>

using namespace Nan;

class Prolog : public Nan::ObjectWrap {
    public:
        static NAN_MODULE_INIT (Init) {
            v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
            tpl -> SetClassName(Nan::New("Prolog").ToLocalChecked());
            tpl -> InstanceTemplate()->SetInternalFieldCount(0);

            SetPrototypeMethod(tpl, "initialize", Prolog::initialize);

            constructor().Reset(Nan::GetFunction(tpl).ToLocalChecked());
            Set(target, Nan::New("Prolog").ToLocalChecked(),
            Nan::GetFunction(tpl).ToLocalChecked());
        }

    private:
        static inline Persistent<v8::Function> & constructor() {
            static Persistent<v8::Function> my_constructor;
            return my_constructor;
        }

        static void New (const Nan::FunctionCallbackInfo<v8::Value>& info);
        static void initialize (const Nan::FunctionCallbackInfo<v8::Value>& info);
};

void Prolog::New (const Nan::FunctionCallbackInfo<v8::Value>& info) {
    Prolog *obj = new Prolog();
    obj -> Wrap(info.This());
    info.GetReturnValue().Set(info.This());
}

void Prolog::initialize(const Nan::FunctionCallbackInfo<v8::Value>& info) {
    const char *args[3];

    /* initialize Prolog */
    args[0] = "node";
    args[1] = "--quiet";
    args[2] = NULL;
    int rval = PL_initialise(2, (char **) args);

    info.GetReturnValue().Set(rval);
}

NODE_MODULE(Prolog, Prolog::Init)
