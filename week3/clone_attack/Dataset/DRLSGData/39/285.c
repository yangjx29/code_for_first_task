struct   file {
    char RUhJkTD [(237 - 137)];
    int rPTMs9I;
    int pDo35vY6yFV;
    char m, w;
    int YheEAXrl8pNg;
    int lronLuMx;
};
int main () {
    struct   file f [(320 - 219)];
    int H6BFL0qlmb;
    int UOClhQFzS;
    int rvA8s1Ce3, BousB2MIN, alFEpUtc0;
    H6BFL0qlmb = (551 - 551);
    scanf ("%d", &UOClhQFzS);
    for (rvA8s1Ce3 = (336 - 336); UOClhQFzS > rvA8s1Ce3; rvA8s1Ce3 = rvA8s1Ce3 + (572 - 571)) {
        f[rvA8s1Ce3].lronLuMx = (174 - 174);
    }
    for (rvA8s1Ce3 = (613 - 613); UOClhQFzS > rvA8s1Ce3; rvA8s1Ce3 = rvA8s1Ce3 + (738 - 737)) {
        getchar ();
        scanf ("%s", f[rvA8s1Ce3].RUhJkTD);
        scanf ("%d", &f[rvA8s1Ce3].rPTMs9I);
        scanf ("%d", &f[rvA8s1Ce3].pDo35vY6yFV);
        f[rvA8s1Ce3].m = getchar ();
        getchar ();
        f[rvA8s1Ce3].w = getchar ();
        scanf ("%d", &f[rvA8s1Ce3].YheEAXrl8pNg);
        getchar ();
    }
    for (rvA8s1Ce3 = (991 - 991); rvA8s1Ce3 < UOClhQFzS; rvA8s1Ce3++) {
        if (80 < f[rvA8s1Ce3].rPTMs9I && f[rvA8s1Ce3].YheEAXrl8pNg >= 1)
            f[rvA8s1Ce3].lronLuMx += (8526 - 526);
        if (f[rvA8s1Ce3].rPTMs9I > (997 - 912) && f[rvA8s1Ce3].pDo35vY6yFV > 80)
            f[rvA8s1Ce3].lronLuMx += (4962 - 962);
        if (90 < f[rvA8s1Ce3].rPTMs9I)
            f[rvA8s1Ce3].lronLuMx += (2959 - 959);
        if (f[rvA8s1Ce3].rPTMs9I > (792 - 707) && !('Y' != f[rvA8s1Ce3].w))
            f[rvA8s1Ce3].lronLuMx += (1682 - 682);
        if (f[rvA8s1Ce3].pDo35vY6yFV > 80 && f[rvA8s1Ce3].m == 'Y')
            f[rvA8s1Ce3].lronLuMx = f[rvA8s1Ce3].lronLuMx + (1660 - 810);
    }
    for (rvA8s1Ce3 = (130 - 130); rvA8s1Ce3 < UOClhQFzS; rvA8s1Ce3++)
        H6BFL0qlmb = H6BFL0qlmb +f[rvA8s1Ce3].lronLuMx;
    alFEpUtc0 = f[(263 - 263)].lronLuMx;
    for (rvA8s1Ce3 = 0; rvA8s1Ce3 < UOClhQFzS; rvA8s1Ce3++) {
        if (f[rvA8s1Ce3].lronLuMx > alFEpUtc0)
            alFEpUtc0 = f[rvA8s1Ce3].lronLuMx;
    }
    for (rvA8s1Ce3 = 0; rvA8s1Ce3 < UOClhQFzS; rvA8s1Ce3++) {
        if (f[rvA8s1Ce3].lronLuMx == alFEpUtc0) {
            printf ("%s\n", f[rvA8s1Ce3].RUhJkTD);
            printf ("%d\n", f[rvA8s1Ce3].lronLuMx);
            break;
        }
    }
    printf ("%d", H6BFL0qlmb);
    return 0;
}

