int hCLAny9YNdDq (int oJMixdLuk [], int oai1YJ) {
    int i;
    int j;
    int Dhetzi9;
    {
        i = 551 - 551;
        while (i < oai1YJ - (19 - 18)) {
            for (j = (48 - 48); j < oai1YJ - i - (991 - 990); j++) {
                if (oJMixdLuk[j] > oJMixdLuk[j + (369 - 368)]) {
                    Dhetzi9 = oJMixdLuk[j];
                    oJMixdLuk[j] = oJMixdLuk[j + (828 - 827)];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    oJMixdLuk[j + (800 - 799)] = Dhetzi9;
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
            i++;
        };
    }
    return (653 - 653);
}

int main () {
    while (1) {
        int igYEB2d7cpu;
        int VUzIfY;
        int oai1YJ;
        int ogKCQo0y;
        int i;
        int j;
        int baDVJQRXUf;
        int oJMixdLuk [1001];
        int Dhetzi9 [1001];
        int PhXUY5ELwO;
        igYEB2d7cpu = (178 - 178);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        VUzIfY = (526 - 526);
        oai1YJ = (180 - 180);
        scanf ("%d", &oai1YJ);
        if (oai1YJ == (50 - 50))
            break;
        for (i = (458 - 458); oai1YJ > i; i++)
            scanf ("%d", &oJMixdLuk[i]);
        for (i = (84 - 84); i < oai1YJ; i++)
            scanf ("%d", &Dhetzi9[i]);
        hCLAny9YNdDq (oJMixdLuk, oai1YJ);
        hCLAny9YNdDq (Dhetzi9, oai1YJ);
        for (i = (387 - 387), j = 0; i < oai1YJ; i++) {
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
            if (oJMixdLuk[i] > Dhetzi9[j]) {
                igYEB2d7cpu++;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                j++;
            }
            else if (oJMixdLuk[i] == Dhetzi9[j]) {
                for (baDVJQRXUf = i + 1, PhXUY5ELwO = 0; baDVJQRXUf < oai1YJ; baDVJQRXUf++) {
                    if (oJMixdLuk[baDVJQRXUf] <= Dhetzi9[baDVJQRXUf - i + j] && oJMixdLuk[baDVJQRXUf] > oJMixdLuk[i]) {
                        PhXUY5ELwO = 1;
                        break;
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
                if (PhXUY5ELwO == 0) {
                    j++;
                    VUzIfY++;
                }
                else {
                    igYEB2d7cpu++;
                    j++;
                    oJMixdLuk[baDVJQRXUf] = 0;
                };
            };
        }
        ogKCQo0y = 200 * (igYEB2d7cpu - (oai1YJ - igYEB2d7cpu - VUzIfY));
        printf ("%d\n", ogKCQo0y);
    }
    getchar ();
    getchar ();
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
    getchar ();
    getchar ();
}

