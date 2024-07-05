/*  Header file for super user 
    Author: Hüseyin Caner Oflaz
    Date: 05.07.2024
*/

#ifndef SuperUser_H
#define SuperUser_H

#pragma once

#include <string>
#include "kayit.h"

// Array max size for kayıt lists
const int MAX_LIST_SIZE = 100;

class SuperUser{


    public:

        /* Default constructor
         * Sets the name of the super user to empty string
         * @param none
         */
        SuperUser()
        {
            fullName = "";
            unapprovedSize = 0;
            approvedSize = 0;
        }

        /* Parameterized  constructor
         * Sets the name of the super user to given name
         * @param string Name: name of the super user
         */
        SuperUser(std::string Name)
        {
            fullName = Name;
            unapprovedSize = 0;
            approvedSize = 0;
        }

        /* std::string getName();
         * @brief Getter function for super user's name   
         * @param none
         * @return std::string: returns super user's name
         */
        std::string getName();

        /* void setName(std::string Name);
         * @brief Setter function for super user's name
         * @param std::string Name: Name of the super user
         * @return none
         */
        void setName(std::string Name);

        /* void addKayitToUnapproved(Kayit kayit);
         * @brief Adds a kayıt to unapproved list of the super user
         * @param Kayıt kayit: Kayıt object to be added to the list
         * @return none
         */
        void addKayitToUnapproved(Kayit kayit);

        /* void approveKayit(Kayit kayit);
         * @brief Approves a kayıt by index in the unapproved list 
         * Removes kayıt from the unapproved list
         * Adds the kayıt to approved kayıt list
         * @param int index: Index of the kayıt the be approved
         * @return none
         */
        void approveKayit(Kayit kayit);

        /* void approveKayit(Kayit kayit);
         * @brief Approves a kayıt by index in the unapproved list 
         * Removes kayıt from the unapproved list
         * Adds the kayıt to approved kayıt list
         * @param int index: Index of the kayıt the be approved
         * @return none
         */
        void approveKayit(int index);


        /* void showUnapprovedKayıtList();
         * @brief Shows the unapproved Kayıt's in the list
         * @return none
         */
        void showUnapprovedKayıtList();

        /* void showApprovedKayıtList();
         * @brief Shows the approved Kayıt's in the list
         * @return none
         */
        void showApprovedKayıtList();


    private:
        // Private variables
        
        // Name of the super user person
        std::string fullName;
        // List of unapproved kayıt's
        Kayit ListOfUnapprovedKayit[MAX_LIST_SIZE];
        // List of approved kayıt's
        Kayit ListOfApprovedKayit[MAX_LIST_SIZE];

        // Sizes of the lists
        int unapprovedSize;
        int approvedSize;

        /* void deleteUnapprovedKayit(index);
         * @brief Helper function used to approve a kayit in the unapproved list
         * Shifts every kayıt after the index in order to keep the kayıt list in the same order
         * @param int index: index of the kayıt to be deleted
         * @return none
         */
        void deleteUnapprovedKayit(int index);
        

};

#endif