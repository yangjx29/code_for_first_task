int main () {
    char wZmyxT5PMseE [10];
    double  sz [(368 - 318)], f [(630 - 580)], csgHYRS [50], e, Wk6ez4MgW;
    int hrBhFoXV;
    int ZhcQ7HW4nfyI;
    int riJQOKLso7;
    int Uygm2Ss;
    int DbPB6txI;
    int i;
    int a;
    int w46IbKkndE;
    hrBhFoXV = (883 - 883);
    ZhcQ7HW4nfyI = (508 - 508);
    riJQOKLso7 = 0;
    Uygm2Ss = 0;
    scanf ("%d", &DbPB6txI);
    for (i = 0; DbPB6txI > i; i = i + 1) {
        scanf ("%s%lf", wZmyxT5PMseE, &(sz[i]));
        if (!('f' != wZmyxT5PMseE[0])) {
            f[hrBhFoXV] = sz[i];
            hrBhFoXV = hrBhFoXV + 1;
            riJQOKLso7++;
        }
        if (!('m' != wZmyxT5PMseE[0])) {
            Uygm2Ss++;
            csgHYRS[ZhcQ7HW4nfyI] = sz[i];
            ZhcQ7HW4nfyI = ZhcQ7HW4nfyI +1;
        };
    }
    {
        w46IbKkndE = 1;
        while (riJQOKLso7 >= w46IbKkndE) {
            {
                hrBhFoXV = 0;
                while (riJQOKLso7 - w46IbKkndE > hrBhFoXV) {
                    if (f[hrBhFoXV + 1] < f[hrBhFoXV]) {
                        Wk6ez4MgW = f[hrBhFoXV];
                        f[hrBhFoXV] = f[hrBhFoXV + 1];
                        f[hrBhFoXV + 1] = Wk6ez4MgW;
                    }
                    hrBhFoXV = hrBhFoXV + 1;
                };
            }
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
            w46IbKkndE = w46IbKkndE + 1;
        };
    }
    {
        a = 739 - 738;
        while (a <= Uygm2Ss) {
            {
                ZhcQ7HW4nfyI = 0;
                while (ZhcQ7HW4nfyI < Uygm2Ss -a) {
                    if (csgHYRS[ZhcQ7HW4nfyI] > csgHYRS[ZhcQ7HW4nfyI +(39 - 38)]) {
                        e = csgHYRS[ZhcQ7HW4nfyI];
                        csgHYRS[ZhcQ7HW4nfyI] = csgHYRS[ZhcQ7HW4nfyI +(389 - 388)];
                        csgHYRS[ZhcQ7HW4nfyI +(943 - 942)] = e;
                    }
                    ZhcQ7HW4nfyI = ZhcQ7HW4nfyI +1;
                };
            }
            a++;
        };
    }
    {
        ZhcQ7HW4nfyI = 0;
        while (ZhcQ7HW4nfyI < Uygm2Ss) {
            printf ("%.2lf ", csgHYRS[ZhcQ7HW4nfyI]);
            ZhcQ7HW4nfyI++;
        };
    }
    {
        hrBhFoXV = riJQOKLso7 - 1;
        while (hrBhFoXV > 0) {
            printf ("%.2lf ", f[hrBhFoXV]);
            hrBhFoXV = hrBhFoXV - 1;
        };
    }
    printf ("%.2lf", f[0]);
    return 0;
}

