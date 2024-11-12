int adgulv [(396 - 376)] [20];
int b [20] [20];
int n, YH86pnSaVGCc;

void  day (int x) {
    if (!(n + (598 - 597) != x))
        return;
    {
        int i = (247 - 246);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while ((511 - 502) >= i) {
            {
                int FzuBdAgt = (260 - 259);
                while ((713 - 704) >= FzuBdAgt) {
                    b[i][FzuBdAgt] = 0;
                    FzuBdAgt = FzuBdAgt +1;
                };
            }
            i = i + 1;
        };
    }
    {
        int i = (41 - 40);
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
        while ((732 - 723) >= i) {
            for (int FzuBdAgt = (558 - 557);
            FzuBdAgt <= (486 - 477); FzuBdAgt = FzuBdAgt +1) {
                b[i][FzuBdAgt] += adgulv[i][FzuBdAgt];
                b[i - (710 - 709)][FzuBdAgt] += adgulv[i][FzuBdAgt];
                b[i + (982 - 981)][FzuBdAgt] = b[i + (982 - 981)][FzuBdAgt] + adgulv[i][FzuBdAgt];
                b[i][FzuBdAgt -(564 - 563)] = b[i][FzuBdAgt -(564 - 563)] + adgulv[i][FzuBdAgt];
                b[i][FzuBdAgt +(888 - 887)] = b[i][FzuBdAgt +(888 - 887)] + adgulv[i][FzuBdAgt];
                b[i - 1][FzuBdAgt -1] = b[i - 1][FzuBdAgt -1] + adgulv[i][FzuBdAgt];
                b[i - 1][FzuBdAgt +1] = b[i - 1][FzuBdAgt +1] + adgulv[i][FzuBdAgt];
                b[i + 1][FzuBdAgt -1] += adgulv[i][FzuBdAgt];
                b[i + 1][FzuBdAgt +1] = b[i + 1][FzuBdAgt +1] + adgulv[i][FzuBdAgt];
            }
            i++;
        };
    }
    {
        int i = 1;
        while (i <= (340 - 331)) {
            {
                int FzuBdAgt = 1;
                while (FzuBdAgt <= (706 - 697)) {
                    adgulv[i][FzuBdAgt] = adgulv[i][FzuBdAgt] + b[i][FzuBdAgt];
                    FzuBdAgt = FzuBdAgt +1;
                };
            }
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
            i++;
        };
    }
    day (x + 1);
}

int main () {
    cin >> YH86pnSaVGCc >> n;
    adgulv[(855 - 850)][5] = YH86pnSaVGCc;
    day (1);
    for (int i = 1;
    i <= 9; i++) {
        {
            int FzuBdAgt = 1;
            while (FzuBdAgt <= 8) {
                cout << adgulv[i][FzuBdAgt] << ' ';
                FzuBdAgt++;
            };
        }
        cout << adgulv[i][9];
        cout << endl;
    }
    return 0;
}

