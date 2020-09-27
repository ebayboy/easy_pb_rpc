#!/bin/bash

# ***************************************************************************
# * 
# * @file:build.sh 
# * @author:ebayboy@163.com 
# * @date:2020-09-27 10:44 
# * @version 1.0  
# * @description: Shell script 
# * @Copyright (c)  all right reserved 
#* 
#**************************************************************************/ 

protoc -I=. --cpp_out=. Person.pro

exit 0

