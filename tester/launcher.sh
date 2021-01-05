#!/bin/sh

make re
./tester
diff -ay rsrc/*
