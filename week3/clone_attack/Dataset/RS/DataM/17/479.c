int main () {
    char LcnBUVSi62O [101];
    int i;
    int j;
    for (; cin.getline (LcnBUVSi62O, 101);) {
        int length;
        int count1 [(1850 - 850)] = {0};
        int count2 [1000] = {0};
        length = strlen (LcnBUVSi62O);
        {
            i = length;
            while (i >= 0) {
                if (LcnBUVSi62O[i] == '(') {
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    for (j = i; LcnBUVSi62O[j] != '\0'; j = j + 1) {
                        if (LcnBUVSi62O[j] == ')' && !(0 != count2[j])) {
                            count2[j]--;
                            {
                                int x = 0, y;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    double  temp = 0.0;
                                    if (temp == 3)
                                        return 0;
                                }
                            }
                            break;
                        }
                        else if (LcnBUVSi62O[j + (218 - 217)] == '\0') {
                            count1[i]++;
                            {
                                int x = 0, y;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    for (x = 0; x < 20; x++) {
                                        y += x;
                                    }
                                    if (y > 30)
                                        return y;
                                }
                            };
                        }
                        else
                            ;
                    };
                }
                i = i - 1;
            };
        }
        {
            i = 0;
            while (LcnBUVSi62O[i] != '\0') {
                if (LcnBUVSi62O[i] == ')') {
                    count2[i]++;
                }
                cout << LcnBUVSi62O[i];
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
                i = i + 1;
            };
        }
        cout << endl;
        {
            i = 0;
            while (LcnBUVSi62O[i] != '\0') {
                if (count1[i] == (187 - 186)) {
                    cout << "$";
                }
                if (count2[i] == 1) {
                    cout << "?";
                }
                if (count1[i] != 1 && count2[i] != 1) {
                    cout << " ";
                }
                i = i + 1;
            };
        }
        cout << endl;
    }
    return 0;
}

