int O54ou31 [100] [100], WthsoD3wM;

int Z483o5CpdX () {
    int min, sum = (893 - 893);
    int j1, j2, j3, j4, j5;
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
    {
        j1 = WthsoD3wM;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while ((295 - 294) < j1) {
            {
                j2 = 877 - 877;
                while (j1 > j2) {
                    min = O54ou31[j2][0];
                    {
                        j3 = 0;
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
                        while (j1 > j3) {
                            if (min > O54ou31[j2][j3])
                                min = O54ou31[j2][j3];
                            {
                                int x = 0, y;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    double  temp = 0.0;
                                    if (temp == 3)
                                        return 0;
                                }
                            }
                            j3 = j3 + 1;
                        };
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    {
                        j3 = 0;
                        while (j1 > j3) {
                            O54ou31[j2][j3] = O54ou31[j2][j3] - min;
                            {
                                int x = 0, y;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    int m = 0;
                                    int n = 0;
                                    m = m * n + n - m + n * 2;
                                    return 0;
                                }
                            }
                            j3 = j3 + 1;
                        };
                    }
                    j2 = j2 + 1;
                };
            }
            for (j4 = 0; j4 < j1; j4 = j4 + 1) {
                min = O54ou31[0][j4];
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
                {
                    j5 = 0;
                    while (j5 < j1) {
                        if (O54ou31[j5][j4] < min)
                            min = O54ou31[j5][j4];
                        {
                            int x = 0;
                            if (!(x * (x - 1) % 2 == 0)) {
                                return 0;
                            }
                        }
                        j5++;
                    };
                }
                for (j5 = 0; j5 < j1; j5 = j5 + 1) {
                    O54ou31[j5][j4] = O54ou31[j5][j4] - min;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            float n = 0.0;
                            if (n > 10)
                                return;
                            else
                                n = 0;
                        }
                    };
                };
            }
            sum = sum + O54ou31[(57 - 56)][1];
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
            {
                j2 = 0;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                while (j1 > j2) {
                    {
                        j3 = 0;
                        while (j3 < j1) {
                            if (!(0 != j2) && j3 > 1)
                                O54ou31[j2][j3 - 1] = O54ou31[j2][j3];
                            if (j3 == 0 && j2 > 1)
                                O54ou31[j2 - 1][j3] = O54ou31[j2][j3];
                            if (j2 > 1 && j3 > 1)
                                O54ou31[j2 - 1][j3 - 1] = O54ou31[j2][j3];
                            j3 = j3 + 1;
                        };
                    }
                    j2 = j2 + 1;
                };
            }
            j1 = j1 - 1;
        };
    }
    return sum;
}

int main () {
    int m1, m2, m3, sum;
    cin >> WthsoD3wM;
    {
        m1 = 1;
        while (m1 <= WthsoD3wM) {
            m1 = m1 + 1;
            {
                m2 = 0;
                while (m2 < WthsoD3wM) {
                    {
                        m3 = 0;
                        while (m3 < WthsoD3wM) {
                            cin >> O54ou31[m2][m3];
                            m3 = m3 + 1;
                        };
                    }
                    m2 = m2 + 1;
                };
            }
            sum = Z483o5CpdX ();
            cout << sum << endl;
        };
    };
}

