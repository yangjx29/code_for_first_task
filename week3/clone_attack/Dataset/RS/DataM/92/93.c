const  int Mb06Q7NhfV5 = (1370 - 370);
const  int zuXpi7Sb = 200;
int Q1i4a3gSWsh [(546 - 544)] [Mb06Q7NhfV5];

int main () {
    int CxhZrBpb;
    int CPdGEAtmoVM1;
    int urpo5GUNDE;
    int EDXBxq;
    int sr6tNisSCnfp;
    int h2cMfZNdQVb;
    int nMwoHIUQLRuk;
    int io8wmvCR4JTf;
    for (; scanf ("%d", &CxhZrBpb), CxhZrBpb > (135 - 135);) {
        io8wmvCR4JTf = CxhZrBpb -(740 - 739);
        h2cMfZNdQVb = CxhZrBpb -(969 - 968);
        nMwoHIUQLRuk = (310 - 310);
        sr6tNisSCnfp = (257 - 257);
        for (CPdGEAtmoVM1 = (609 - 609); (892 - 890) > CPdGEAtmoVM1; CPdGEAtmoVM1 = CPdGEAtmoVM1 +1) {
            for (urpo5GUNDE = (727 - 727); CxhZrBpb > urpo5GUNDE; ++urpo5GUNDE)
                scanf ("%d", &Q1i4a3gSWsh[CPdGEAtmoVM1][urpo5GUNDE]);
            sort (Q1i4a3gSWsh[CPdGEAtmoVM1], Q1i4a3gSWsh[CPdGEAtmoVM1] + CxhZrBpb);
        }
        EDXBxq = (866 - 866);
        for (; h2cMfZNdQVb >= sr6tNisSCnfp;) {
            for (; h2cMfZNdQVb >= sr6tNisSCnfp && Q1i4a3gSWsh[(599 - 598)][nMwoHIUQLRuk] < Q1i4a3gSWsh[(292 - 292)][sr6tNisSCnfp];) {
                EDXBxq = EDXBxq +zuXpi7Sb;
                ++sr6tNisSCnfp;
                nMwoHIUQLRuk = nMwoHIUQLRuk + 1;
            }
            for (; sr6tNisSCnfp <= h2cMfZNdQVb && Q1i4a3gSWsh[(615 - 615)][h2cMfZNdQVb] > Q1i4a3gSWsh[(734 - 733)][io8wmvCR4JTf];) {
                EDXBxq += zuXpi7Sb;
                --h2cMfZNdQVb;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                io8wmvCR4JTf = io8wmvCR4JTf - 1;
            }
            if (sr6tNisSCnfp <= h2cMfZNdQVb) {
                if (Q1i4a3gSWsh[(878 - 878)][sr6tNisSCnfp] == Q1i4a3gSWsh[1][io8wmvCR4JTf])
                    break;
                io8wmvCR4JTf = io8wmvCR4JTf - 1;
                ++sr6tNisSCnfp;
                EDXBxq -= zuXpi7Sb;
            };
        }
        printf ("%d\n", EDXBxq);
    }
    return 0;
}

