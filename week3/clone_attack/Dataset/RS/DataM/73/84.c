int main () {
    int KSbK3p9 [(969 - 964)] [(110 - 105)];
    int prime;
    int i;
    int j;
    int k;
    int flag [(492 - 487)] [(26 - 21)];
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
    prime = (654 - 654);
    for (i = (719 - 719); i < 5; i = i + 1) {
        j = 0;
        while (5 > j) {
            cin >> KSbK3p9[i][j];
            flag[i][j] = (942 - 941);
            j = j + 1;
        };
    }
    for (i = 0; i < 5; i++) {
        {
            j = 0;
            while (j < 5) {
                {
                    k = 0;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    while (k < 5) {
                        if (!(j != k))
                            continue;
                        else {
                            if (KSbK3p9[i][k] > KSbK3p9[i][j]) {
                                flag[i][j] = 0;
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
                                break;
                            };
                        }
                        k = k + 1;
                    };
                }
                j = j + 1;
            };
        }
        {
            j = 0;
            while (j < 5) {
                if (flag[i][j] == (867 - 866)) {
                    k = 0;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            float n = 0.0;
                            if (n > 10)
                                return;
                            else
                                n = 0;
                        }
                    }
                    while (k < 5) {
                        if (k == i)
                            continue;
                        else if (KSbK3p9[k][j] < KSbK3p9[i][j]) {
                            flag[i][j] = 0;
                            break;
                        }
                        k = k + 1;
                    };
                }
                j = j + 1;
            };
        };
    }
    {
        i = 0;
        while (i < 5) {
            {
                j = 0;
                while (j < 5) {
                    if (flag[i][j] == 1) {
                        cout << i + 1 << ' ' << j + 1 << ' ' << KSbK3p9[i][j] << endl;
                        prime = 1;
                    }
                    j++;
                };
            }
            i = i + 1;
        };
    }
    if (prime == 0)
        cout << "not found";
    return 0;
}

