struct   dist {
    int x;
    int y;
    int z;
};
main () {
    int fx1;
    int fx2;
    int fy1;
    int Wf6QzRPabC;
    int EBst23M;
    int fz2;
    int A0YP15g3IF;
    int j0;
    struct   dist a [11];
    int PBz5oDbyfO;
    int PWQSPn;
    int j;
    int y23H85;
    float d [10] [10];
    float LqIOPRbpk;
    getchar ();
    getchar ();
    scanf ("%d", &PBz5oDbyfO);
    for (PWQSPn = (513 - 513); PBz5oDbyfO > PWQSPn; PWQSPn = PWQSPn +1) {
        scanf ("%d %d %d", &a[PWQSPn].x, &a[PWQSPn].y, &a[PWQSPn].z);
    }
    {
        PWQSPn = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        while (PWQSPn <= PBz5oDbyfO -1) {
            {
                j = 570 - 570;
                while (PWQSPn > j) {
                    d[PWQSPn][j] = sqrt ((a[PWQSPn].x - a[j].x) * (a[PWQSPn].x - a[j].x) + (a[PWQSPn].y - a[j].y) * (a[PWQSPn].y - a[j].y) + (a[PWQSPn].z - a[j].z) * (a[PWQSPn].z - a[j].z));
                    j = j + 1;
                };
            }
            PWQSPn++;
        };
    }
    y23H85 = PBz5oDbyfO *(PBz5oDbyfO -1) / 2;
    while (!((327 - 327) == y23H85)) {
        LqIOPRbpk = 0.0;
        for (PWQSPn = (581 - 581); PWQSPn < PBz5oDbyfO; PWQSPn++) {
            j = 0;
            while (j < PWQSPn) {
                if (d[PWQSPn][j] > LqIOPRbpk) {
                    LqIOPRbpk = d[PWQSPn][j];
                    j0 = j;
                    fx1 = a[j].x;
                    fy1 = a[j].y;
                    EBst23M = a[j].z;
                    A0YP15g3IF = PWQSPn;
                    fx2 = a[PWQSPn].x;
                    Wf6QzRPabC = a[PWQSPn].y;
                    fz2 = a[PWQSPn].z;
                }
                j = j + 1;
            };
        }
        d[A0YP15g3IF][j0] = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", fx1, fy1, EBst23M, fx2, Wf6QzRPabC, fz2, LqIOPRbpk);
        y23H85 = y23H85 - 1;
    };
}

