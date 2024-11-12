main () {
    char oIs5VXC [(128 - 108)] [(792 - 691)];
    char b [(134 - 84)] [101] = {' '};
    int nZoG2vweBk;
    int v6GmQoOj3;
    int HfvRky0V;
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
    int fmX26Bg;
    int Tsk5XWc9z;
    int K8tG0Ruy [(728 - 708)];
    scanf ("%d", &nZoG2vweBk);
    {
        v6GmQoOj3 = 228 - 227;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (nZoG2vweBk >= v6GmQoOj3) {
            scanf ("%s", oIs5VXC[v6GmQoOj3]);
            K8tG0Ruy[v6GmQoOj3] = strlen (oIs5VXC[v6GmQoOj3]);
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
            v6GmQoOj3 = v6GmQoOj3 + 1;
        };
    }
    {
        fmX26Bg = 1;
        while (fmX26Bg <= nZoG2vweBk) {
            for (v6GmQoOj3 = (161 - 161); v6GmQoOj3 < K8tG0Ruy[fmX26Bg]; v6GmQoOj3++) {
                if (oIs5VXC[fmX26Bg][v6GmQoOj3] == '(')
                    b[fmX26Bg][v6GmQoOj3] = '$';
                else if (oIs5VXC[fmX26Bg][v6GmQoOj3] == ')')
                    b[fmX26Bg][v6GmQoOj3] = '?';
                else
                    b[fmX26Bg][v6GmQoOj3] = ' ';
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
            }
            {
                v6GmQoOj3 = 0;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                while (K8tG0Ruy[fmX26Bg] - 1 > v6GmQoOj3) {
                    if (b[fmX26Bg][v6GmQoOj3] == '$') {
                        HfvRky0V = v6GmQoOj3 + 1;
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                int m = 0;
                                int n = 0;
                                m = m * n + n - m + n * 2;
                                return 0;
                            }
                        }
                        while (HfvRky0V < K8tG0Ruy[fmX26Bg]) {
                            if (b[fmX26Bg][HfvRky0V] == '?') {
                                Tsk5XWc9z = HfvRky0V -1;
                                while (Tsk5XWc9z >= v6GmQoOj3) {
                                    if (b[fmX26Bg][Tsk5XWc9z] == '$') {
                                        b[fmX26Bg][Tsk5XWc9z] = ' ';
                                        b[fmX26Bg][HfvRky0V] = ' ';
                                        break;
                                    }
                                    Tsk5XWc9z--;
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
                            HfvRky0V++;
                        };
                    }
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
                    v6GmQoOj3 = v6GmQoOj3 + 1;
                };
            }
            {
                v6GmQoOj3 = 0;
                while (v6GmQoOj3 < K8tG0Ruy[fmX26Bg]) {
                    printf ("%c", oIs5VXC[fmX26Bg][v6GmQoOj3]);
                    v6GmQoOj3++;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            {
                v6GmQoOj3 = 0;
                while (v6GmQoOj3 < K8tG0Ruy[fmX26Bg]) {
                    printf ("%c", b[fmX26Bg][v6GmQoOj3]);
                    v6GmQoOj3++;
                };
            }
            fmX26Bg++;
            printf ("\n");
        };
    };
}

