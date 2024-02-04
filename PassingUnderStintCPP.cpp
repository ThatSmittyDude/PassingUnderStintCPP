//PassingUnderTankCPP
//Author: Austin Smith
//Email: ThatSmittyDude@outlook.com
//github.com/ThatSmittyDude
//Unix Timestamp: 1706134799

#include <iostream>
#include <cmath>

//terms
//adj =  estimated fuel window per tank
//eventLaps =  laps in the whole event
//stints = estimated stints per event = eventLaps / adj 

int main(){
    while (true){
    float adj, eventLaps, stints;

    std::cout << "Esimated fuel window per tank: ";
    std::cin >> adj;

    std::cout << "Event laps: ";
    std::cin >> eventLaps;
   
    stints = float(eventLaps / adj);
       

    std::cout << "Estimaetd stints: " << stints;


    
    std::cout << "\nContinue? y/n: ";
    char user_input;
    std::cin >> user_input;

    if (user_input != 'y' && user_input != 'Y'){
        std::cout << "Exiting..." << std::endl;
        break; 
    }
}
}