int main () {
    char X4o1TQ [(694 - 494)];
    int xAdV9zuIcN;
    int MKPFmnLk6Hib [(505 - 305)] = {(453 - 453)};
    int c [200] = {(286 - 286)};
    xAdV9zuIcN = strlen (X4o1TQ);
    int sum;
    sum = (917 - 917);
    cin.getline (X4o1TQ, (1040 - 840));
    {
        int i = (586 - 586);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < xAdV9zuIcN) {
            MKPFmnLk6Hib[i] = (int) (X4o1TQ[i] - '0');
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
    {
        int i = 0;
        while (xAdV9zuIcN - (351 - 350) > i) {
            if (MKPFmnLk6Hib[i] >= (396 - 383)) {
                c[sum] = MKPFmnLk6Hib[i] / 13, MKPFmnLk6Hib[i + 1] = MKPFmnLk6Hib[i + 1] + MKPFmnLk6Hib[i] % 13 * 10;
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
                sum++;
            }
            else {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                if (sum == 0) {
                    MKPFmnLk6Hib[i + 1] = MKPFmnLk6Hib[i + 1] + MKPFmnLk6Hib[i] * 10;
                }
                else {
                    MKPFmnLk6Hib[i + 1] = MKPFmnLk6Hib[i + 1] + MKPFmnLk6Hib[i] * 10;
                    c[sum] = 0;
                    sum++;
                };
            }
            i++;
        };
    }
    c[sum] = MKPFmnLk6Hib[xAdV9zuIcN - 1] / 13;
    {
        int i = 0;
        while (i <= sum) {
            cout << c[i];
            i++;
        };
    }
    MKPFmnLk6Hib[xAdV9zuIcN - 1] = MKPFmnLk6Hib[xAdV9zuIcN - 1] % (13);
    cout << endl;
    cout << MKPFmnLk6Hib[xAdV9zuIcN - 1] << endl;
    return 0;
}

