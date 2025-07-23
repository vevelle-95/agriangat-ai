~~~~~~~~~~~~~for Python~~~~~~~~~~~~~
# Prompt for count of User Input
count = int(input())
egg = 0

# Go through each loop
for i in range(count):
    x, y, z = input().split(" ")
    
    # Check if its Eggy // alternative is loop through lists
    if x == "0" or y == "0" or z == "0":
        egg = 1

# If Egg is ticked, print the appropriate response
print("EGGNOG" if egg ==1 else "EGGNOT")

~~~~~~~~~~~~~for C~~~~~~~~~~~~~

#include <stdio.h>
#include <stdbool.h>

int main() {
    int num1, x, y, z;
    bool egg = false;

    // Prompt for count of User Input
    scanf("%d", &num1);

    // Go through each loop
    for (int i = 0; i < num1; i++) {
        scanf("%d %d %d", &x, &y, &z);
        if (x == 0||y == 0||z == 0) {
            egg = true;
        }
    }
    
    (egg == true) ? printf("EGGNOG\n") : printf("EGGNOT\n");
    
    return 0;
}

~~~~~~~~~~~~~for C++~~~~~~~~~~~~~

#include <iostream>
using namespace std;

int main() {
    int egg, num1, x, y, z;
    cin >> num1;
    for (int i = 0; i < num1; i++) {
        cin >> x >> y >> z;
        if (x == 0||y == 0||z == 0) {
            egg = 1;
        }
    }
    
    string result = (egg == 1) ? "EGGNOG" : "EGGNOT";
    cout << result;
    
    return 0;
}