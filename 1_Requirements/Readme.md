# Requirements
## Introduction


* A Parking Guidance System helps in proper allocation of the parking spot to the vehicles. The system will help the drivers with the exact location, where to park. The System also holds the data of the car driver and the car. With this data, we can calculate what charges are to be paid for differrent type of vehicles and how long the vehicle was parked.

## Research

* Many a times we have noticed long queues in the parking lot.
* The possible reasons are:
    * People inside are finding a parking spot.
    * Someone is having an arguement regarding the spot. (I saw it first!!!)
    * The manager might run out of paper and is unable to make tickets.(After all it's india, anything can happen here!!!)
* The Parking charges depends on the type of the vehicle and how long the vehicle was parked.

## Cost and Features
* The system might cost around 50,000 INR.
* The system consists of a software to collect the data and store it.
* The indication mechanism is required for indicating the parking spot location.
* The data used can be used for future infrastructure improvements.
* The system will ensure security as each and every car is allocated a specific spot. So, if some ransom vehicle is parked the system will raise an alert.
* As managemnet becomes fast, more vehicles can be accomadated, generating more revenue.
* The system installation cost can be recovered within a year.


## Defining Our System
* The system is made with a goal that whenever a car arrives at the start point, it gets a specific location assigned to park their vehicle.
* The empty spots should be counted continuosly such that the real time data is available to the manager.
* The system notes down the entry time and exit time, accordingly the charges will be calculated.
* The system has to assign the nearest spot possible to the vehicles.
* The system should update the count whenever the vehicle left the spot vacant.

## SWOT ANALYSIS
<img src="https://github.com/Dhyey-Hulk/LTTS-MiniProject/blob/master/Images_Videos/Parking management.png">

# 4W&#39;s and 1&#39;H

## Who:
* Anyone who is in parking management business.
## What:

* Often we wait outside parking facility and when our chance comes the facility gets full.
* We have to find a place to park the vehicle and explore the whole area to find an empty spot. 

## When:

* The problems are faced almost everytime there is an event. 
* Outside of Movie Theatres, Stadiums, Auditoriums, etc.

## Where:

* Any parking facility with some basic required infrastructure.

## How:

* The system will look after the area and indicate how many spots are vacant and assign them accordingly.

# Detail requirements
## High Level Requirements:

| ID | Description | Status (Implemented/Future) |
|----|-------------|-----------------------------|
| HLR01 | User should be able to enter and delete the data | Implemented |
| HLR02 | User should see the status of the space available | Implemented |
| HLR03 | User should get the address of the nearest empty spot | Implemented |
| HLR04 | User should get the charge to be paid | Future |
| HLR05 | User can get additional features | Future |


##  Low level Requirements:
| ID | Description | HLR ID | Status (Implemented/Future) |
|----|-------------|--------|---------------------|
| LLR01 | New entry is to be added by pressing 1 | HLR01 | Implemented |
| LLR02 | Data to entered should have vehicle registered plate no. , type of vehicle, contact no. for emergency |  HLR01 |Implemented |
| LLR03 | To print out the address of the assigned nearest spot | HLR03 | Implemented |
| LLR04 | Update the status of the vacancy in parking area | HLR02 | Implemented |
| LLR05 | Print out the charge incurred at the time exit | HLR04 | Future |
| LLR06 | Delete the entry by pressing 2 and adding the location | HLR01 | Implemented |
| LLR07 | Again update the status of vacancy | HLR02 | Implemented |
| LLR08 | The system should refresh itself after every change in the entry | HLR02 | Implemented |
| LLR09 | Store data after every entry so that power failure doesn't erase data | HLR05 | Future |
| LLR10 | A customer can book the spot earlier | HLR05 | Future |
| LLR11 | Online payment option for charges | HLR05 | Future |
