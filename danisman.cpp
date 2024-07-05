/*  Implementation file for danisman
    Author: Hüseyin Caner Oflaz
    Date: 05.07.2024
*/

#include "danisman.h"


    /* std::string getName();
     * @brief Getter function for danisman's name   
     * @param none
     * @return std::string: returns danisman's name
     */
    std::string Danisman::getName()
    {
        return fullName;
    }
    /* void setName(std::string Name);
     * @brief Setter function for danisman's name
     * @param string Name: Name of the danisman
     * @return none
     */
    void Danisman::setName(std::string Name)
    {
        fullName = Name;
    }