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
*/

