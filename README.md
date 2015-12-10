# Node Prolog

Embedded Prolog for Node JS.

Designed to support latest Node JS releases and to leverage [NAN]() and [ES2015]() features.

Inspired by [node-prolog-swi](https://github.com/kloni/node-prolog-swi).

### Installation
1. Install [Node JS](https://nodejs.org/en/download/)
2. Install [SWI Prolog](http://www.swi-prolog.org/Download.html)
3. Setup [Node Gyp](https://github.com/nodejs/node-gyp#installation)
4. Add `SWI_HOME_DIR` environment variable
    * Points to the directory the contains the Prolog executable.
5. Run `npm install`
6. Run `npm run configure`
7. Run `npm run build`
8. You are ready to use Prolog in Node JS :smile:

### ROADMAP
- [ ] Achieve parity with node-prolog-swi
- [ ] Wrap functionality in a JS Class
- [ ] Return results using `yield`
