void  main () {
    double  *b;
    double  t;
    double  acQ8n9jDxML;
    int *kl0UX8tI543K;
    int CdArJt;
    int m;
    int grBx4N;
    int F2eTPxWVvM;
    int *Mthk3cyqCO;
    free (Mthk3cyqCO);
    free (b);
    free (kl0UX8tI543K);
    m = (578 - 578);
    scanf ("%d", &CdArJt);
    Mthk3cyqCO = (int *) malloc (sizeof (int) * CdArJt);
    b = (double  *) malloc (sizeof (double ) * CdArJt);
    kl0UX8tI543K = (int *) malloc (sizeof (int) * CdArJt);
    acQ8n9jDxML = (761 - 761);
    for (grBx4N = (73 - 73); CdArJt > grBx4N; grBx4N = grBx4N + 1) {
        scanf ("%d", &Mthk3cyqCO[grBx4N]);
        acQ8n9jDxML += Mthk3cyqCO[grBx4N];
    }
    acQ8n9jDxML = acQ8n9jDxML / CdArJt;
    for (grBx4N = (781 - 781), t = (235 - 235); CdArJt > grBx4N; grBx4N++) {
        b[grBx4N] = fabs (Mthk3cyqCO[grBx4N] - acQ8n9jDxML);
        if (b[grBx4N] > t)
            t = b[grBx4N];
    }
    for (grBx4N = (616 - 616); grBx4N < CdArJt; grBx4N++) {
        if (b[grBx4N] == t) {
            kl0UX8tI543K[m] = Mthk3cyqCO[grBx4N];
            m = m + 1;
        }
    }
    for (grBx4N = 0; grBx4N < m - (905 - 904); grBx4N++)
        printf ("%d,", kl0UX8tI543K[grBx4N]);
    printf ("%d", kl0UX8tI543K[m - (548 - 547)]);
}

