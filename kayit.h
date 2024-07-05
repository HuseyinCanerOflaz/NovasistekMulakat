/*  Header file for kayıt
    Created for modularisation of the kayıt in order to change the "kayıt" easily
    Used by super user to create a unapproved list
    Author: Hüseyin Caner Oflaz
    Date: 05.07.2024
*/

#ifndef kayit_H
#define kayit_H

#pragma once

#include <string>
#include "danisman.h"
#include "danisan.h"
#include <iostream>

class Kayit{

    public:
        Kayit()
        {

        }
        /* Parameterized  constructor
         * Creates a record(kayıt) from a danisan name and a danisman name
         */
        Kayit(std::string danisanName, std::string danismanName)
        {
            danisan = Danisan(danisanName);
            danisman = Danisman(danismanName);
        }

        /* Parameterized  constructor
         * Creates record(kayıt) of a danisan and danisman pair from existing danisan and danisman objects
         * @param Danisan danisan: danisan of the kayıt pair
         * @param Danisman danisman: danisman of the kayıt pair
         */
        Kayit(Danisan danisan, Danisman danisman)
        {
            danisan = Danisan(danisan.getName());
            danisman = Danisman(danisman.getName());
        }

        /* Copy constructor
         * Creates a kayıt from existing kayıt 
         * @param Kayıt kayıt: Kayıt to be copied
         */       
        Kayit(Kayit& kayit) 
        {
            danisan = Danisan(kayit.getDanisan().getName());
            danisman = Danisman(kayit.getDanisman().getName());
        }

        /* Danisan getDanisan();
        * @brief Getter function for danisan 
        * @param none
        * @return Danisan: danisan of the kayıt pair
        */
        Danisan getDanisan();

        /* void setDanisan(Danisan danisanToSet)
        * @brief Setter function for danisan
        * @param Danisan danisanToSet: used to create a danisan with the same full name
        */
        void setDanisan(Danisan danisanToSet);
        
        /* Danisman getDanisman();
        * @brief Getter function for danisman 
        * @param none
        * @return Danisan: danisman of the kayıt pair
        */
        Danisman getDanisman();

        /* void setDanisman(Danisman danismanToSet)
        * @brief Setter function for danisman
        * @param Danisman danismanToSet: used to create a danisman with the same full name
        * @return none
        */
        void setDanisman(Danisman danismanToSet);

        /* void printKayit()
        * @brief Prints the contents of the kayit by printing danisan and danisman's name
        * @return none
        */
        void printKayit();

        /* Equals operator Overloadding
         * Two kayıt's are equal if their danisan and danisman are equal
         * @param Kayıt object to compare 
         * @return bool: true if the kayıt's are equal false otherwise             
         */
        bool operator== ( Kayit kayitToCompare)
        {
            return  (danisan == kayitToCompare.danisan) && (danisman == kayitToCompare.danisman);
        }

        /* Not Equals operator Overloadding
         * Two kayıt's are equal if their danisan and danisman are equal
         * @param Kayıt object to compare
         * @return bool: false if the kayıt's are equal true otherwise           
         */
        bool operator!= ( Kayit kayitToCompare)
        {
            return  (danisan != kayitToCompare.danisan) || (danisman != kayitToCompare.danisman);
        }


    private:
        // Private variables
        
        // Danisan of the record pair
        Danisan danisan;
        // Danisman of the record pair
        Danisman danisman;


};

#endif