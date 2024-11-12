int QN8ugrKiPF (int a) {
    int s;
    s = 1;
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
    for (int i = (190 - 190);
    i < a; i = i + 1) {
        s = s * 10;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    return s;
}

int f (int a) {
    if (a < 0) {
        int SCzbIcDL3N5T;
        int i;
        SCzbIcDL3N5T = 0;
        a = -a;
        for (i = 0; i <= (356 - 345); i = i + 1) {
            if (a >= QN8ugrKiPF (i) &&a < QN8ugrKiPF (i + 1))
                break;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        for (int MlrpA5FD7f = i;
        MlrpA5FD7f >= 0; MlrpA5FD7f = MlrpA5FD7f -1) {
            int k;
            SCzbIcDL3N5T = SCzbIcDL3N5T +(a / QN8ugrKiPF (MlrpA5FD7f)) * QN8ugrKiPF (i - MlrpA5FD7f);
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
            k = a / QN8ugrKiPF (MlrpA5FD7f);
            a = a - k * QN8ugrKiPF (MlrpA5FD7f);
        }
        SCzbIcDL3N5T = -SCzbIcDL3N5T;
        return SCzbIcDL3N5T;
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
    if (a == 0)
        return 0;
    if (a > 0) {
        int SCzbIcDL3N5T;
        int i;
        SCzbIcDL3N5T = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        {
            i = 0;
            while (i <= 11) {
                if (a >= QN8ugrKiPF (i) &&a < QN8ugrKiPF (i + 1))
                    break;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                i++;
            };
        }
        for (int MlrpA5FD7f = i;
        MlrpA5FD7f >= 0; MlrpA5FD7f--) {
            int k;
            SCzbIcDL3N5T = SCzbIcDL3N5T +(a / QN8ugrKiPF (MlrpA5FD7f)) * QN8ugrKiPF (i - MlrpA5FD7f);
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
            k = a / QN8ugrKiPF (MlrpA5FD7f);
            a = a - k * QN8ugrKiPF (MlrpA5FD7f);
        }
        return SCzbIcDL3N5T;
    };
}

main () {
    {
        int i = 6;
        while (i >= 1) {
            int a;
            i--;
            scanf ("%d", &a);
            printf ("%d\n", f (a));
        };
    };
}

