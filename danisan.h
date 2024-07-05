/*  Header file for danisan 
    Author: Hüseyin Caner Oflaz
    Date: 05.07.2024
*/

#ifndef Danisan_H
#define Danisan_H

#pragma once

#include <string>


class Danisan{

    public:

        /* std::string getName();
        * @brief Getter function for danisan's name   
        * @param none
        * @return std::string: returns danisan's name
        */
        std::string getName();

        /* void setName(std::string Name);
        * @brief Setter function for danisan's name
        * @param std::string Name: Name of the danisan
        * @return none
        */
        void setName(std::string Name);

        /* Default constructor
         * Sets the name of the danisan to empty string
         * @param none
         */
        Danisan()
        {
            fullName = "";
        }
        /* Parameterized  constructor
         * Sets the name of the danisan to given name
         * @param std::string  Name: name of the danisan
         */
        Danisan(std::string Name)
        {
            fullName = Name;
        }

        /* Equals operator Overloadding
         * Two danisans are equal if their full name is equal
         * @param Danisan object to compare         
         * @return bool: true if the names are equal false otherwise  
         */
        bool operator== ( const Danisan &danisanToCompare) const
        {
            return ( danisanToCompare.fullName == fullName);
        }

        /* Not Equals operator Overloadding
         * Two danisans are not equal if their full name is not equal        
         * @param Danisman object to compare   
         * @return bool :false if the names are equal true otherwise  
         */
        bool operator!= ( Danisan danisanToCompare)
        {

            return ( danisanToCompare.fullName != fullName);
        }


    private:
        // Private variables
        
        // Name of the danisan person
        std::string fullName;

};

#endif