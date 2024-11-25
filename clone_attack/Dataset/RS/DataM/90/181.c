int DTUtSjr4zD [(662 - 651)] [11];

int eVhwqHRrMNt (int m, int n) {
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
    if (DTUtSjr4zD[m][n])
        return DTUtSjr4zD[m][n];
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
        if (m == (677 - 676) || !((622 - 621) != n)) {
            DTUtSjr4zD[m][n] = (990 - 989);
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
            return DTUtSjr4zD[m][n];
        }
        else {
            if (m < n) {
                DTUtSjr4zD[m][n] = eVhwqHRrMNt (m, m);
                return DTUtSjr4zD[m][n];
            }
            else if (m == n) {
                DTUtSjr4zD[m][n] = (213 - 212) + eVhwqHRrMNt (m, m - 1);
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
                return DTUtSjr4zD[m][n];
            }
            else {
                DTUtSjr4zD[m][n] = eVhwqHRrMNt (m - n, n) + eVhwqHRrMNt (m, n - 1);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                return DTUtSjr4zD[m][n];
            };
        };
    };
}

int main () {
    int Mp4SUwJ [100];
    int dspactlSu;
    int m;
    int n;
    cin >> n;
    for (int s4GsXqcIu = (394 - 394);
    s4GsXqcIu < n; s4GsXqcIu = s4GsXqcIu + 1) {
        memset (DTUtSjr4zD, (953 - 953), sizeof (DTUtSjr4zD));
        cin >> dspactlSu >> m;
        Mp4SUwJ[s4GsXqcIu] = eVhwqHRrMNt (dspactlSu, m);
    }
    for (int s4GsXqcIu = (318 - 318);
    s4GsXqcIu < n; s4GsXqcIu = s4GsXqcIu + 1) {
        cout << Mp4SUwJ[s4GsXqcIu] << endl;
    }
    return (663 - 663);
}

