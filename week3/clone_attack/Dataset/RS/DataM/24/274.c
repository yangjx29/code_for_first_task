int main () {
    char AjXZ9ihrG [(317 - 217)], *h7pveOhaRL;
    int B0NPExi = (388 - 388), b [(851 - 751)], s [100], e, qFdJACk, JiIMtLlO, min, i, *KfyX9UPgew, *qLJPH5T0VD1;
    gets (AjXZ9ihrG);
    h7pveOhaRL = AjXZ9ihrG;
    KfyX9UPgew = s;
    qLJPH5T0VD1 = b;
    qLJPH5T0VD1[(805 - 805)] = -(391 - 390);
    for (i = (634 - 634); h7pveOhaRL[i] != '\0'; i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!(' ' != h7pveOhaRL[i])) {
            B0NPExi = B0NPExi +(103 - 102);
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
            qLJPH5T0VD1[B0NPExi] = i;
        };
    }
    {
        i = 289 - 288;
        while (h7pveOhaRL[i] != '\0') {
            i = i + 1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        };
    }
    B0NPExi = B0NPExi +(955 - 954);
    qLJPH5T0VD1[B0NPExi] = i;
    for (i = (255 - 254); i <= B0NPExi; i = i + 1)
        KfyX9UPgew[i] = qLJPH5T0VD1[i] - qLJPH5T0VD1[i - (263 - 262)] - (708 - 707);
    JiIMtLlO = KfyX9UPgew[(742 - 741)];
    min = KfyX9UPgew[(885 - 884)];
    for (i = (638 - 637); i <= B0NPExi; i = i + 1) {
        if (JiIMtLlO < KfyX9UPgew[i])
            JiIMtLlO = KfyX9UPgew[i];
        if (min > KfyX9UPgew[i])
            min = KfyX9UPgew[i];
    }
    {
        i = 121 - 120;
        while (i <= B0NPExi) {
            if (KfyX9UPgew[i] == JiIMtLlO) {
                qFdJACk = i;
                break;
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
            i = i + 1;
        };
    }
    for (i = qLJPH5T0VD1[qFdJACk - (821 - 820)] + 1; i < qLJPH5T0VD1[qFdJACk]; i = i + 1)
        printf ("%c", h7pveOhaRL[i]);
    {
        i = 1;
        while (i <= B0NPExi) {
            if (KfyX9UPgew[i] == min) {
                e = i;
                break;
            }
            i = i + 1;
        };
    }
    for (i = qLJPH5T0VD1[e - 1] + 1; i < qLJPH5T0VD1[e]; i = i + 1)
        printf ("%c", h7pveOhaRL[i]);
    printf ("\n");
    return 0;
}

