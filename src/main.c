#include <stdio.h>
#include <stdint.h>
#include <string.h>

typedef enum {
    TYPE_INT,
    TYPE_DOUBLE,
    TYPE_BOOLEAN
} Type;

typedef union {
    int intValue;
    double doubleValue;
    uint8_t boolValue;
} Value;

typedef struct {
    Type type;
    Value value;
} TypeValue;

void reverseendian(void* data, size_t size) {
    uint8_t* bytes = (uint8_t*)data;
    for (size_t i = 0; i < size / 2; i++) {
        uint8_t temp = bytes[i];
        bytes[i] = bytes[size - 1 - i];
        bytes[size - 1 - i] = temp;
    }
}

size_t getTypeSize(Type type) {
    switch (type) {
        case TYPE_INT: return 1;
        case TYPE_DOUBLE: return 4;
        case TYPE_BOOLEAN: return 1;
        default: return 0;
    }
}

void collectUserInput(TypeValue dataBuffer[4], uint8_t serializedBuffer[8]) {
    size_t currentBytes = 0;
    uint32_t currentCount = 0;
    
    printf("Enter data (value and type). Possible types: int, double, boolean.\n");
    printf("Enter 'stop' to finish.\n\n");
    
    while (1) {
        char typeInput[10];
        printf("Enter type (int/double/boolean): ");
        scanf("%s", typeInput);
        
        TypeValue newData;
        
        // Determine the type
        if (strcmp(typeInput, "int") == 0) {
            newData.type = TYPE_INT;
            printf("Enter integer value: ");
            scanf("%d", &newData.value.intValue);
        } else if (strcmp(typeInput, "double") == 0) {
            newData.type = TYPE_DOUBLE;
            printf("Enter double value: ");
            scanf("%lf", &newData.value.doubleValue);
        } else if (strcmp(typeInput, "boolean") == 0) {
            newData.type = TYPE_BOOLEAN;
            printf("Enter boolean value (0 or 1): ");
            scanf("%hhu", &newData.value.boolValue);
        } else if (strcmp(typeInput, "stop") == 0) {
            break;
        } else {
            printf("Invalid type. Try again.\n");
            continue;
        }
        
        // Check if adding this data would exceed the limits
        size_t newDataSize = getTypeSize(newData.type);
        if (currentCount > 8 || (currentBytes + newDataSize) > 8) {
            printf("Cannot add more data.\n");
            break;
        }
        
        // Add data to buffer
        dataBuffer[currentCount++] = newData;
        currentBytes += newDataSize;
        
    }
}
int main(int argc, char *argv[]) {
   
    return 0;
}
