#! /bin/zsh

PATH=$1
CLASSNAME=$2
UCLASSNAME=$(printf "%s" "$2" | /usr/bin/tr '[:lower:]' '[:upper:]')

/usr/bin/head -2 Classnnn.hpp | /usr/bin/sed "s/nnn/$UCLASSNAME/gi" > $PATH/$CLASSNAME.hpp
echo >> $PATH/$CLASSNAME.hpp 
/usr/bin/grep -A100 'class' Classnnn.hpp | /usr/bin/sed "s/nnn/$CLASSNAME/gi" >> $PATH/$CLASSNAME.hpp
/bin/cat Classnnn.cpp | /usr/bin/sed "s/nnn/$CLASSNAME/gi" > $PATH/$CLASSNAME.cpp
