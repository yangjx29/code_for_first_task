int main () {
    int a [200], b [200], FGe8CoWb2Ivk [200];
    int n;
    int i;
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
    scanf ("%d\n", &n);
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
        while (n > i) {
            scanf ("%d %d %d", &a[i], &b[i], &FGe8CoWb2Ivk[i]);
            i++;
        };
    }
    {
        i = 0;
        while (n > i) {
            if ((!(3 != b[i]) && !(11 != FGe8CoWb2Ivk[i])) || (b[i] == 11 && FGe8CoWb2Ivk[i] == 3))
                ;
            else {
                if ((!(9 != b[i]) && FGe8CoWb2Ivk[i] == 12) || (b[i] == 12 && FGe8CoWb2Ivk[i] == 9))
                    ;
                else {
                    if ((!(4 != b[i]) && !(7 != FGe8CoWb2Ivk[i])) || (b[i] == 7 && !(4 != FGe8CoWb2Ivk[i])))
                        ;
                    else {
                        if ((!(0 != a[i] % 4) && a[i] % 100 != 0) || !(0 != a[i] % 400)) {
                            if ((b[i] == (617 - 616) && FGe8CoWb2Ivk[i] == 4) || (!(4 != b[i]) && FGe8CoWb2Ivk[i] == 1) || (b[i] == 1 && FGe8CoWb2Ivk[i] == 7) || (b[i] == 7 && FGe8CoWb2Ivk[i] == 1))
                                ;
                            else {
                                if ((b[i] == 2 && FGe8CoWb2Ivk[i] == 8) || (b[i] == 8 && FGe8CoWb2Ivk[i] == 2))
                                    ;
                                else
                                    ;
                            };
                        }
                        else {
                            if ((b[i] == 2 && FGe8CoWb2Ivk[i] == 3) || (b[i] == 3 && FGe8CoWb2Ivk[i] == 2) || (b[i] == 1 && FGe8CoWb2Ivk[i] == 10) || (b[i] == 10 && FGe8CoWb2Ivk[i] == 1))
                                printf ("YES\n");
                            else {
                                if ((b[i] == 2 && FGe8CoWb2Ivk[i] == 11) || (b[i] == 11 && FGe8CoWb2Ivk[i] == 2))
                                    printf ("YES\n");
                                else
                                    ;
                            };
                        };
                    };
                };
            }
            i++;
        };
    }
    return 0;
}

