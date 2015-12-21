# Node Prolog

[![Build Status](https://travis-ci.org/ChristianMurphy/node-swi-prolog.svg?branch=master)](https://travis-ci.org/ChristianMurphy/node-swi-prolog)
[![Dependency Status](https://david-dm.org/ChristianMurphy/node-swi-prolog.svg)](https://david-dm.org/ChristianMurphy/node-swi-prolog)
[![devDependency Status](https://david-dm.org/ChristianMurphy/node-swi-prolog/dev-status.svg)](https://david-dm.org/ChristianMurphy/node-swi-prolog#info=devDependencies)

Embedded Prolog for Node JS.

Designed to support latest Node JS releases and to leverage [NAN](https://github.com/nodejs/nan) and [ES2015](https://nodejs.org/en/docs/es6/) features.

Based off [node-prolog-swi](https://github.com/kloni/node-prolog-swi).

### Installation
1. Install [Node JS](https://nodejs.org/en/download/)
2. Install [SWI Prolog](http://www.swi-prolog.org/Download.html)
3. Setup [Node Gyp](https://github.com/nodejs/node-gyp#installation)
4. Add `SWI_HOME_DIR` environment variable
    * Points to the directory the contains the Prolog executable.
5. Run `npm install`
6. You are ready to use Prolog in Node JS :smile:

### ROADMAP
- [ ] Achieve parity with node-prolog-swi
- [ ] Wrap functionality in a JS Class
- [ ] Return results using `yield`
