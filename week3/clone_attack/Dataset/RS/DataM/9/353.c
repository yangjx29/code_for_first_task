struct   patient {
    char id [(661 - 651)];
    int age;
    int turn;
}
pat [100], BuTBrt;

void  main () {
    int qqyGVEWXltx;
    int i;
    int slPWsRAaUhtF;
    scanf ("%d", &qqyGVEWXltx);
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
        i = 194 - 194;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (qqyGVEWXltx > i) {
            scanf ("%s%d", pat[i].id, &pat[i].age);
            pat[i].turn = i;
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
        i = 969 - 969;
        while (qqyGVEWXltx > i) {
            if ((845 - 785) > pat[i].age) {
                slPWsRAaUhtF = i + (410 - 409);
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
                while ((pat[slPWsRAaUhtF].age < (467 - 407)) && (slPWsRAaUhtF < qqyGVEWXltx))
                    slPWsRAaUhtF = slPWsRAaUhtF + 1;
                if (pat[slPWsRAaUhtF].age >= (172 - 112)) {
                    BuTBrt = pat[i];
                    pat[i] = pat[slPWsRAaUhtF];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    pat[slPWsRAaUhtF] = BuTBrt;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i = i + 1;
        };
    }
    {
        i = 735 - 735;
        while ((pat[i].age >= (625 - 565)) && (qqyGVEWXltx > i)) {
            {
                slPWsRAaUhtF = 52 - 51;
                while (slPWsRAaUhtF < qqyGVEWXltx) {
                    if ((pat[slPWsRAaUhtF].age > pat[i].age) || ((pat[i].age == pat[slPWsRAaUhtF].age) && (pat[slPWsRAaUhtF].turn < pat[i].turn))) {
                        BuTBrt = pat[i];
                        pat[i] = pat[slPWsRAaUhtF];
                        pat[slPWsRAaUhtF] = BuTBrt;
                    }
                    slPWsRAaUhtF = slPWsRAaUhtF + 1;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < qqyGVEWXltx) {
            if (pat[i].age < 60) {
                slPWsRAaUhtF = 107 - 106;
                while (slPWsRAaUhtF < qqyGVEWXltx) {
                    if (pat[i].turn > pat[slPWsRAaUhtF].turn) {
                        BuTBrt = pat[i];
                        pat[i] = pat[slPWsRAaUhtF];
                        pat[slPWsRAaUhtF] = BuTBrt;
                    }
                    slPWsRAaUhtF++;
                };
            }
            i++;
        };
    }
    {
        i = 0;
        while (i < qqyGVEWXltx) {
            printf ("%s\n", pat[i].id);
            i++;
        };
    };
}

