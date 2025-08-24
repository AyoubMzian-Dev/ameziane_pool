#!/bin/sh
ifconfig -a | grep ether | egrep -io '([[:xdigit:]]{2}:){5}[[:xdigit:]]{2}'