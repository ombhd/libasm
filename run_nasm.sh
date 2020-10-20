#/bin/sh
if [ "$1" = "-c" ];
    then clear
fi

make
gcc -c main.c

ld -macosx_version_min 10.14 -lSystem main.o libasm.a -o asm
#https://stackoverflow.com/questions/52830484/nasm-cant-link-object-file-with-ld-on-macos-mojave

make clean
rm -rf main.o libasm.a

echo "\n\033[32m--------- asm Proram has been created successfully ---------\033[0m\n"
echo "\n\033[36m========================== Output ==========================\033[0m\n"
./asm
echo "\n\033[36m============================================================\033[0m\n"
