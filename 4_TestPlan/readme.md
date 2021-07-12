# TEST PLAN:

## Table no: High level test plan

| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
| H_01 | Mode to start/stop the application | 0 | Execution Ended | Execution Ended | Requirement based |
| H_02 | Mode to start/stop the application | 1 | Ask for operation to be performed | Ask for operation to be performed | Requirement based |
| H_03 | Operation to be performed (Data Entry) | 1 | <li> Lot No: X Row: X Column: X <li>Enter number plate: | <li> Lot No: X Row: X Column: X <li>Enter number plate: | Requirement based |
| H_04 | Operation to be performed (Data Erase) | 2 | <li> Enter location to delete: <li> Row: | <li> Enter location to delete: <li> Row: | Requirement based |
| H_05 | Operation to be performed (Show Status) | 3 | <li> Vacant spots: <li> Lot1:X Lot2:X Lot3:X Lot4:X | <li> Vacant spots: <li> Lot1:X Lot2:X Lot3:X Lot4:X | Requirement based |
| H_06 | Erroneous Operation entered | 4 | Ask the mode again | Ask the mode again | Scenario based |
| H_07 | Entered Mode was erroneous | 3 | Execution Ended | Execution Ended | Scenario based |


## Table no: Low level test plan

| **Test ID** | **Description**                                              | **Exp IN** | **Exp OUT** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
| L_01 | Entering the data | <li> Numer Plate: MH07KH1721 <li> Name: Kumar <li> Mobile Number: 9908238977 | Not Applicable | Not Applicable | Scenario based |
| L_02 | Erasing the data | <li> Row: 1 <li> Column: 1 <li> Lot Number: 1  | Not Applicable | Not Applicable | Scenario based |
| L_03| Status of the parking lot | Not Applicable | <li> Lot1: 99 <li> Lot2:100 <li> Lot3: 100 <li> Lot4: 100 | <li> Lot1: 99 <li> Lot2:100 <li> Lot3: 100 <li> Lot4: 100 | Scenario based |
| L_04 | When Parking lot is full | Not Applicable | Parking facility is full | Parking facility is full | Boundary based |
