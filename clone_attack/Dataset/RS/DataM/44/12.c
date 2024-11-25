main () {
    int B5JAFmtXGgc;
    {
        B5JAFmtXGgc = 1;
        while (B5JAFmtXGgc <= 6) {
            int NQAGcnC, z2OymKig4, fexXhrlTVdU;
            B5JAFmtXGgc = B5JAFmtXGgc +1;
            scanf ("%d", &NQAGcnC);
            if (0 > NQAGcnC) {
                NQAGcnC = -NQAGcnC;
                {
                    fexXhrlTVdU = 0;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    while (NQAGcnC > 0) {
                        z2OymKig4 = NQAGcnC % 10;
                        NQAGcnC = NQAGcnC / 10;
                        fexXhrlTVdU = 10 * fexXhrlTVdU + z2OymKig4;
                    };
                }
                fexXhrlTVdU = -fexXhrlTVdU;
                printf ("%d\n", fexXhrlTVdU);
            }
            else {
                {
                    fexXhrlTVdU = 0;
                    while (NQAGcnC > 0) {
                        z2OymKig4 = NQAGcnC % 10;
                        NQAGcnC = NQAGcnC / 10;
                        fexXhrlTVdU = 10 * fexXhrlTVdU + z2OymKig4;
                    };
                }
                printf ("%d\n", fexXhrlTVdU);
            };
        };
    };
}

