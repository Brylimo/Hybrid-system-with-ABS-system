#!/bin/bash

set -x

for D in /c/eve/git/eve_code/assembly/plugins/com.etas.evetools.examples.content/examples/*/src/EVEsrc; 
do 
    cp -vf startVecu* vrtaAppMain.h $D/;
done
