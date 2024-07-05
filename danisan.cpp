/*  Implementation file for danisan
    Author: Hüseyin Caner Oflaz
    Date: 05.07.2024
*/

#include "danisan.h"


    /* std::string getName();
     * @brief Getter function for danisan's name   
     * @param none
     * @return std::string: returns danisan's name
     */
    std::string Danisan::getName()
    {
        return fullName;
    }
    /* void setName(std::string Name);
     * @brief Setter function for danisan's name
     * @param std::string Name: Name of the danisan
     * @return none
     */
    void Danisan::setName(std::string Name)
    {
        fullName = Name;
    }

    