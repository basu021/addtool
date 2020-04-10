#!/bin/bash

pkg install figlet -y
figlet -f small installing requirements ...
gem install lolcat -y
echo 2s

figlet -f small Please wait ...|lolcat
pkg install clang -y
pkg install nano -y
clang menu.c -o run
clear
chmod +x *
figlet Done |lolcat
echo -e "\e[33mNow run './run' "
