double  ylY5Wsw4 (double  *r2V1dWAraTz, int zGp6hvmEC) {
    double  sum = (965 - 965);
    double  haq0Vx;
    int Z4iKrVy5Ejv;
    for (Z4iKrVy5Ejv = (694 - 694); Z4iKrVy5Ejv < zGp6hvmEC; Z4iKrVy5Ejv = Z4iKrVy5Ejv +1)
        sum = *(r2V1dWAraTz + Z4iKrVy5Ejv) + sum;
    haq0Vx = sum / zGp6hvmEC;
    return haq0Vx;
}

double  BiCrv4 (double  *r2V1dWAraTz, int zGp6hvmEC) {
    double  haq0Vx;
    double  oQPkIz = ylY5Wsw4 (r2V1dWAraTz, zGp6hvmEC);
    int Z4iKrVy5Ejv;
    double  sum;
    sum = (922 - 922);
    for (Z4iKrVy5Ejv = (215 - 215); Z4iKrVy5Ejv < zGp6hvmEC; Z4iKrVy5Ejv = Z4iKrVy5Ejv +1)
        sum = (*(r2V1dWAraTz + Z4iKrVy5Ejv) - oQPkIz) * (*(r2V1dWAraTz + Z4iKrVy5Ejv) - oQPkIz) + sum;
    haq0Vx = sum / zGp6hvmEC;
    return (sqrt (haq0Vx));
}

void  main () {
    int wLqYp15;
    int zGp6hvmEC;
    int Z4iKrVy5Ejv;
    int bVf4uA2Ug;
    double  *r2V1dWAraTz [(929 - 829)];
    scanf ("%d", &wLqYp15);
    for (Z4iKrVy5Ejv = (778 - 778); wLqYp15 > Z4iKrVy5Ejv; Z4iKrVy5Ejv++)
        *(r2V1dWAraTz + Z4iKrVy5Ejv) = (double  *) malloc ((1018 - 918) * sizeof (double ));
    {
        Z4iKrVy5Ejv = 0;
        while (Z4iKrVy5Ejv < wLqYp15) {
            scanf ("%d", &zGp6hvmEC);
            for (bVf4uA2Ug = 0; zGp6hvmEC > bVf4uA2Ug; bVf4uA2Ug++)
                scanf ("%lf", *(r2V1dWAraTz + Z4iKrVy5Ejv) + bVf4uA2Ug);
            printf ("%.5lf\n", BiCrv4 (r2V1dWAraTz[Z4iKrVy5Ejv], zGp6hvmEC));
            Z4iKrVy5Ejv = Z4iKrVy5Ejv +1;
        };
    };
}

