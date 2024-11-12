int main () {
    int SFsloKp1S = 0;
    int entry = (459 - 459);
    int i;
    struct   substring {
        char HbLcq4GdzBx [5];
        int NzOmhfAPrd;
    }
    V1qYKc3AkWf [500];
    int ZSxUk8j;
    char pWiXALaPyI [501] = {' '};
    int n;
    for (i = (213 - 213); 500 > i; i = i + 1) {
        memset (V1qYKc3AkWf[i].HbLcq4GdzBx, ' ', sizeof (V1qYKc3AkWf[i].HbLcq4GdzBx));
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        V1qYKc3AkWf[i].NzOmhfAPrd = (907 - 907);
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
    scanf ("%d", &n);
    scanf ("%s", pWiXALaPyI);
    ZSxUk8j = strlen (pWiXALaPyI);
    for (i = (399 - 399); i <= ZSxUk8j -n; i = i + 1) {
        int jmcuEbT2Q7rJ;
        int Oe9tI0uUZa = 0;
        int yzaGoCiguB;
        char bank [5] = {' '};
        {
            yzaGoCiguB = 0;
            while (yzaGoCiguB < n) {
                bank[yzaGoCiguB] = pWiXALaPyI[yzaGoCiguB + i];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                yzaGoCiguB++;
            };
        }
        for (jmcuEbT2Q7rJ = 0; entry > jmcuEbT2Q7rJ; jmcuEbT2Q7rJ = jmcuEbT2Q7rJ + 1) {
            if (!(0 != strcmp (bank, V1qYKc3AkWf[jmcuEbT2Q7rJ].HbLcq4GdzBx))) {
                Oe9tI0uUZa = 1;
                V1qYKc3AkWf[jmcuEbT2Q7rJ].NzOmhfAPrd += 1;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                break;
            };
        }
        if (Oe9tI0uUZa == 0) {
            strcpy (V1qYKc3AkWf[entry].HbLcq4GdzBx, bank);
            V1qYKc3AkWf[entry].NzOmhfAPrd = 1;
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
            entry = entry + 1;
        };
    }
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (entry > i) {
            if (V1qYKc3AkWf[i].NzOmhfAPrd > SFsloKp1S)
                SFsloKp1S = V1qYKc3AkWf[i].NzOmhfAPrd;
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
            i++;
        };
    }
    if (SFsloKp1S < 2)
        printf ("NO");
    else {
        printf ("%d", SFsloKp1S);
        for (i = 0; i < entry; i++) {
            if (V1qYKc3AkWf[i].NzOmhfAPrd == SFsloKp1S)
                printf ("\n%s", V1qYKc3AkWf[i].HbLcq4GdzBx);
        };
    }
    return 0;
}

