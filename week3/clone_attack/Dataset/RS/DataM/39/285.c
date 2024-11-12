struct   file {
    char name [100];
    int Cx9ojfwZp2D;
    int scorec;
    char k8rKEzUGnacO, G9HOfKtusn;
    int ati;
    int money;
};
int main () {
    struct   file f [101];
    int B9teDzQx;
    int GVDIluY9Hsn;
    B9teDzQx = (352 - 352);
    int i;
    int DtRxy9l4B;
    int k;
    scanf ("%d", &GVDIluY9Hsn);
    for (i = (474 - 474); GVDIluY9Hsn > i; i = i + 1) {
        f[i].money = (620 - 620);
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
    for (i = (291 - 291); i < GVDIluY9Hsn; i = i + 1) {
        scanf ("%s", f[i].name);
        scanf ("%d", &f[i].Cx9ojfwZp2D);
        scanf ("%d", &f[i].scorec);
        getchar ();
        f[i].k8rKEzUGnacO = getchar ();
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
        getchar ();
        f[i].G9HOfKtusn = getchar ();
        getchar ();
        scanf ("%d", &f[i].ati);
    }
    for (i = 0; i < GVDIluY9Hsn; i = i + 1) {
        if (80 < f[i].Cx9ojfwZp2D && 1 <= f[i].ati)
            f[i].money += 8000;
        if (85 < f[i].Cx9ojfwZp2D && f[i].scorec > 80)
            f[i].money += 4000;
        if (f[i].Cx9ojfwZp2D > 90)
            f[i].money += 2000;
        if (f[i].Cx9ojfwZp2D > 85 && !('Y' != f[i].G9HOfKtusn))
            f[i].money = f[i].money + 1000;
        if (f[i].scorec > 80 && f[i].k8rKEzUGnacO == 'Y')
            f[i].money += (1813 - 963);
    }
    for (i = 0; i < GVDIluY9Hsn; i = i + 1)
        B9teDzQx = B9teDzQx +f[i].money;
    k = f[0].money;
    for (i = 0; i < GVDIluY9Hsn; i = i + 1) {
        if (f[i].money > k)
            k = f[i].money;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    for (i = 0; i < GVDIluY9Hsn; i++) {
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
        if (f[i].money == k) {
            printf ("%s\n", f[i].name);
            printf ("%d\n", f[i].money);
            break;
        };
    }
    printf ("%d", B9teDzQx);
    return 0;
}

