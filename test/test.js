'use strict';

const test = require('ava');
const Prolog = require('bindings')('Prolog');

test('initialize prolog engine', (t) => {
    const returnValue = Prolog.initialize('test');

    t.is(typeof returnValue, 'number');
});
