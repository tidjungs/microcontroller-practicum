###Microcontroller Practicum
tutorial for Atmega 168 in practicum classroom

#File lists
* peri.h / peri.c: peripheral lib
* chase.c: turn led on peripheral board one by one
* count.c: led on peripheral board count number 0-7 in binary
* sw-count.c: led on peripheral board count how many time you push the button on peripheral board
* light-3.c led on peripheral board indicate light level in 3 levels
* light-8.c led on peripheral board indicate light level in 8 levels

#Usage
connect your computer with Atmega 168
```
git clone https://github.com/tidjungs/microcontroller-practicum.git
cd microcontroller-practicum
make <file you want to run>.flash
```

