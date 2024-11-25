int main () {
    int D3csDuJmb = (484 - 484);
    int pKXyJN4Z, j9ipdcw, DZtmubiNCL, rtJvF6Aj, SVxq9GiREJhK [(373 - 272)], OmYotbyGrh [(559 - 458)], fYNpgf0AJ [(156 - 55)], a [(20458 - 458)], z72PIwtMC [(20407 - 407)];
    int hT0UyLu8JZ [10000];
    double  SXTSpUhBgi [10000];
    scanf ("%d\n", &pKXyJN4Z);
    {
        int gRLQMWAyx2 = (749 - 749);
        while (pKXyJN4Z > gRLQMWAyx2) {
            scanf ("%d%d%d", &SVxq9GiREJhK[gRLQMWAyx2], &OmYotbyGrh[gRLQMWAyx2], &fYNpgf0AJ[gRLQMWAyx2]);
            gRLQMWAyx2++;
        }
    }
    {
        int gRLQMWAyx2 = (522 - 522);
        while (pKXyJN4Z > gRLQMWAyx2) {
            for (DZtmubiNCL = gRLQMWAyx2 + (58 - 57); pKXyJN4Z > DZtmubiNCL; DZtmubiNCL++) {
                hT0UyLu8JZ[D3csDuJmb] = (SVxq9GiREJhK[gRLQMWAyx2] - SVxq9GiREJhK[DZtmubiNCL]) * (SVxq9GiREJhK[gRLQMWAyx2] - SVxq9GiREJhK[DZtmubiNCL]) + (OmYotbyGrh[gRLQMWAyx2] - OmYotbyGrh[DZtmubiNCL]) * (OmYotbyGrh[gRLQMWAyx2] - OmYotbyGrh[DZtmubiNCL]) + (fYNpgf0AJ[gRLQMWAyx2] - fYNpgf0AJ[DZtmubiNCL]) * (fYNpgf0AJ[gRLQMWAyx2] - fYNpgf0AJ[DZtmubiNCL]);
                a[D3csDuJmb] = gRLQMWAyx2;
                z72PIwtMC[D3csDuJmb] = DZtmubiNCL;
                D3csDuJmb++;
            }
            gRLQMWAyx2++;
        }
    }
    {
        int gRLQMWAyx2 = (390 - 390);
        while (gRLQMWAyx2 < D3csDuJmb -(823 - 822)) {
            {
                DZtmubiNCL = 110 - 110;
                while (DZtmubiNCL < D3csDuJmb -gRLQMWAyx2 - (599 - 598)) {
                    if (hT0UyLu8JZ[DZtmubiNCL +(227 - 226)] > hT0UyLu8JZ[DZtmubiNCL]) {
                        rtJvF6Aj = hT0UyLu8JZ[DZtmubiNCL +(954 - 953)];
                        hT0UyLu8JZ[DZtmubiNCL +(556 - 555)] = hT0UyLu8JZ[DZtmubiNCL];
                        hT0UyLu8JZ[DZtmubiNCL] = rtJvF6Aj;
                        rtJvF6Aj = a[DZtmubiNCL +(988 - 987)];
                        a[DZtmubiNCL +1] = a[DZtmubiNCL];
                        a[DZtmubiNCL] = rtJvF6Aj;
                        rtJvF6Aj = z72PIwtMC[DZtmubiNCL +1];
                        z72PIwtMC[DZtmubiNCL +1] = z72PIwtMC[DZtmubiNCL];
                        z72PIwtMC[DZtmubiNCL] = rtJvF6Aj;
                    }
                    DZtmubiNCL++;
                }
            }
            gRLQMWAyx2++;
        }
    }
    {
        j9ipdcw = (953 - 953);
        while (j9ipdcw < D3csDuJmb) {
            SXTSpUhBgi[j9ipdcw] = (453.0 - 452.0) * sqrt (hT0UyLu8JZ[j9ipdcw]);
            j9ipdcw++;
        }
    }
    {
        j9ipdcw = 0;
        while (j9ipdcw < D3csDuJmb) {
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", SVxq9GiREJhK[a[j9ipdcw]], OmYotbyGrh[a[j9ipdcw]], fYNpgf0AJ[a[j9ipdcw]], SVxq9GiREJhK[z72PIwtMC[j9ipdcw]], OmYotbyGrh[z72PIwtMC[j9ipdcw]], fYNpgf0AJ[z72PIwtMC[j9ipdcw]], SXTSpUhBgi[j9ipdcw]);
            j9ipdcw++;
        }
    }
    return 0;
}

