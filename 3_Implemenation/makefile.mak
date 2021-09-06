#Target_name : Dependecnies
#<TAB>command

target : test.c drawBoard.c checkwin.c fun.h
    gcc test.c drawBoard.c checkwin.c -o all.exe

run : target
    ./a.exe