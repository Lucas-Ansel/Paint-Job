#include <iostream>
#include <iomanip>
using namespace std;

void paintJob();

int main()
{
  paintJob();
  return 0;
}

void paintJob()
{
  //constants and variables
  const int COST_OF_LABOR = 25;
  const int GALLONS_PER_110_SQR_FT = 1;
  const int HOURS_PER_110_SQR_FT = 8;

  int numberOfRooms;
  double pricePerGallon;
  double squareFeet;
  double totalSquareFeet;
  double numberOfGallons;
  double hoursOfLabor;
  double priceOfPaint;
  double laborCharges;
  double total;

  //input for number of rooms
  cout << "How many rooms are being painted? : ";
  cin >> numberOfRooms;
  cout << endl;

  //if statement for num of rooms
  if(numberOfRooms < 1)
  {
    cout << "Invalid input" << endl;
    cout << "How many rooms are being painted? : ";
    cin >> numberOfRooms;
    cout << endl;
  }

  //input for price of paint
  cout << "How much does each gallon of paint cost? : ";
  cin >> pricePerGallon;
  cout << endl;

  //if statement for price of paint
  if(pricePerGallon < 10.00)
  {
    cout << "Invalid input" << endl;
    cout << "How much does each gallon of paint cost? : ";
    cin >> pricePerGallon;
    cout << endl;
  }

  //for loop for wall space in each room
  for(int i = 1; i <= numberOfRooms; i++)
  {
    cout << "What is the square feet of wall space in room " << i << "? : ";
    cin >> squareFeet;
    cout << endl;
    totalSquareFeet = totalSquareFeet + squareFeet;
  }

  //if statement for wall space
  if(totalSquareFeet < 0)
  {
    cout << "Invalid input" << endl;
    for(int i = 1; i <= numberOfRooms; i++)
    {
      cout << "What is the square feet of wall space in room " << i << "? : ";
      cin >> squareFeet;
      cout << endl;
      totalSquareFeet = totalSquareFeet + squareFeet;
    }
  }

  //number of gallons of paint required
    numberOfGallons = totalSquareFeet / 110;
    cout << "Number of gallons of paint required: " << std::fixed << std::setprecision(2) << numberOfGallons << endl;

  //hours of labor required
  hoursOfLabor = numberOfGallons * HOURS_PER_110_SQR_FT;
  cout << "Hours of labor required: " << std::fixed << std::setprecision(2) << hoursOfLabor << endl;

  //cost of paint
  priceOfPaint = numberOfGallons * pricePerGallon;
  cout << "The cost of the paint: " << std::fixed << std::setprecision(2) << priceOfPaint << endl;

  //labor charges
  laborCharges = COST_OF_LABOR * hoursOfLabor;
  cout << "The labor charges: " << std::fixed << std::setprecision(2) << laborCharges << endl;

  //total cost of paint job
  total = laborCharges + priceOfPaint;
  cout << "The total cost of the paint job: " << std::fixed << std::setprecision(2) << total << endl;
}
