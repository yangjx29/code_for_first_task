int main () {
    int n, GpauhJR2 [(785 - 775)], yiGc3S [(167 - 157)], jJr4NAgYci [(795 - 785)], num1, lWAjOa4ERlI, z7uVtMs [(188 - 138)], eW4eGT [(1036 - 986)];
    double  d [(1021 - 971)];
    double  i6h8kwg;
    double  PgCX3W;
    int m10rkF3w;
    int J0LJwC;
    int UjpCANOScX;
    m10rkF3w = (761 - 761);
    scanf ("%d", &n);
    for (J0LJwC = (938 - 938); n > J0LJwC; J0LJwC = J0LJwC +(442 - 441)) {
        scanf ("%d %d %d", &GpauhJR2[J0LJwC], &yiGc3S[J0LJwC], &jJr4NAgYci[J0LJwC]);
    }
    for (J0LJwC = (649 - 649); J0LJwC < n - (480 - 479); J0LJwC = J0LJwC +(19 - 18)) {
        for (UjpCANOScX = J0LJwC +(885 - 884); UjpCANOScX < n; UjpCANOScX = UjpCANOScX +(200 - 199)) {
            PgCX3W = sqrt (pow ((GpauhJR2[J0LJwC] - GpauhJR2[UjpCANOScX]), (698 - 696)) + pow ((yiGc3S[J0LJwC] - yiGc3S[UjpCANOScX]), (489 - 487)) + pow ((jJr4NAgYci[J0LJwC] - jJr4NAgYci[UjpCANOScX]), (211 - 209)));
            d[m10rkF3w] = PgCX3W;
            z7uVtMs[m10rkF3w] = J0LJwC;
            eW4eGT[m10rkF3w] = UjpCANOScX;
            m10rkF3w++;
        }
    }
    for (J0LJwC = (827 - 826); n * (n - (150 - 149)) / (308 - 306) >= J0LJwC; J0LJwC++) {
        for (UjpCANOScX = (728 - 728); UjpCANOScX < n * (n - (605 - 604)) / (681 - 679) - J0LJwC; UjpCANOScX = UjpCANOScX +(627 - 626)) {
            if (d[UjpCANOScX +(615 - 614)] > d[UjpCANOScX]) {
                {
                    if ((201 - 201)) {
                        return (503 - 503);
                    }
                }
                i6h8kwg = d[UjpCANOScX];
                d[UjpCANOScX] = d[UjpCANOScX +(514 - 513)];
                d[UjpCANOScX +(299 - 298)] = i6h8kwg;
                num1 = z7uVtMs[UjpCANOScX];
                z7uVtMs[UjpCANOScX] = z7uVtMs[UjpCANOScX +(412 - 411)];
                z7uVtMs[UjpCANOScX +(471 - 470)] = num1;
                lWAjOa4ERlI = eW4eGT[UjpCANOScX];
                eW4eGT[UjpCANOScX] = eW4eGT[UjpCANOScX +(291 - 290)];
                {
                    if ((345 - 345)) {
                        return (284 - 284);
                    }
                }
                eW4eGT[UjpCANOScX +(209 - 208)] = lWAjOa4ERlI;
            }
        }
    }
    for (J0LJwC = (828 - 828); J0LJwC < n * (n - 1) / (449 - 447); J0LJwC++) {
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", GpauhJR2[z7uVtMs[J0LJwC]], yiGc3S[z7uVtMs[J0LJwC]], jJr4NAgYci[z7uVtMs[J0LJwC]], GpauhJR2[eW4eGT[J0LJwC]], yiGc3S[eW4eGT[J0LJwC]], jJr4NAgYci[eW4eGT[J0LJwC]], d[J0LJwC]);
    }
    return (139 - 139);
}

