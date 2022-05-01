# makefile

.PHONY : clean

main1.out : src/main1.c src/calc1.c
   gcc -o main1.out src/main1.c src/calc1.c 

main2.out : src/main2.c src/calc2.c
   gcc -o main2.out src/main2.c src/calc2.c 

main3.out : src/main3.c src/calc3.c
   gcc -o main3.out src/main3.c src/calc3.c 

main4.out : src/main4.c 
   gcc -o main4.out src/main4.c -lm

main5.out : src/main5.c src/calc5.c
   gcc -o main5.out src/main5.c src/calc5.c 

main6.out : src/main6.c src/calc6.c
   gcc -o main6.out src/main6.c src/calc6.c 

do : 
./main1.out
./main2.out
./main3.out
./main4.out
./main5.out
./main6.out

clean : 
rm main1.out
rm main2.out
rm main3.out
rm main4.out
rm main5.out
rm main6.out