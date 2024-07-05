/*  Implementation file for kayit
    Author: Hüseyin Caner Oflaz
    Date: 05.07.2024
*/

#include "kayit.h"

    /* Danisan getDanisan();
     * @brief Getter function for danisan 
     * @param none
     * @return danisan of the kayıt pair
     */
    Danisan Kayit::getDanisan()
    {
        return danisan;
    }

    /* void setDanisan(Danisan danisanToSet)
     * @brief Setter function for danisan
     * @param Danisan danisanToSet: used to create a danisan with the same full name
     */
    void Kayit::setDanisan(Danisan danisanToSet)
    {
        danisan = Danisan(danisanToSet.getName());
    }

    /* Danisman getDanisman();
     * @brief Getter function for danisman 
     * @param none
     * @return danisman of the kayıt pair
     */
    Danisman Kayit::getDanisman()
    {
        return danisman;
    }

    /* void setDanisman(Danisman danismanToSet)
     * @brief Setter function for danisman
     * @param Danisman danismanToSet: used to create a danisman with the same full name
     * @return none
     */
    void Kayit::setDanisman(Danisman danismanToSet)
    {
        danisman = Danisman(danismanToSet.getName());
    }

    /* void printKayit()
     * @brief Prints the contents of the kayit by printing danisan and danisman's name
     * @return none
     */
    void Kayit::printKayit()
    {
        if(danisan.getName() == "" && danisman.getName() == "")
        {
            std::cout << "Empty Kayıt";
        }
        else
        {
            
            std::cout<< "Danisman: " << danisman.getName() << " Danisan: " << danisan.getName();
        }
    }