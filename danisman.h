/*  Header file for danisman 
    Author: Hüseyin Caner Oflaz
    Date: 05.07.2024
*/

#ifndef Danisman_H
#define Danisman_H

#pragma once

#include <string>

class Danisman{

    public:

        /* std::string getName();
        * @brief Getter function for danisman's name   
        * @param none
        * @return std::string: returns danisman's name
        */
        std::string getName();

        /* void setName(std::string Name);
        * @brief Setter function for danisman's name
        * @param std::string Name: Name of the danisman
        * @return none
        */
        void setName(std::string Name);

        /* Default constructor
         * Sets the name of the danisman to empty string
         */
        Danisman()
        {
            fullName = "";
        }
        /* Parameterized  constructor
         * Sets the name of the danisman to given name
         * @param string Name: name of the danisman
         */
        Danisman(std::string Name)
        {
            fullName = Name;
        }

        /* Equals operator Overloadding
         * Two danismans are equal if their full name is equal
         * @param Danisman object to compare  
         * @return bool: true if the names are equal false otherwise         
         */
        bool operator== ( const Danisman &danismanToCompare) const
        {
        return ( danismanToCompare.fullName == fullName);
        }

        /* Not Equals operator Overloadding
         * Two danismans are not equal if their full name is not equal       
         * @param Danisman object to compare    
         * @return bool: false if the names are equal true otherwise  
         */
        bool operator!= ( Danisman danismanToCompare)
        {
        return ( danismanToCompare.fullName != fullName);
        }


    private:
        // Private variables
        
        // Name of the danisman
        std::string fullName;

};

#endif