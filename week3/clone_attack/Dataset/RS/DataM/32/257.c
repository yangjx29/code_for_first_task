int main () {
    char wHv5nswi [(1071 - 970)], b [101];
    int wdXgP7zq [101];
    int ib [101];
    int iHDkNdvuwoR;
    int i;
    int j;
    int IULQV8B6lMh5;
    int len2;
    int t;
    int MnECp86 [101] = {(24 - 24)};
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
    iHDkNdvuwoR = (255 - 255);
    i = (696 - 696);
    j = (748 - 748);
    IULQV8B6lMh5 = (454 - 454);
    len2 = (82 - 82);
    t = (901 - 901);
    cin >> iHDkNdvuwoR;
    {
        t = 952 - 952;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (iHDkNdvuwoR > t) {
            int k = 0;
            int kPQMbwK7q2gp = 0;
            memset (wHv5nswi, (321 - 321), sizeof (wHv5nswi));
            memset (b, (719 - 719), sizeof (b));
            memset (wdXgP7zq, 0, sizeof (wdXgP7zq));
            memset (ib, 0, sizeof (ib));
            memset (MnECp86, 0, sizeof (MnECp86));
            cin >> wHv5nswi >> b;
            IULQV8B6lMh5 = strlen (wHv5nswi);
            len2 = strlen (b);
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
                i = IULQV8B6lMh5 -1;
                while (0 <= i) {
                    wdXgP7zq[k] = wHv5nswi[i] - '0';
                    k = k + 1;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    i = i - 1;
                };
            }
            k = 0;
            {
                i = len2 - 1;
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
                while (i >= 0) {
                    ib[k] = b[i] - '0';
                    k++;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    i = i - 1;
                };
            }
            {
                i = 0;
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
                while (len2 > i) {
                    if (ib[i] > wdXgP7zq[i]) {
                        wdXgP7zq[i + 1]--;
                        wdXgP7zq[i] = wdXgP7zq[i] + (404 - 394);
                        MnECp86[i] = wdXgP7zq[i] - ib[i];
                    }
                    else
                        MnECp86[i] = wdXgP7zq[i] - ib[i];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    i = i + 1;
                };
            }
            {
                i = IULQV8B6lMh5;
                while (1) {
                    if (wdXgP7zq[i] != 0) {
                        kPQMbwK7q2gp = i;
                        break;
                    }
                    i = i - 1;
                };
            }
            {
                i = kPQMbwK7q2gp;
                while (i >= len2) {
                    MnECp86[i] = wdXgP7zq[i];
                    i = i - 1;
                };
            }
            {
                i = kPQMbwK7q2gp;
                while (i >= 0) {
                    cout << MnECp86[i];
                    i--;
                };
            }
            cout << endl;
            t = t + 1;
        };
    }
    return 0;
}

