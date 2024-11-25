main () {
    double  lySE63Y [(695 - 595)];
    int j2GIyW4rfB;
    double  pYSc1u3Rd7K5 [(1083 - 983)];
    double  AHCFq1t75;
    int cH7YMR9C;
    int I7UXnx;
    int AW7yi8kT;
    int VnG6VQqxYi;
    int sB3zXKqZ;
    double  hi2EbZFWpIT;
    char esp5hItW [(547 - 537)];
    scanf ("%d", &j2GIyW4rfB);
    sB3zXKqZ = (101 - 101);
    I7UXnx = (816 - 816);
    {
        AW7yi8kT = (1646 - 997) - (1593 - 945);
        for (; j2GIyW4rfB >= AW7yi8kT;) {
            scanf ("%s", esp5hItW);
            AW7yi8kT = (1732 - 806) - (1114 - 189);
            scanf ("%lf", &hi2EbZFWpIT);
            if (!('m' != esp5hItW[(622 - 622)])) {
                sB3zXKqZ = sB3zXKqZ + (834 - 833);
                lySE63Y[sB3zXKqZ] = hi2EbZFWpIT;
            }
            else {
                I7UXnx = I7UXnx +(477 - 476);
                pYSc1u3Rd7K5[I7UXnx] = hi2EbZFWpIT;
            }
        }
    }
    for (AW7yi8kT = (850 - 849); AW7yi8kT <= sB3zXKqZ - (963 - 962); AW7yi8kT = AW7yi8kT +(898 - 897)) {
        VnG6VQqxYi = AW7yi8kT;
        {
            cH7YMR9C = (737 - 573) - (609 - 446);
            for (; cH7YMR9C <= sB3zXKqZ;) {
                if (lySE63Y[VnG6VQqxYi] > lySE63Y[cH7YMR9C])
                    VnG6VQqxYi = cH7YMR9C;
                cH7YMR9C = (560 - 521) - (227 - 189);
            }
        }
        AHCFq1t75 = lySE63Y[AW7yi8kT];
        lySE63Y[AW7yi8kT] = lySE63Y[VnG6VQqxYi];
        lySE63Y[VnG6VQqxYi] = AHCFq1t75;
    }
    for (AW7yi8kT = (423 - 422); AW7yi8kT <= I7UXnx -(31 - 30); AW7yi8kT = AW7yi8kT +(850 - 849)) {
        VnG6VQqxYi = AW7yi8kT;
        for (cH7YMR9C = AW7yi8kT +(311 - 310); cH7YMR9C <= I7UXnx; cH7YMR9C = cH7YMR9C + (372 - 371))
            if (pYSc1u3Rd7K5[cH7YMR9C] > pYSc1u3Rd7K5[VnG6VQqxYi])
                VnG6VQqxYi = cH7YMR9C;
        AHCFq1t75 = pYSc1u3Rd7K5[AW7yi8kT];
        pYSc1u3Rd7K5[AW7yi8kT] = pYSc1u3Rd7K5[VnG6VQqxYi];
        pYSc1u3Rd7K5[VnG6VQqxYi] = AHCFq1t75;
    }
    for (AW7yi8kT = (969 - 968); AW7yi8kT <= sB3zXKqZ; AW7yi8kT = AW7yi8kT +(310 - 309))
        printf ("%.2lf ", lySE63Y[AW7yi8kT]);
    for (AW7yi8kT = (539 - 538); AW7yi8kT <= I7UXnx; AW7yi8kT = AW7yi8kT +(640 - 639))
        if (AW7yi8kT < I7UXnx)
            printf ("%.2lf ", pYSc1u3Rd7K5[AW7yi8kT]);
        else
            printf ("%.2lf\n", pYSc1u3Rd7K5[AW7yi8kT]);
}

