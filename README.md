# enum_converter <br>
<br>
Data_Serializer <br>
<br>
project_steup:  <br>
Collect and serialize user input with support for multiple data types: integers, doubles, and booleans. <br>
Featuring endian conversion and check for maintaining data integrity within an 8-byte buffer limit. <br>
Dynamically determines the memory size required for each type using getTypeSize and store the input in a serialized format. <br>
<br>
test_cases: <br>
1. Enter type (int/double/boolean): double <br>
Enter double value: 1.1 <br>
Enter type (int/double/boolean): double <br>
Enter double value: 1.1 <br>
Enter type (int/double/boolean): double <br>
Enter double value: 1.1 <br>
Cannot add more data. <br>

2. Enter type (int/double/boolean): 5 <br>
Invalid type. Try again. <br>
 
3. Enter type (int/double/boolean): int <br>
Enter integer value: 1 <br>
Enter type (int/double/boolean): int <br>
Enter integer value: 2 <br>
Enter type (int/double/boolean): int <br>
Enter integer value: 3 <br>
Enter type (int/double/boolean): int <br>
Enter integer value: 4 <br>
Enter type (int/double/boolean): int <br>
Enter integer value: 5 <br>
Enter type (int/double/boolean): int <br>
Enter integer value: 6 <br>
Enter type (int/double/boolean): int <br>
Enter integer value: 7 <br>
Enter type (int/double/boolean): int <br>
Enter integer value: 8 <br>
Enter type (int/double/boolean): iny <br>
Invalid type. Try again. <br>
Enter type (int/double/boolean): int <br>
Enter integer value: 9 <br>
Cannot add more data. <br>
