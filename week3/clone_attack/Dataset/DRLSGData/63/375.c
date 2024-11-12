main () {
    int xLb6vd5uD [(717 - 617)] [100];
    int b [100] [100];
    int bCM5GDdJpLW0 [100] [100];
    int A17IVUJH4g;
    int v2JGzA;
    int PwYAXZjBdk;
    int xeIOgN;
    int fQlUL9Pxq;
    int o4PVDZaOi8u;
    int vnr74FRuO;
    int wFxgzNDWRtY;
    wFxgzNDWRtY = 0;
    int exwDg3VFc;
    exwDg3VFc = 1;
    scanf ("%d %d", &xeIOgN, &fQlUL9Pxq);
    {
        A17IVUJH4g = 0;
        for (; xeIOgN - 1 >= A17IVUJH4g;) {
            {
                v2JGzA = 0;
                while (fQlUL9Pxq - 1 >= v2JGzA) {
                    scanf ("%d", &xLb6vd5uD[A17IVUJH4g][v2JGzA]);
                    v2JGzA++;
                }
            }
            A17IVUJH4g++;
        }
    }
    scanf ("%d %d", &o4PVDZaOi8u, &vnr74FRuO);
    {
        A17IVUJH4g = 0;
        for (; o4PVDZaOi8u - 1 >= A17IVUJH4g;) {
            {
                v2JGzA = 0;
                for (; vnr74FRuO - 1 >= v2JGzA;) {
                    scanf ("%d", &b[A17IVUJH4g][v2JGzA]);
                    v2JGzA++;
                }
            }
            A17IVUJH4g++;
        }
    }
    {
        A17IVUJH4g = 0;
        while (xeIOgN - 1 >= A17IVUJH4g) {
            {
                v2JGzA = 0;
                for (; vnr74FRuO - 1 >= v2JGzA;) {
                    wFxgzNDWRtY = 0;
                    {
                        PwYAXZjBdk = 0;
                        for (; PwYAXZjBdk <= fQlUL9Pxq - 1;) {
                            wFxgzNDWRtY = wFxgzNDWRtY + xLb6vd5uD[A17IVUJH4g][PwYAXZjBdk] * b[PwYAXZjBdk][v2JGzA];
                            PwYAXZjBdk++;
                        }
                    }
                    bCM5GDdJpLW0[A17IVUJH4g][v2JGzA] = wFxgzNDWRtY;
                    v2JGzA++;
                }
            }
            A17IVUJH4g++;
        }
    }
    {
        A17IVUJH4g = 0;
        while (A17IVUJH4g <= xeIOgN - 1) {
            {
                v2JGzA = 0;
                while (v2JGzA <= vnr74FRuO - 1) {
                    if (vnr74FRuO == 1) {
                        printf ("%d\n", bCM5GDdJpLW0[A17IVUJH4g][v2JGzA]);
                    }
                    if (vnr74FRuO > 1) {
                        if (exwDg3VFc % vnr74FRuO == 1) {
                            printf ("%d", bCM5GDdJpLW0[A17IVUJH4g][v2JGzA]);
                        }
                        else if (exwDg3VFc % vnr74FRuO == 0) {
                            printf (" %d\n", bCM5GDdJpLW0[A17IVUJH4g][v2JGzA]);
                        }
                        else {
                            printf (" %d", bCM5GDdJpLW0[A17IVUJH4g][v2JGzA]);
                        }
                        exwDg3VFc++;
                    }
                    v2JGzA++;
                }
            }
            A17IVUJH4g++;
        }
    }
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
}

