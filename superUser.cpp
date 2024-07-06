/*  Implementation file for super user
    Author: Hüseyin Caner Oflaz
    Date: 05.07.2024
*/

#include "superUser.h"

    /* std::string getName();
    * @brief Getter function for super user's name   
    * @param none
    * @return std::string: returns super user's name
    */
    std::string SuperUser::getName()
    {
        return fullName;
    }


    /* void setName(std::string Name);
     * @brief Setter function for super user's name
     * @param std::string Name: Name of the super user
     * @return none
     */
    void SuperUser::setName(std::string Name)
    {
        fullName = Name;
    }

    /* void addKayitToUnapproved(Kayit kayit);
     * @brief Adds a kayıt to unapproved list of the super user
     * @param Kayıt kayit: Kayıt object to be added to the list
     * @return none
     */
    void SuperUser::addKayitToUnapproved(Kayit kayit)
    {
        if(unapprovedSize == MAX_LIST_SIZE)
        {
            std::cout << "Full List Error"<< '\n';
            return;
        }
        ListOfUnapprovedKayit[unapprovedSize] = kayit;
        unapprovedSize++;
    }   

    /* void approveKayit(Kayit kayit);
     * @brief Approves a kayıt by looking up kayıt in the unapproved list 
     * Removes kayıt from the unapproved list if it is found
     * Adds the kayıt to approved kayıt list
     * Assumes that kayıt's are unique
     * @param Kayıt kayit: Kayıt object to be approved
     * @return none
     */
    void SuperUser::approveKayit(Kayit kayit)
    {
        for(int i = 0; i < unapprovedSize; i++)
        {
            if(unapprovedSize == MAX_LIST_SIZE)
            {
                std::cout << "Full List Error" << '\n';
                return;
            }
            if(kayit.getDanisan().getName() == ListOfUnapprovedKayit[i].getDanisan().getName() &&
            kayit.getDanisman().getName() == ListOfUnapprovedKayit[i].getDanisman().getName() )
            {
                deleteUnapprovedKayit(i);
                ListOfApprovedKayit[approvedSize] = kayit;
                approvedSize++;
                return;    
            }
        }
        std::cout << "No Kayıt Found"<< '\n';
    }

    /* void approveKayit(Kayit kayit);
     * @brief Approves a kayıt by index in the unapproved list 
     * Removes kayıt from the unapproved list
     * Adds the kayıt to approved kayıt list
     * @param int index: Index of the kayıt the be approved
     * @return none
     */
    void SuperUser::approveKayit(int index)
    {           
        if(index>= unapprovedSize)
        {
            std::cout << "Invalid Index" << '\n';
            return;
        }
        if(approvedSize == MAX_LIST_SIZE)
        {
            std::cout << "Full List Error" << '\n';
            return;
        }
        Kayit kayit = ListOfUnapprovedKayit[index];
        deleteUnapprovedKayit(index);
        ListOfApprovedKayit[approvedSize] = kayit;
        approvedSize++;
        return;  
    }

    /* void showUnapprovedKayıtList();
     * @brief Shows the unapproved Kayıt's in the list
     * @return none
     */
    void SuperUser::showUnapprovedKayitList()
    {
        for(int i = 0; i < unapprovedSize; i++)
        {
            std::cout << "Kayit " << i << ": ";
            ListOfUnapprovedKayit[i].printKayit();
            std::cout << '\n';
        }
    }

    /* void showApprovedKayıtList();
     * @brief Shows the approved Kayıt's in the list
     * @return none
     */
    void SuperUser::showApprovedKayitList()
    {
        for(int i = 0; i < approvedSize; i++)
        {
            std::cout << "Kayit " << i << ": ";
            ListOfApprovedKayit[i].printKayit();
            std::cout << '\n';
        }    
    }

    /* void deleteUnapprovedKayit(index);
     * @brief Helper function used to approve a kayit in the unapproved list
     * Shifts every kayıt after the index in order to keep the kayıt list in the same order
     * @param int index: index of the kayıt to be deleted
     * @return none
     */
    void SuperUser::deleteUnapprovedKayit(int index)
    {
        if(unapprovedSize == 0)
        {
            std::cout<< "Empty Unapproved List" << '\n'; 
            return;
        }
        for(int i = index; i < unapprovedSize - 1; i++)
        {
            ListOfUnapprovedKayit[i] = ListOfUnapprovedKayit[i + 1];
        }
        unapprovedSize--;
    }
