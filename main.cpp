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
    std::cout << "Testing empty lists " << '\n';
    std::cout << "Unapproved List: " << '\n';
    admin.showUnapprovedKayitList();
    std::cout << "Approved List: " << '\n';
    admin.showApprovedKayitList();

    // Adding 5 kayıt to superuser unapproved list
    // Names are created by danisan + number or danisman + number
    std::cout << "Adding five kayit to unapproved list " << '\n';
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
    admin.showUnapprovedKayitList();

    // Approves a kayıt and shows the lists
    std::cout << "Approving kayit danisan2,danisman2 " << '\n';
    admin.approveKayit(Kayit("Danisan2","Danisman2"));
    std::cout << "Unapproved List: " << '\n';
    admin.showUnapprovedKayitList();
    std::cout << "Approved List: " << '\n';
    admin.showApprovedKayitList();
    // Approves another kayıt and shows the lists
    std::cout << "Approving kayit danisan3,danisman3 " << '\n';
    admin.approveKayit(Kayit("Danisan3","Danisman3"));
    std::cout << "Unapproved List: " << '\n';
    admin.showUnapprovedKayitList();
    std::cout << "Approved List: " << '\n';
    admin.showApprovedKayitList();
    // Tries to approve a nonexistent kayıt and shows the lists
    std::cout << "Trying to approve kayit danisan3,danisman3 again" << '\n';
    admin.approveKayit(Kayit("Danisan3","Danisman3"));
    std::cout << "Unapproved List: " << '\n';
    admin.showUnapprovedKayitList();
    std::cout << "Approved List: " << '\n';
    admin.showApprovedKayitList();

    
    // This section is for error testing at full list situation

    /*
    // Adds 98 more kayıts to fill the list and test for full list error
    std::cout << "Adding 98 more kayit to fill the kayit list last addition should give full list error" << '\n';
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
    std::cout << "Approve 5 more kayit" << '\n';
    for(int i = 5; i < 10; i++)
    {
        admin.approveKayit(i);
    }
    
    // Approves more kayıts at the same index(different kayıt's) and shows the list
    std::cout << "Approve 2 more kayit at the same index" << '\n';
    std::cout << "Unapproved List: " << '\n';
    admin.showUnapprovedKayitList();
    admin.approveKayit(22);
    std::cout << "Unapproved List: " << '\n';
    admin.showUnapprovedKayitList();
    std::cout << "Approved List: " << '\n';
    admin.showApprovedKayitList();
    admin.approveKayit(22);
    std::cout << "Unapproved List: " << '\n';
    admin.showUnapprovedKayitList();
    std::cout << "Approved List: " << '\n';
    admin.showApprovedKayitList();

    // Approves a spesific kayıt and shows the list
    std::cout << "Approve kayit danisan33,danisman33" << '\n';
    admin.approveKayit(Kayit("Danisan33","Danisman33"));
    std::cout << "Unapproved List: " << '\n';
    admin.showUnapprovedKayitList();
    std::cout << "Approved List: " << '\n';
    admin.showApprovedKayitList();
    std::cout << "Approve last kayit" << '\n';
    admin.approveKayit(91);
    std::cout << "Unapproved List: " << '\n';
    admin.showUnapprovedKayitList();
    std::cout << "Approved List: " << '\n';
    admin.showApprovedKayitList();
    std::cout << "Trying to approve out of bounds kayit" << '\n';
    admin.approveKayit(91);
    std::cout << "Unapproved List: " << '\n';
    admin.showUnapprovedKayitList();
    std::cout << "Approved List: " << '\n';
    admin.showApprovedKayitList();
    */
   
    std::cout<< "Finish"<< '\n';
    return 0;
}