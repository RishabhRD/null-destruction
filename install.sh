#!/bin/bash
sudo apt-get install build-essential linux-headers-`uname -r`
make
sudo insmod null.ko
