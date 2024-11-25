double  v10BvkAUzS4 (double  a, double  NGAHc9h2ud, double  Jqd13ElGros5, double  l7nc2Y) {
    double  q;
    q = sqrt ((a - Jqd13ElGros5) * (a - Jqd13ElGros5) + (NGAHc9h2ud -l7nc2Y) * (NGAHc9h2ud -l7nc2Y));
    return (q);
}

void  main () {
    double  a [(595 - 495)];
    double  NGAHc9h2ud [100];
    double  l7nc2Y;
    int pFEzmKM;
    int RCZgE6;
    int jKRhC8Xw;
    l7nc2Y = (949 - 949);
    scanf ("%d", &jKRhC8Xw);
    for (pFEzmKM = (537 - 537); pFEzmKM < jKRhC8Xw; pFEzmKM++) {
        scanf ("%lf %lf", &a[pFEzmKM], &NGAHc9h2ud[pFEzmKM]);
    }
    {
        pFEzmKM = 827 - 827;
        while (pFEzmKM < jKRhC8Xw) {
            {
                RCZgE6 = 0;
                while (RCZgE6 < jKRhC8Xw) {
                    if (l7nc2Y < v10BvkAUzS4 (a[pFEzmKM], NGAHc9h2ud[pFEzmKM], a[RCZgE6], NGAHc9h2ud[RCZgE6]))
                        l7nc2Y = v10BvkAUzS4 (a[pFEzmKM], NGAHc9h2ud[pFEzmKM], a[RCZgE6], NGAHc9h2ud[RCZgE6]);
                    RCZgE6++;
                };
            }
            pFEzmKM = pFEzmKM + 1;
        };
    }
    printf ("%.4f", l7nc2Y);
}

