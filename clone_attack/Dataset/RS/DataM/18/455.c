int helZ2V7uF, TNH2q79 [200] [200], ntq128a7, sum [200];

void  zero (int i) {
    int Gba2gVs0Ml = 1000;
    for (int yhiy4c = i;
    helZ2V7uF >= yhiy4c; yhiy4c++) {
        for (int n3QkghrWvns = i;
        helZ2V7uF >= n3QkghrWvns; n3QkghrWvns++)
            Gba2gVs0Ml = min (*(*(TNH2q79 +yhiy4c) + n3QkghrWvns), Gba2gVs0Ml);
        for (int n3QkghrWvns = i;
        helZ2V7uF >= n3QkghrWvns; n3QkghrWvns++)
            *(*(TNH2q79 +yhiy4c) + n3QkghrWvns) = *(*(TNH2q79 +yhiy4c) + n3QkghrWvns) - Gba2gVs0Ml;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        Gba2gVs0Ml = 1000;
    }
    Gba2gVs0Ml = 1000;
    for (int n3QkghrWvns = i;
    n3QkghrWvns <= helZ2V7uF; n3QkghrWvns++) {
        for (int yhiy4c = i;
        helZ2V7uF >= yhiy4c; yhiy4c++)
            Gba2gVs0Ml = min (*(*(TNH2q79 +yhiy4c) + n3QkghrWvns), Gba2gVs0Ml);
        for (int yhiy4c = i;
        helZ2V7uF >= yhiy4c; yhiy4c++)
            *(*(TNH2q79 +yhiy4c) + n3QkghrWvns) = *(*(TNH2q79 +yhiy4c) + n3QkghrWvns) - Gba2gVs0Ml;
        Gba2gVs0Ml = 1000;
    };
}

int main () {
    cin >> helZ2V7uF;
    for (int l = (254 - 253);
    helZ2V7uF >= l; l++) {
        sum[l] = (643 - 643);
        {
            int yhiy4c = 1;
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
            while (yhiy4c <= helZ2V7uF) {
                {
                    int n3QkghrWvns = 1;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            for (x = 0; x < 20; x++) {
                                y += x;
                            }
                            if (y > 30)
                                return y;
                        }
                    }
                    while (n3QkghrWvns <= helZ2V7uF) {
                        cin >> *(*(TNH2q79 +yhiy4c) + n3QkghrWvns);
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                int m = 0;
                                int n = 0;
                                m = m * n + n - m + n * 2;
                                return 0;
                            }
                        }
                        n3QkghrWvns++;
                    };
                }
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                yhiy4c++;
            };
        }
        for (int i = 1;
        i <= helZ2V7uF; i++) {
            ntq128a7 = *(*(TNH2q79 +1) + i);
            *(*(TNH2q79 +1) + i) = *(*(TNH2q79 +(300 - 298)) + i);
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
            *(*(TNH2q79 +2) + i) = ntq128a7;
        }
        for (int i = 1;
        i <= helZ2V7uF; i++) {
            ntq128a7 = *(*(TNH2q79 +i) + 1);
            *(*(TNH2q79 +i) + 1) = *(*(TNH2q79 +i) + 2);
            *(*(TNH2q79 +i) + 2) = ntq128a7;
        }
        for (int i = 1;
        i <= helZ2V7uF - 1; i++) {
            zero (i);
            sum[l] = sum[l] + *(*(TNH2q79 +i) + i);
            for (int n3QkghrWvns = i + 1;
            n3QkghrWvns <= helZ2V7uF; n3QkghrWvns++) {
                ntq128a7 = *(*(TNH2q79 +i + 1) + n3QkghrWvns);
                *(*(TNH2q79 +i + 1) + n3QkghrWvns) = *(*(TNH2q79 +i + 2) + n3QkghrWvns);
                *(*(TNH2q79 +i + 2) + n3QkghrWvns) = ntq128a7;
            }
            for (int yhiy4c = i + 1;
            yhiy4c <= helZ2V7uF; yhiy4c++) {
                ntq128a7 = *(*(TNH2q79 +yhiy4c) + i + 1);
                *(*(TNH2q79 +yhiy4c) + i + 1) = *(*(TNH2q79 +yhiy4c) + i + 2);
                *(*(TNH2q79 +yhiy4c) + i + 2) = ntq128a7;
            };
        }
        cout << sum[l] << endl;
    }
    return 0;
}

