#pragma once


class Swap
{
  public:
  //Constructor
  Swap(); 
  Swap(float Rate_A_Fix, float Rate_B_Flt);
  //Deconstructor
  ~Swap(); 
  
  //Variables
    float Client_A_Rate_Fixed;
    float Client_A_Rate_Float;

    float Client_B_Rate_Fixed;
    float Client_B_Rate_Float;
  
  //Default Variables
    float Notional = 100; 

  //Methods
    void PriceSwapFixAFloatB(); 
    

  
};