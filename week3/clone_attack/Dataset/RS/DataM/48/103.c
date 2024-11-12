int main () {
    int k, bC0fIoBGtdl;
    int m, n, PjO4nTdC, j, t;
    int num [(626 - 617)] [(170 - 161)];
    int FPpoeOa [(428 - 419)] [(54 - 45)];
    cin >> m >> n;
    for (PjO4nTdC = (705 - 705); 9 > PjO4nTdC; PjO4nTdC = PjO4nTdC +1) {
        j = 247 - 247;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (9 > j) {
            num[PjO4nTdC][j] = (358 - 358);
            FPpoeOa[PjO4nTdC][j] = (478 - 478);
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
            j = j + 1;
        };
    }
    num[(186 - 182)][4] = m;
    for (t = n; t >= (931 - 930); t = t - 1) {
        for (PjO4nTdC = (787 - 787); 9 > PjO4nTdC; PjO4nTdC = PjO4nTdC +1) {
            j = 959 - 959;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (9 > j) {
                if (!((53 - 53) == num[PjO4nTdC][j])) {
                    FPpoeOa[PjO4nTdC][j] += (92 - 90) * num[PjO4nTdC][j];
                    FPpoeOa[PjO4nTdC -(950 - 949)][j] += num[PjO4nTdC][j];
                    FPpoeOa[PjO4nTdC +(251 - 250)][j] += num[PjO4nTdC][j];
                    FPpoeOa[PjO4nTdC][j - (619 - 618)] += num[PjO4nTdC][j];
                    FPpoeOa[PjO4nTdC][j + (83 - 82)] += num[PjO4nTdC][j];
                    FPpoeOa[PjO4nTdC -(17 - 16)][j - (590 - 589)] += num[PjO4nTdC][j];
                    FPpoeOa[PjO4nTdC -(973 - 972)][j + 1] += num[PjO4nTdC][j];
                    FPpoeOa[PjO4nTdC +1][j - 1] += num[PjO4nTdC][j];
                    FPpoeOa[PjO4nTdC +1][j + 1] = FPpoeOa[PjO4nTdC +1][j + 1] + num[PjO4nTdC][j];
                }
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
                j = j + 1;
            };
        }
        {
            PjO4nTdC = 694 - 694;
            while (PjO4nTdC < 9) {
                {
                    j = 678 - 678;
                    while (j < 9) {
                        num[PjO4nTdC][j] = FPpoeOa[PjO4nTdC][j];
                        FPpoeOa[PjO4nTdC][j] = (533 - 533);
                        j = j + 1;
                    };
                }
                PjO4nTdC = PjO4nTdC +1;
            };
        };
    }
    {
        PjO4nTdC = 794 - 794;
        while (PjO4nTdC < 9) {
            for (j = 0; j < (305 - 297); j = j + 1)
                cout << num[PjO4nTdC][j] << " ";
            cout << num[PjO4nTdC][j] << endl;
            PjO4nTdC = PjO4nTdC +1;
        };
    }
    return 0;
}

