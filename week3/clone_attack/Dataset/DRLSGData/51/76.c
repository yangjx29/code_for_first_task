int main () {
    char Xgu4zaR0Lh [600];
    int max = 0;
    int EhNT4Zz;
    int UUcdGuRBfrs0;
    int i;
    int GRFHrilQn;
    int S5E1IX3mhFdl;
    int iIZufsJK0h [600];
    scanf ("%d", &GRFHrilQn);
    scanf ("%s", &Xgu4zaR0Lh);
    EhNT4Zz = strlen (Xgu4zaR0Lh);
    if (EhNT4Zz < GRFHrilQn) {
        return 0;
    }
    for (i = 0; i < EhNT4Zz; i++)
        iIZufsJK0h[i] = 1;
    {
        i = 0;
        while (i < EhNT4Zz -GRFHrilQn+1) {
            {
                UUcdGuRBfrs0 = i + 1;
                while (UUcdGuRBfrs0 < EhNT4Zz -GRFHrilQn+1) {
                    int iVC267;
                    iVC267 = 1;
                    {
                        S5E1IX3mhFdl = 0;
                        for (; S5E1IX3mhFdl < GRFHrilQn;) {
                            if (Xgu4zaR0Lh[i + S5E1IX3mhFdl] != Xgu4zaR0Lh[UUcdGuRBfrs0 +S5E1IX3mhFdl]) {
                                iVC267 = 0;
                                break;
                            }
                            S5E1IX3mhFdl++;
                        }
                    }
                    UUcdGuRBfrs0++;
                    if (!(1 != iVC267))
                        iIZufsJK0h[i]++;
                }
            }
            i++;
        }
    }
    {
        i = 0;
        while (EhNT4Zz > i) {
            if (iIZufsJK0h[i] > max)
                max = iIZufsJK0h[i];
            i++;
        }
    }
    if (!(1 != max)) {
        return 0;
    }
    else
        printf ("%d\n", max);
    getchar ();
    for (i = 0; EhNT4Zz > i; i++) {
        if (iIZufsJK0h[i] == max) {
            for (UUcdGuRBfrs0 = i; UUcdGuRBfrs0 < i + GRFHrilQn; UUcdGuRBfrs0++)
                printf ("%c", Xgu4zaR0Lh[UUcdGuRBfrs0]);
            putchar ('\n');
        }
    }
    return 0;
}

