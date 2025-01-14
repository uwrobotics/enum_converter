# enum_converter

#Data_Serializer
project_steup:
Collect and serialize user input with support for multiple data types: integers, doubles, and booleans.
Featuring endian conversion and check for maintaining data integrity within an 8-byte buffer limit.
Dynamically determines the memory size required for each type using getTypeSize and store the input in a serialized format.

test_cases:
1. Enter type (int/double/boolean): double
Enter double value: 1.1
Enter type (int/double/boolean): double
Enter double value: 1.1
Enter type (int/double/boolean): double
Enter double value: 1.1
Cannot add more data.

2. Enter type (int/double/boolean): 5
Invalid type. Try again.

3. Enter type (int/double/boolean): int
Enter integer value: 1
Enter type (int/double/boolean): int
Enter integer value: 2
Enter type (int/double/boolean): int
Enter integer value: 3
Enter type (int/double/boolean): int
Enter integer value: 4
Enter type (int/double/boolean): int
Enter integer value: 5
Enter type (int/double/boolean): int
Enter integer value: 6
Enter type (int/double/boolean): int
Enter integer value: 7
Enter type (int/double/boolean): int
Enter integer value: 8
Enter type (int/double/boolean): iny
Invalid type. Try again.
Enter type (int/double/boolean): int
Enter integer value: 9
Cannot add more data.
