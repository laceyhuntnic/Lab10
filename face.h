#ifndef FACE_H
#define FACE_H
#include <iostream>

void happyFace(int numFaces)
{
    for(int i=0; i<numFaces; i++)
    {
        std::cout<<"Happy Guy Number "<<i+1<<std::endl;
        std::cout<<"o o\n";
        std::cout<<"\\_/\n";
    }
}

#endif