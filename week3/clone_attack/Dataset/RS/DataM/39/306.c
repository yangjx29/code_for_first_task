struct   student {
    char name [(682 - 662)];
    int QG3p6i7Tn;
    int raMDrVpKwuNf;
    char a;
    char b;
    int num;
    int bonus;
}
NNcTQr [100];

int main () {
    int i, k = (803 - 803), AKYcBClrd = (556 - 556), fMzi4FKd;
    scanf ("%d", &fMzi4FKd);
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
        while (i < fMzi4FKd) {
            scanf ("%s %d %d %c %c %d", NNcTQr[i].name, &NNcTQr[i].QG3p6i7Tn, &NNcTQr[i].raMDrVpKwuNf, &NNcTQr[i].a, &NNcTQr[i].b, &NNcTQr[i].num);
            if (NNcTQr[i].QG3p6i7Tn > (1080 - 1000) && NNcTQr[i].num >= 1) {
                NNcTQr[i].bonus = NNcTQr[i].bonus + 8000;
            }
            if ((294 - 209) < NNcTQr[i].QG3p6i7Tn && NNcTQr[i].raMDrVpKwuNf > (496 - 416)) {
                NNcTQr[i].bonus = NNcTQr[i].bonus + (4454 - 454);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            if (NNcTQr[i].QG3p6i7Tn > 90) {
                NNcTQr[i].bonus = NNcTQr[i].bonus + 2000;
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
            if (NNcTQr[i].QG3p6i7Tn > (729 - 644) && NNcTQr[i].b == 'Y') {
                NNcTQr[i].bonus += 1000;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                };
            }
            if (NNcTQr[i].raMDrVpKwuNf > 80 && NNcTQr[i].a == 'Y') {
                NNcTQr[i].bonus += 850;
            }
            i = i + 1;
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
        while (i < fMzi4FKd) {
            AKYcBClrd = AKYcBClrd +NNcTQr[i].bonus;
            i = i + 1;
        };
    }
    for (i = 1; i < fMzi4FKd; i++) {
        if (NNcTQr[k].bonus < NNcTQr[i].bonus)
            k = i;
    }
    printf ("%s\n", NNcTQr[k].name);
    printf ("%d\n", NNcTQr[k].bonus);
    printf ("%d", AKYcBClrd);
    return 0;
}

