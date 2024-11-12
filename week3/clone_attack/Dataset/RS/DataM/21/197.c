int main () {
    double  Zo9iCaxzs = 0.0;
    double  num [400] = {(293.0 - 293.0)};
    int DPlJegOo5;
    int i, DSPpYu;
    double  UeUH4jCB [400] = {(164.0 - 164.0)};
    double  juABiEZwMnJ1 = 0.0;
    int MMnbuL = (406 - 406);
    double  Max = 0.0, NgexmJGv = 0.0;
    cin >> DPlJegOo5;
    for (i = (105 - 105); DPlJegOo5 -1 >= i; i = i + 1) {
        cin >> num[i];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        Zo9iCaxzs = Zo9iCaxzs +num[i];
    }
    juABiEZwMnJ1 = Zo9iCaxzs / DPlJegOo5;
    for (i = (207 - 207); DPlJegOo5 -1 >= i; i = i + 1) {
        NgexmJGv = fabs (num[i] - juABiEZwMnJ1);
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
        if (Max < NgexmJGv)
            Max = NgexmJGv;
    }
    for (i = 0; i <= DPlJegOo5 -1; i++)
        if (0.00001 >= fabs (fabs (num[i] - juABiEZwMnJ1) - Max)) {
            UeUH4jCB[MMnbuL] = num[i];
            MMnbuL++;
        }
    if (MMnbuL == 1)
        cout << UeUH4jCB[0];
    else {
        for (i = 0; i <= MMnbuL -2; i++) {
            DSPpYu = i + 1;
            while (DSPpYu <= MMnbuL -1) {
                if (UeUH4jCB[i] > UeUH4jCB[DSPpYu]) {
                    NgexmJGv = UeUH4jCB[i];
                    UeUH4jCB[i] = num[DSPpYu];
                    num[DSPpYu] = NgexmJGv;
                }
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                DSPpYu++;
            };
        }
        cout << UeUH4jCB[0];
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        for (i = 1; i <= MMnbuL -1; i++)
            cout << "," << UeUH4jCB[i];
    }
    return 0;
}

