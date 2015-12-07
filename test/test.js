'use strict';

const test = require('ava');
const prolog = require('../build/Release/prolog');

test((t) => {
    const value = prolog.initialize();
    const expectedResult = 42;

    t.is(value, expectedResult);
});
