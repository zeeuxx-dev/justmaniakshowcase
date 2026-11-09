#include <iostream>
#include <chrono>
#include <thread>

int main()
{
    std::cout << "Hello Maniak!\n";
    std::cout << "Proiectele lui JustManiak: \n";
    std::cout << "1. maniak.cc  - Inceputul \n";
    std::cout << "2. nyami.cc   - Sincer nu stiu ce e scuze \n";
    std::cout << "3. limbo.ink  - Actualul lui proiect, va fi cel mai dezvoltat \n";
    std::cout << "\n";
    int note[3] = { 10, 0, 11 };
    int m = 10;
    std::cout << "Ce note au proiectele lui JustMaiak? -/" << m << "\n";
    std::cout << "1. maniak.cc  - " << note[0] << ", desi a fost primul lui proiect public, a fost unul foarte bun si apreciat de clienti. \n";
    std::cout << "2. nyami.cc   - Sincer nu stiu ce e, scuze, nu pot sa dau rating \n";
    std::cout << "3. limbo.ink  - " << note[2] << ", cel mai nou si cel mai dezvoltat dintre toate. Va deveni cel mai bun. \n";
    std::this_thread::sleep_for(std::chrono::seconds(10));
    return 0;
}