#!/bin/sh
ifconfig | grep ether | sed -e 's/.*ether //' 
