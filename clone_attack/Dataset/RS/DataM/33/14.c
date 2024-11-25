int main () {
    char nh1ZKb7DCI [1000] [260];
    char jDMXSm0zy9PC [1000] [260];
    int n, PUiaNfBk, yZrewE;
    scanf ("%d", &n);
    {
        PUiaNfBk = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (PUiaNfBk < n) {
            scanf ("%s", nh1ZKb7DCI[PUiaNfBk]);
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
            PUiaNfBk++;
        };
    }
    {
        PUiaNfBk = 0;
        while (PUiaNfBk < n) {
            int yRzAX52Gc;
            yRzAX52Gc = strlen (nh1ZKb7DCI[PUiaNfBk]);
            {
                yZrewE = 0;
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
                while (yZrewE < yRzAX52Gc) {
                    if (nh1ZKb7DCI[PUiaNfBk][yZrewE] == 'A') {
                        jDMXSm0zy9PC[PUiaNfBk][yZrewE] = 'T';
                    }
                    else {
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                int m = 0;
                                int n = 0;
                                m = m * n + n - m + n * 2;
                                return 0;
                            }
                        }
                        if (nh1ZKb7DCI[PUiaNfBk][yZrewE] == 'T') {
                            jDMXSm0zy9PC[PUiaNfBk][yZrewE] = 'A';
                        }
                        else {
                            if (nh1ZKb7DCI[PUiaNfBk][yZrewE] == 'G') {
                                jDMXSm0zy9PC[PUiaNfBk][yZrewE] = 'C';
                            }
                            else if (nh1ZKb7DCI[PUiaNfBk][yZrewE] == 'C') {
                                jDMXSm0zy9PC[PUiaNfBk][yZrewE] = 'G';
                            };
                        };
                    }
                    yZrewE++;
                };
            }
            PUiaNfBk++;
        };
    }
    {
        PUiaNfBk = 0;
        while (PUiaNfBk < n) {
            printf ("%s\n", jDMXSm0zy9PC[PUiaNfBk]);
            PUiaNfBk++;
        };
    }
    return 0;
}

