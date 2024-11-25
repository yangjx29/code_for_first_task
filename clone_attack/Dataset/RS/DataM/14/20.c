struct   student {
    int no;
    int yuwen;
    int iO3tVAB;
    int d8YT3lfvd;
};
void  main () {
    struct   student *DYb5QeM, *kePrYcvjh, Dtx2L8UHTc;
    int n, TARGHJusie;
    free (kePrYcvjh);
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
    kePrYcvjh = (struct   student *) calloc (n, sizeof (struct   student));
    for (DYb5QeM = kePrYcvjh; n > DYb5QeM -kePrYcvjh; DYb5QeM++) {
        scanf ("%d%d%d", &DYb5QeM->no, &DYb5QeM->yuwen, &DYb5QeM->iO3tVAB);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        DYb5QeM->d8YT3lfvd = DYb5QeM->yuwen + DYb5QeM->iO3tVAB;
    }
    for (TARGHJusie = 0; TARGHJusie < 3; TARGHJusie++) {
        for (DYb5QeM = kePrYcvjh + n - (222 - 221); kePrYcvjh + TARGHJusie < DYb5QeM; DYb5QeM--) {
            if (DYb5QeM->d8YT3lfvd > (DYb5QeM -1)->d8YT3lfvd) {
                Dtx2L8UHTc = *DYb5QeM;
                *(DYb5QeM -1) = Dtx2L8UHTc;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                *DYb5QeM = *(DYb5QeM -1);
            };
        }
        printf ("%d %d\n", DYb5QeM->no, DYb5QeM->d8YT3lfvd);
    };
}

