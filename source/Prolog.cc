#include <nan.h>
#include <string.h>
#include <SWI-Prolog.h>

NAN_METHOD(initialize) {
    Nan::Utf8String * str = new Nan::Utf8String(info[0]);

    const char * params[3];
    params[0] = (const char *) str;
    params[1] = "--quiet";
    params[2] = NULL;

    int returnValue = PL_initialise(2, (char **) params);

    info.GetReturnValue().Set(returnValue);
}

NAN_MODULE_INIT(InitAll) {
  Nan::Set(target, Nan::New("initialize").ToLocalChecked(),
    Nan::GetFunction(Nan::New<v8::FunctionTemplate>(initialize)).ToLocalChecked());
}

NODE_MODULE(NativeExtension, InitAll)
