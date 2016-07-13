//
// Created by blackdartq on 7/13/16.
//

#ifndef BROSLIBRARY_BROSLIBRARY_H
#define BROSLIBRARY_BROSLIBRARY_H


#include <iostream>
#include <thread>

namespace BrosLibrary{

    void task1(std::string msg)
    {
        std::cout << "task1 says: " << msg;
    }



    void stringDescend(int number){

        for(int counter = number; counter > 0; counter--){

            std::cout << counter << std::endl;



        }


    };

    void stringAscend(int number){

        for(int counter = 0; counter <= number; counter++){


            std::cout << counter << std::endl;


        }

    };


    template <typename t>
    bool isOdd(t number) {

        if (number % 2 == 0) {

            return false;

        } else {

            return true;

        }


    }

    template <typename t>
    bool isEven(t number) {

        if (number % 2 == 0) {

            return true;

        } else {

            return false;

        }


    }



    template <typename t>
    bool isFactor(t number, t factorInQuestion) {

        if (number % factorInQuestion == 0) {
            //cout << "true" << endl;
            return true;

        } else {
            //cout << "false" << endl;
            return false;
        }


    }




}



#endif //BROSLIBRARY_BROSLIBRARY_H
