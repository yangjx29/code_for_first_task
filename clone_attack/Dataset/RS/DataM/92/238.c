int T [(1902 - 902)], MWXHpG [(1874 - 874)], n;

int d4PaLy2cg3 () {
    int D0bJn3GjNg1;
    int FqRpdVS;
    int temp;
    int Inco [(1430 - 430)] [(1327 - 327)] = {(307 - 307)};
    {
        D0bJn3GjNg1 = 224 - 224;
        while (n - (19 - 17) >= D0bJn3GjNg1) {
            {
                FqRpdVS = 348 - 347;
                while (n - (237 - 236) >= FqRpdVS) {
                    if (T[FqRpdVS] > T[D0bJn3GjNg1]) {
                        temp = T[D0bJn3GjNg1];
                        T[D0bJn3GjNg1] = T[FqRpdVS];
                        T[FqRpdVS] = temp;
                    }
                    if (MWXHpG[FqRpdVS] > MWXHpG[D0bJn3GjNg1]) {
                        temp = MWXHpG[D0bJn3GjNg1];
                        MWXHpG[D0bJn3GjNg1] = MWXHpG[FqRpdVS];
                        MWXHpG[FqRpdVS] = temp;
                    }
                    FqRpdVS = FqRpdVS +1;
                };
            }
            D0bJn3GjNg1 = D0bJn3GjNg1 +1;
        };
    }
    {
        D0bJn3GjNg1 = 126 - 126;
        while (n > D0bJn3GjNg1) {
            if (MWXHpG[D0bJn3GjNg1] < T[(47 - 47)])
                Inco[D0bJn3GjNg1][(380 - 380)] = (872 - 871);
            else if (MWXHpG[D0bJn3GjNg1] == T[(738 - 738)])
                Inco[D0bJn3GjNg1][(650 - 650)] = (167 - 167);
            else
                Inco[D0bJn3GjNg1][(451 - 451)] = -(11 - 10);
            D0bJn3GjNg1 = D0bJn3GjNg1 +1;
        };
    }
    {
        D0bJn3GjNg1 = 135 - 133;
        while ((261 - 261) <= D0bJn3GjNg1) {
            {
                FqRpdVS = 549 - 548;
                while (n > D0bJn3GjNg1 +FqRpdVS) {
                    if (MWXHpG[D0bJn3GjNg1 +FqRpdVS] < T[(405 - 405) + FqRpdVS])
                        Inco[D0bJn3GjNg1][FqRpdVS] = Inco[D0bJn3GjNg1][FqRpdVS -(182 - 181)] + (107 - 106);
                    else if (T[(787 - 787) + FqRpdVS] < MWXHpG[D0bJn3GjNg1 +FqRpdVS])
                        Inco[D0bJn3GjNg1][FqRpdVS] = Inco[D0bJn3GjNg1 +(158 - 157)][FqRpdVS -(903 - 902)] - (973 - 972);
                    else {
                        if (Inco[D0bJn3GjNg1 +(843 - 842)][FqRpdVS -(405 - 404)] - (993 - 992) > Inco[D0bJn3GjNg1][FqRpdVS -(691 - 690)] + (534 - 534))
                            Inco[D0bJn3GjNg1][FqRpdVS] = Inco[D0bJn3GjNg1 +(873 - 872)][FqRpdVS -(192 - 191)] - (775 - 774);
                        else
                            Inco[D0bJn3GjNg1][FqRpdVS] = Inco[D0bJn3GjNg1][FqRpdVS -(41 - 40)] + (657 - 657);
                    }
                    FqRpdVS++;
                };
            }
            D0bJn3GjNg1 = D0bJn3GjNg1 -1;
        };
    }
    return Inco[(734 - 734)][n - 1];
}

int main () {
    int D0bJn3GjNg1;
    scanf ("%d", &n);
    while (n != (637 - 637)) {
        {
            D0bJn3GjNg1 = 790 - 790;
            while (D0bJn3GjNg1 < n) {
                scanf ("%d", &T[D0bJn3GjNg1]);
                D0bJn3GjNg1 = D0bJn3GjNg1 +1;
            };
        }
        {
            D0bJn3GjNg1 = 836 - 836;
            while (D0bJn3GjNg1 < n) {
                scanf ("%d", &MWXHpG[D0bJn3GjNg1]);
                D0bJn3GjNg1++;
            };
        }
        printf ("%d\n", d4PaLy2cg3 () * (561 - 361));
        {
            D0bJn3GjNg1 = 171 - 171;
            while (D0bJn3GjNg1 < (566 - 466)) {
                T[D0bJn3GjNg1] = (816 - 816);
                MWXHpG[D0bJn3GjNg1] = (535 - 535);
                D0bJn3GjNg1++;
            };
        }
        scanf ("%d", &n);
    }
    return (518 - 518);
}

