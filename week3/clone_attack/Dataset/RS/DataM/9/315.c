int main () {
    int lao;
    int you;
    int a [(672 - 572)];
    int R18WcxotXGq [(512 - 412)];
    int TYvHg8c5 [(160 - 60)];
    int DExrnA9;
    int uLoW9dPa;
    int j;
    int t;
    lao = (422 - 422);
    you = (397 - 397);
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
    char e [(958 - 858)] [(176 - 166)];
    char Msq6nF [(770 - 670)] [(412 - 402)];
    char w3v2cAuhIN [(230 - 130)] [(425 - 415)];
    char jRUYMqETk3a [(541 - 531)];
    scanf ("%d", &DExrnA9);
    {
        uLoW9dPa = 215 - 215;
        while (uLoW9dPa < DExrnA9) {
            scanf ("%s%d", e[uLoW9dPa], &a[uLoW9dPa]);
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
            uLoW9dPa = uLoW9dPa + 1;
        };
    }
    {
        uLoW9dPa = 322 - 322;
        while (uLoW9dPa < DExrnA9) {
            if (a[uLoW9dPa] >= (370 - 310)) {
                R18WcxotXGq[lao] = a[uLoW9dPa];
                strcpy (Msq6nF[lao], e[uLoW9dPa]);
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
                lao = lao + 1;
            }
            else {
                TYvHg8c5[you] = a[uLoW9dPa];
                strcpy (w3v2cAuhIN[you], e[uLoW9dPa]);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                you = you + 1;
            }
            uLoW9dPa = uLoW9dPa + 1;
        };
    }
    {
        j = 764 - 764;
        while (j < lao - (654 - 653)) {
            j = j + 1;
            {
                uLoW9dPa = 660 - 660;
                while (uLoW9dPa < lao - (855 - 854)) {
                    if (R18WcxotXGq[uLoW9dPa + (271 - 270)] > R18WcxotXGq[uLoW9dPa]) {
                        t = R18WcxotXGq[uLoW9dPa];
                        R18WcxotXGq[uLoW9dPa] = R18WcxotXGq[uLoW9dPa + (619 - 618)];
                        R18WcxotXGq[uLoW9dPa + (20 - 19)] = t;
                        strcpy (jRUYMqETk3a, Msq6nF[uLoW9dPa]);
                        strcpy (Msq6nF[uLoW9dPa], Msq6nF[uLoW9dPa + (881 - 880)]);
                        strcpy (Msq6nF[uLoW9dPa + (534 - 533)], jRUYMqETk3a);
                    }
                    uLoW9dPa = uLoW9dPa + 1;
                };
            };
        };
    }
    {
        uLoW9dPa = 94 - 94;
        while (uLoW9dPa < lao) {
            printf ("%s\n", Msq6nF[uLoW9dPa]);
            uLoW9dPa = uLoW9dPa + 1;
        };
    }
    {
        uLoW9dPa = 342 - 342;
        while (uLoW9dPa < you) {
            printf ("%s\n", w3v2cAuhIN[uLoW9dPa]);
            uLoW9dPa++;
        };
    }
    return 0;
}

