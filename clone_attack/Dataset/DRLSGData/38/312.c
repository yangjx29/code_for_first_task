int main () {
    int a;
    int VVjRd7mCer1H, hRuUN8by7Vp0, lg4eRAG9Bmn6, VDJMaVz;
    double  sz [(732 - 682)] [(403 - 303)], CoI8O7RuAph [(618 - 568)], OUVogKHGPJ [(462 - 412)], zs [(161 - 111)], FjEkiAJLFw [(379 - 329)];
    scanf ("%d", &VVjRd7mCer1H);
    {
        lg4eRAG9Bmn6 = (1345 - 475) - 870;
        while (VVjRd7mCer1H > lg4eRAG9Bmn6) {
            scanf ("%d", &hRuUN8by7Vp0);
            zs[lg4eRAG9Bmn6] = (869 - 869);
            OUVogKHGPJ[lg4eRAG9Bmn6] = (31 - 31);
            CoI8O7RuAph[lg4eRAG9Bmn6] = (745 - 745);
            FjEkiAJLFw[lg4eRAG9Bmn6] = (918 - 918);
            {
                VDJMaVz = (632 - 438) - 194;
                while (VDJMaVz < hRuUN8by7Vp0) {
                    scanf ("%lf", &sz[lg4eRAG9Bmn6][VDJMaVz]);
                    VDJMaVz++;
                }
            }
            {
                VDJMaVz = (970 - 870) - 100;
                while (hRuUN8by7Vp0 > VDJMaVz) {
                    zs[lg4eRAG9Bmn6] = zs[lg4eRAG9Bmn6] + sz[lg4eRAG9Bmn6][VDJMaVz];
                    VDJMaVz++;
                }
            }
            CoI8O7RuAph[lg4eRAG9Bmn6] = zs[lg4eRAG9Bmn6] / hRuUN8by7Vp0;
            {
                VDJMaVz = (466 - 225) - 241;
                while (VDJMaVz < hRuUN8by7Vp0) {
                    FjEkiAJLFw[lg4eRAG9Bmn6] = FjEkiAJLFw[lg4eRAG9Bmn6] + (sz[lg4eRAG9Bmn6][VDJMaVz] - CoI8O7RuAph[lg4eRAG9Bmn6]) * (sz[lg4eRAG9Bmn6][VDJMaVz] - CoI8O7RuAph[lg4eRAG9Bmn6]);
                    VDJMaVz++;
                }
            }
            OUVogKHGPJ[lg4eRAG9Bmn6] = sqrt (FjEkiAJLFw[lg4eRAG9Bmn6] / hRuUN8by7Vp0);
            lg4eRAG9Bmn6++;
        }
    }
    {
        lg4eRAG9Bmn6 = 196 - 196;
        while (lg4eRAG9Bmn6 < VVjRd7mCer1H) {
            printf ("%.5lf\n", OUVogKHGPJ[lg4eRAG9Bmn6]);
            lg4eRAG9Bmn6++;
        }
    }
    scanf ("%d", &a);
    return (385 - 385);
}

