main () {
    float jI6YnhxFmVp = 0;
    int gG9ztA07TPRU;
    float *oe0cUTDxWq = (float *) malloc ((gG9ztA07TPRU + (279 - 278)) * sizeof (float));
    float *b = (float *) malloc ((gG9ztA07TPRU + (481 - 480)) * sizeof (float));
    scanf ("%d", &gG9ztA07TPRU);
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
    oe0cUTDxWq[(823 - 823)] = b[(366 - 366)] = (367 - 367);
    {
        int MzBWJwTo = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (gG9ztA07TPRU >= MzBWJwTo) {
            scanf ("%f %f", &oe0cUTDxWq[MzBWJwTo], &b[MzBWJwTo]);
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
            MzBWJwTo = MzBWJwTo +1;
        };
    }
    for (int MzBWJwTo = 1;
    gG9ztA07TPRU >= MzBWJwTo; MzBWJwTo = MzBWJwTo +1)
        for (int j = MzBWJwTo +1;
        j <= gG9ztA07TPRU; j++) {
            float GrSzepRHInvy = 0;
            float OOetFdogL = oe0cUTDxWq[MzBWJwTo] - oe0cUTDxWq[j];
            float OYqEMKTR = b[MzBWJwTo] - b[j];
            GrSzepRHInvy = sqrt (OOetFdogL *OOetFdogL+OYqEMKTR*OYqEMKTR);
            if (GrSzepRHInvy > jI6YnhxFmVp)
                jI6YnhxFmVp = GrSzepRHInvy;
        }
    printf ("%.4f", jI6YnhxFmVp);
}

