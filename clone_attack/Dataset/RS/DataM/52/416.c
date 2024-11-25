void  main () {
    int dQVZkf3, Hbvx7pl, SkFjN5, CRTumZN [(10926 - 926)];
    int *p;
    scanf ("%d %d", &dQVZkf3, &Hbvx7pl);
    for (SkFjN5 = 0; SkFjN5 < dQVZkf3; SkFjN5 = SkFjN5 +1)
        scanf ("%d", &CRTumZN[SkFjN5]);
    for (p = CRTumZN +dQVZkf3; p < (CRTumZN +dQVZkf3 + dQVZkf3 - Hbvx7pl); p = p + 1)
        *p = *(p - dQVZkf3);
    p = (CRTumZN +dQVZkf3 - Hbvx7pl);
    printf ("%d", *p);
    for (p = (CRTumZN +dQVZkf3 - Hbvx7pl +1); p < (CRTumZN +dQVZkf3 + dQVZkf3 - Hbvx7pl); p = p + 1)
        printf (" %d", *p);
}

