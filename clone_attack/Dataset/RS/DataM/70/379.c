double  HEjbhlY0VJ5S (float cZCQnUAk, float qTLSwH, float c, float DsG7xf) {
    return (double ) sqrt ((cZCQnUAk - c) * (cZCQnUAk - c) + (qTLSwH - DsG7xf) * (qTLSwH - DsG7xf));
}

main () {
    float cZCQnUAk [(1616 - 616)], qTLSwH [(1103 - 103)], max = (610.0 - 610.0);
    int Ctw8JDs3KOy, i, j;
    scanf ("%d", &Ctw8JDs3KOy);
    {
        i = 0;
        while (Ctw8JDs3KOy > i) {
            scanf ("%f %f", &cZCQnUAk[i], &qTLSwH[i]);
            i = i + 1;
        };
    }
    {
        i = 0;
        while (Ctw8JDs3KOy > i) {
            {
                j = 0;
                while (Ctw8JDs3KOy > j) {
                    max = HEjbhlY0VJ5S (cZCQnUAk[i], qTLSwH[i], cZCQnUAk[j], qTLSwH[j]) > max ? HEjbhlY0VJ5S (cZCQnUAk[i], qTLSwH[i], cZCQnUAk[j], qTLSwH[j]) : max;
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    printf ("%.4f\n", max);
    getchar ();
    getchar ();
}

