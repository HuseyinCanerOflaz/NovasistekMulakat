/*  Main file used for testing the super user capabilities
    Author: Hüseyin Caner Oflaz
    Date: 05.07.2024
*/

#include "superUser.h"
#include <iostream>

/* int main()
 * Main function used for testing super user and its capabilities
 * Creates a super user
 * Adds 5 kayıt to super users unapproved list
 * Then approves 2 of the kayıt's and shows both lists
 * Commented lines are for full list testing
 */
int main()
{
    SuperUser admin = SuperUser("AdminName");

    std::cout << "Start" << '\n';
    // Test the empty lists
    std::cout << "Unapproved List: " << '\n';
    admin.showUnapprovedKayıtList();
    std::cout << "Approved List: " << '\n';
    admin.showApprovedKayıtList();

    // Adding 5 kayıt to superuser unapproved list
    // Names are created by danisan + number or danisman + number
    for(int i = 0; i < 5; i++)
    {
        std::string DanisanName = "Danisan";
        DanisanName = DanisanName + std::to_string(i);
        std::string DanismanName = "Danisman";
        DanismanName = DanismanName + std::to_string(i);
        Kayit kayit(DanisanName,DanismanName);
        admin.addKayitToUnapproved(kayit);
    }

    // Shows the list after additon of the kayıt's
    std::cout << "Unapproved List: " << '\n';
    admin.showUnapprovedKayıtList();

    // Approves a kayıt and shows the lists
    admin.approveKayit(Kayit("Danisan2","Danisman2"));
    std::cout << "Unapproved List: " << '\n';
    admin.showUnapprovedKayıtList();
    std::cout << "Approved List: " << '\n';
    admin.showApprovedKayıtList();
    // Approves another kayıt and shows the lists
    admin.approveKayit(Kayit("Danisan3","Danisman3"));
    std::cout << "Unapproved List: " << '\n';
    admin.showUnapprovedKayıtList();
    std::cout << "Approved List: " << '\n';
    admin.showApprovedKayıtList();
    // Tries to approve a nonexistent kayıt and shows the lists
    admin.approveKayit(Kayit("Danisan3","Danisman3"));
    std::cout << "Unapproved List: " << '\n';
    admin.showUnapprovedKayıtList();
    std::cout << "Approved List: " << '\n';
    admin.showApprovedKayıtList();

    /*
    // This section is for error testing at full list situation


    // Adds 97 more kayıts to fill the list and test for full list error
    for(int i = 5; i < 103; i++)
    {
        std::string DanisanName = "Danisan";
        DanisanName = DanisanName + std::to_string(i);
        std::string DanismanName = "Danisman";
        DanismanName = DanismanName + std::to_string(i);
        Kayit kayit(DanisanName,DanismanName);
        admin.addKayitToUnapproved(kayit);
    }

    // Approves 5 more kayıt's
    for(int i = 5; i < 10; i++)
    {
        admin.approveKayit(i);
    }
    
    // Approves more kayıts at the same index(different kayıt's) and shows the list
    std::cout << "Unapproved List: " << '\n';
    admin.showUnapprovedKayıtList();
    admin.approveKayit(22);
    std::cout << "Unapproved List: " << '\n';
    admin.showUnapprovedKayıtList();
    std::cout << "Approved List: " << '\n';
    admin.showApprovedKayıtList();
    admin.approveKayit(22);
    std::cout << "Unapproved List: " << '\n';
    admin.showUnapprovedKayıtList();
    std::cout << "Approved List: " << '\n';
    admin.showApprovedKayıtList();

    // Approves a spesific kayıt and shows the list
    admin.approveKayit(Kayit("Danisan33","Danisman33"));
    std::cout << "Unapproved List: " << '\n';
    admin.showUnapprovedKayıtList();
    std::cout << "Approved List: " << '\n';
    admin.showApprovedKayıtList();
    admin.approveKayit(89);
    std::cout << "Unapproved List: " << '\n';
    admin.showUnapprovedKayıtList();
    std::cout << "Approved List: " << '\n';
    admin.showApprovedKayıtList();

    */
    std::cout<< "Finish"<< '\n';
    return 0;
}