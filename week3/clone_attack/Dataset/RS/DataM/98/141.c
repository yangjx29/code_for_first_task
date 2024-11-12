int main () {
    int length1 = 0, length2 = 0, length3 = 0;
    int number;
    number = (777 - 777);
    char string1 [50], string2 [50];
    gets (string1);
    int k;
    int n6u0gH;
    int zXtsLePGc;
    k = 0;
    n6u0gH = 0;
    zXtsLePGc = 0;
    cin >> number;
    cin >> string1;
    cout << string1;
    length1 = strlen (string1);
    k = 1;
    while (number > k) {
        k = k + 1;
        cin >> string2;
        length2 = strlen (string2);
        length1 = length1 + length2 + 1;
        if (80 >= length1)
            cout << " " << string2;
        else {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            if (length1 > 80) {
                cout << endl;
                cout << string2;
                strcpy (string1, string2);
                length1 = strlen (string1);
            };
        };
    }
    return 0;
}

