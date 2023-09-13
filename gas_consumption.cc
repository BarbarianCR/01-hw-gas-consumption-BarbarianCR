/**
 *   @file: gas_consumption.cc
 * @author: Braden Schneider
 *   @date: 09/12/2023
 *  @brief: First hw project for cs 2400 about gas consumption that calculates gas consumption numbers based off of driving distances input by the user
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    const double TOWN_MPG = 22.5; ///Creating the constants for miles per gallon
    const double HIGHWAY_MPG = 29.5;


    cout << "How many miles were driven in town: "; ///Prompting the user for amount of miles driven in town
    double town_miles;
    cin >> town_miles;

    if  (town_miles < 0 ) ///Checking if the amount of miles is at least 0
    {
        cout << "Error: Number of town miles cannot be negative." << endl;
    
        return 0;
    }
    
    cout << "How many miles were driven on the highway: "; ///Prompting the user for the amount of miles driven on the highway
    double highway_miles;
    cin >> highway_miles;
    
    if (highway_miles < 0 ) ///Checking if amount of miles is at least 0
    {
        cout << "Error: Number of highway miles cannot be negative." << endl;

        return 0;
    }

   
    double town_gas = (town_miles / TOWN_MPG); ///Calculating the amount of gas used in town using variables that were assigned earlier
    double highway_gas = (highway_miles / HIGHWAY_MPG); //Calculating the amount of gas used on the highway
    
    double total_miles = (town_miles + highway_miles); ///Calculating the total amount of miles driven
    double total_consumption = (town_gas + highway_gas); ///Calculating the total amount of gas used
    double average_mpg = (total_miles / total_consumption); ///Determining the average mpg of the trip
    

    
    
    cout << fixed << setprecision(1); ///Rounding the output to one decimal place
    cout << "-------------------Gas consumption-------------------" << endl /// Output statement
    << "The number of miles driven in town: " << town_miles << " miles" << endl
    << "The gas consumption for town driving: " << town_gas << " gallons" << endl
    << "The number of miles driven on the highway: " << highway_miles << " miles" << endl
    << "The gas consumption for highway driving: " << highway_gas << " gallons" << endl
    << "The total miles driven: " << total_miles << " miles" << endl
    << "The total gas consumption: " << total_consumption << " gallons" << endl;
    
    if (total_consumption == 0) ///If the average cannot be calculated it will print this
    {
        cout << "No Average can be calculated." << endl;
    }
    else ///If average can be calculated it will be printed
    {
        cout << "The average mpg for the trip: " << average_mpg << " miles/gallon" << endl;
    }

return 0;
}
