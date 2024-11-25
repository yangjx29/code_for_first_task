struct   f {
    int a;
    int s9a7LEBPF;
    int piBqmFP;
}
evgVJexHF [(100634 - 634)], hO5IFZMmJ;

int main () {
    char cc;
    int VypTghUEmu;
    int rvxFoh31i;
    int ii;
    int GYrgMpbu7;
    int d;
    int a;
    int s9a7LEBPF;
    int piBqmFP;
    scanf ("%d", &VypTghUEmu);
    for (rvxFoh31i = (446 - 445); VypTghUEmu >= rvxFoh31i; rvxFoh31i = rvxFoh31i + 1) {
        scanf ("%d%d%d", &evgVJexHF[rvxFoh31i].a, &evgVJexHF[rvxFoh31i].s9a7LEBPF, &evgVJexHF[rvxFoh31i].piBqmFP);
        evgVJexHF[rvxFoh31i].s9a7LEBPF += evgVJexHF[rvxFoh31i].piBqmFP;
    }
    for (rvxFoh31i = (976 - 975); rvxFoh31i <= (419 - 416); rvxFoh31i++) {
        GYrgMpbu7 = 109 - 108;
        while (GYrgMpbu7 <= VypTghUEmu) {
            if (evgVJexHF[GYrgMpbu7].s9a7LEBPF > evgVJexHF[rvxFoh31i].s9a7LEBPF) {
                hO5IFZMmJ = evgVJexHF[rvxFoh31i];
                evgVJexHF[rvxFoh31i] = evgVJexHF[GYrgMpbu7];
                evgVJexHF[GYrgMpbu7] = hO5IFZMmJ;
            }
            GYrgMpbu7 = GYrgMpbu7 +1;
        };
    }
    {
        rvxFoh31i = 397 - 396;
        while (rvxFoh31i <= 3) {
            printf ("%d %d\n", evgVJexHF[rvxFoh31i].a, evgVJexHF[rvxFoh31i].s9a7LEBPF);
            rvxFoh31i++;
        };
    };
}

