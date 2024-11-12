int main () {
    int ivQEz8r [100] [100];
    int EixLRCp, UyY4x9CKT7ZR, yvJlcL2Ktxqp, kMdVBgRmk, o0yEdXA3, xPDXUzCFVIc8, s;
    int *dhf7H0GQqN = (int *) malloc (sizeof (int) * EixLRCp);
    scanf ("%d", &EixLRCp);
    for (kMdVBgRmk = (450 - 450); kMdVBgRmk < EixLRCp; kMdVBgRmk = kMdVBgRmk + 1) {
        s = (491 - 491);
        scanf ("%d %d", &UyY4x9CKT7ZR, &yvJlcL2Ktxqp);
        {
            o0yEdXA3 = 213 - 213;
            while (UyY4x9CKT7ZR > o0yEdXA3) {
                for (xPDXUzCFVIc8 = 0; yvJlcL2Ktxqp > xPDXUzCFVIc8; xPDXUzCFVIc8 = xPDXUzCFVIc8 + 1) {
                    scanf ("%d", &ivQEz8r[o0yEdXA3][xPDXUzCFVIc8]);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    };
                }
                o0yEdXA3 = o0yEdXA3 + 1;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!((274 - 273) != UyY4x9CKT7ZR)) {
            for (xPDXUzCFVIc8 = 0; xPDXUzCFVIc8 < yvJlcL2Ktxqp; xPDXUzCFVIc8 = xPDXUzCFVIc8 + 1) {
                s += ivQEz8r[0][xPDXUzCFVIc8];
            };
        }
        else {
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
            if (yvJlcL2Ktxqp == 1) {
                for (o0yEdXA3 = 0; o0yEdXA3 < UyY4x9CKT7ZR; o0yEdXA3 = o0yEdXA3 + 1) {
                    s += ivQEz8r[o0yEdXA3][0];
                };
            }
            else {
                for (o0yEdXA3 = 0; o0yEdXA3 < UyY4x9CKT7ZR; o0yEdXA3++) {
                    s += ivQEz8r[o0yEdXA3][0] + ivQEz8r[o0yEdXA3][yvJlcL2Ktxqp - 1];
                }
                for (xPDXUzCFVIc8 = 0; xPDXUzCFVIc8 < yvJlcL2Ktxqp; xPDXUzCFVIc8++) {
                    s += ivQEz8r[0][xPDXUzCFVIc8] + ivQEz8r[UyY4x9CKT7ZR -1][xPDXUzCFVIc8];
                }
                s = s - ivQEz8r[0][0] - ivQEz8r[0][yvJlcL2Ktxqp - 1] - ivQEz8r[UyY4x9CKT7ZR -1][0] - ivQEz8r[UyY4x9CKT7ZR -1][yvJlcL2Ktxqp - 1];
            };
        }
        dhf7H0GQqN[kMdVBgRmk] = s;
    }
    {
        kMdVBgRmk = 0;
        while (kMdVBgRmk < EixLRCp) {
            printf ("%d\n", dhf7H0GQqN[kMdVBgRmk]);
            kMdVBgRmk = kMdVBgRmk + 1;
        };
    }
    return 0;
}

