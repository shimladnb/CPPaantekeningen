//
//  aantekening.cpp
//  
//
//  Created by sem shimla on 24-09-14.
//
//

/*
 alles tussen deze tekens is een comment yo
 */


#include <iostream>
#include "aantekening.h"

using namespace std;


int main(int argc, char ** argv)
{
    //functie die er maar 1 van kan zijn, dit is je programma, haakjes betekend een functie, functie verwacht 2 variables. 2 sterren betekenen dubbelle pointers.
    
    
    //std::cout << "hello worldldd" << std::endl;
    
    cout <<"hoi" << endl;
    
    return 0;
    //cout = console out, << geven een richting aan, er is ook een cin, die kan dingen lezen. pijltjes andersom dus. endl is endline dus een return.
    
    
    
}

//in je terminal is het handig om als je je een .cpp compiled g++ -o <naam> <filenaam> te doen.
//een hele file compilen zodat ie bruikbaar is, ongeveer.. ; gcc -c aantekening.cpp           2estap ;
// g++ helloworld -L /lib/c++/iostream.a aantekening.o

//makkelijk:
// g++ -o helloworld aantekening.cpp

/*
opdracht:

maak een c++ programma dat 1 periode van een sinus can 480 hertz uitrekent bij een samplerate van 4800 hz. de output wordt geschreven in een textfile dat mag met cout en redirection het resultaat moet je verifieren met een plotprogramma zolas gnuplot inleveren via git
aantekening > hello.txt in de terminal typen. zorgt ervoor dat de output van je script in een textfile komt te staan.

for (int sample=0; sample < 48000; ...)
{
cout << waarde << endl;
}



alles installeren:

./configure
make
sudo make install
which <wat je net hebt gecompiled>
 
 
 GIT AANTEKENING
 alle stappen die je moet zetten incl github push
 
 git init (initalise je gitmap in de map waarin je cd staat
 git status (kijk wat er in staat)
 git add (voeg toe wat je wilt hebben) (en nieuwe versies van oude)
 git commit -am "wat er is gebeurd" (zet je files en laatste wijzigingen vast)
 maak een github repository aan. en kopier je link
 git remote add origin https://github.com/shimladnb/opdracht2.git
 git push -u origin master
 daarna gewoon
 git push origin





 make files zijn make scripts.
 ook make heeft zijn eigen syntax voor het compileren van cpp scripts

 make werkt ook met $variablenen net zoals bash
 om een file aan te maken
 file: sinewave.o audio_io.o
 	$(cpp) -o $@ $(CFLAGS) sinewave.o audio_io.o $(LDFLAGS) -lpthread

 ok dit is dus kapot moeilijk. 

 g++ -c = compileren van files  om er cpu files  van te maken
 g++ -o = het samenvoegen van .o's



$@ the current target
$* base name of current target
$< the first prerequisites that are newer than the target
$? all prerequisites that are newer than the target


*/
