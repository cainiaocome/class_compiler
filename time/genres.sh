#!/usr/bin/env bash

echo 'c result:' >result
(time ./qsc) >>result 2>&1
echo 'java result:' >>result
(time java QuickSort) >>result 2>&1
echo 'python result:' >>result
(time ./qs.py) >>result 2>&1
