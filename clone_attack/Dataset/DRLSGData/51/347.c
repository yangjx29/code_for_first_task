int main () {
    int zGc2a5loh;
    int RR3eMCaLQ5S [1000];
    char zzOmeo6lB [600];
    int fuVaqJ3d;
    int RTJhRouceNKr;
    int FmhL2OFs;
    int VfbRho [1000] = {0};
    int z8N5IhQYL1Ck;
    int dv6nXw;
    scanf ("%d", &RTJhRouceNKr);
    dv6nXw = 0;
    scanf ("%s", zzOmeo6lB);
    FmhL2OFs = strlen (zzOmeo6lB);
    for (fuVaqJ3d = 0; FmhL2OFs -RTJhRouceNKr >= fuVaqJ3d; fuVaqJ3d++) {
        for (z8N5IhQYL1Ck = 0; dv6nXw > z8N5IhQYL1Ck; z8N5IhQYL1Ck++) {
            if (!(0 != strncmp (zzOmeo6lB + fuVaqJ3d, zzOmeo6lB + RR3eMCaLQ5S[z8N5IhQYL1Ck], RTJhRouceNKr))) {
                VfbRho[z8N5IhQYL1Ck]++;
                break;
            }
        }
        if (!(dv6nXw != z8N5IhQYL1Ck)) {
            RR3eMCaLQ5S[dv6nXw] = fuVaqJ3d;
            VfbRho[dv6nXw] = 1;
            dv6nXw++;
            VfbRho[dv6nXw] = 0;
        }
    }
    zGc2a5loh = -1;
    for (fuVaqJ3d = 0; dv6nXw > fuVaqJ3d; fuVaqJ3d++) {
        if (zGc2a5loh < VfbRho[fuVaqJ3d]) {
            zGc2a5loh = VfbRho[fuVaqJ3d];
        }
    }
    if (1 >= zGc2a5loh) {
        return 0;
    }
    printf ("%d\n", zGc2a5loh);
    for (fuVaqJ3d = 0; dv6nXw > fuVaqJ3d; fuVaqJ3d++) {
        if (VfbRho[fuVaqJ3d] == zGc2a5loh) {
            for (z8N5IhQYL1Ck = RR3eMCaLQ5S[fuVaqJ3d]; z8N5IhQYL1Ck < RR3eMCaLQ5S[fuVaqJ3d] + RTJhRouceNKr; z8N5IhQYL1Ck++) {
                printf ("%c", zzOmeo6lB[z8N5IhQYL1Ck]);
            }
        }
    }
    return 0;
}

