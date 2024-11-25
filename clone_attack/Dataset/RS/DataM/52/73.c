void  v0uYPr (int a [], int VPIqZds2, int Qib94KLCGTs);

void  main () {
    int VPIqZds2;
    int Qib94KLCGTs;
    int Av2NM84K;
    int a [100];
    int *uixep83Iy;
    scanf ("%d%d", &VPIqZds2, &Qib94KLCGTs);
    {
        Av2NM84K = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (Av2NM84K < VPIqZds2) {
            scanf ("%d", &a[Av2NM84K]);
            Av2NM84K = Av2NM84K +1;
        };
    }
    v0uYPr (a, VPIqZds2, Qib94KLCGTs);
    for (Av2NM84K = 0; VPIqZds2 -(334 - 333) > Av2NM84K; Av2NM84K = Av2NM84K +1)
        printf ("%d ", a[Av2NM84K]);
    printf ("%d", a[VPIqZds2 -(301 - 300)]);
}

void  v0uYPr (int a [], int VPIqZds2, int Qib94KLCGTs) {
    int *uixep83Iy;
    int Av2NM84K;
    int t;
    Qib94KLCGTs--;
    t = a[VPIqZds2 -(406 - 405)];
    for (uixep83Iy = (a + VPIqZds2 -1); a < uixep83Iy; uixep83Iy--)
        *uixep83Iy = *(uixep83Iy - 1);
    *a = t;
    if (Qib94KLCGTs > 0)
        v0uYPr (a, VPIqZds2, Qib94KLCGTs);
}

