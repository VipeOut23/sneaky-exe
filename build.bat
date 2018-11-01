windres sneaky.rc -O coff sneaky-res.o
gcc -c sneaky.c
gcc sneaky.o sneaky-res.o
chcp 65001 
ren a.exe "h‮gnp.exe"
del sneaky.o sneaky-res.o
