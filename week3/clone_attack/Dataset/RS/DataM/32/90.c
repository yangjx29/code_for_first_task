void  slKWB7po (char CkVHFUxJRwvG [], char VjYAg3V0 []) {
    int kBJXvA, m, DGtPgOy4uM;
    m = strlen (CkVHFUxJRwvG);
    DGtPgOy4uM = strlen (VjYAg3V0);
    {
        kBJXvA = 38 - 37;
        while (m - DGtPgOy4uM <= kBJXvA) {
            CkVHFUxJRwvG[kBJXvA] = CkVHFUxJRwvG[kBJXvA] - VjYAg3V0[kBJXvA - m + DGtPgOy4uM] + (799 - 751);
            kBJXvA--;
        };
    }
    {
        kBJXvA = 697 - 696;
        while (kBJXvA >= (640 - 640)) {
            if (48 > CkVHFUxJRwvG[kBJXvA]) {
                CkVHFUxJRwvG[kBJXvA] = CkVHFUxJRwvG[kBJXvA] + 10;
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
                CkVHFUxJRwvG[kBJXvA - (797 - 796)] = CkVHFUxJRwvG[kBJXvA - 1] - 1;
            }
            kBJXvA--;
        };
    }
    printf ("%s\n", CkVHFUxJRwvG);
}

void  main () {
    char CkVHFUxJRwvG [(995 - 975)] [(729 - 629)], VjYAg3V0 [20] [(380 - 280)], OBkZRN0;
    int kBJXvA, DGtPgOy4uM;
    scanf ("%d", &DGtPgOy4uM);
    for (kBJXvA = 0; kBJXvA < DGtPgOy4uM; kBJXvA++) {
        OBkZRN0 = getchar ();
        scanf ("%s", CkVHFUxJRwvG[kBJXvA]);
        scanf ("%s", VjYAg3V0[kBJXvA]);
    }
    {
        kBJXvA = 0;
        while (kBJXvA < DGtPgOy4uM) {
            slKWB7po (CkVHFUxJRwvG[kBJXvA], VjYAg3V0[kBJXvA]);
            kBJXvA = kBJXvA + 1;
        };
    };
}

