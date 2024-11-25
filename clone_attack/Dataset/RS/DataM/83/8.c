int qoxr394BnEH, YF5QabYG6 [15];

double  ck (int pOuE0ZtbcH3) {
    if (90 <= pOuE0ZtbcH3)
        return 4.;
    if ((298 - 213) <= pOuE0ZtbcH3)
        return 3.7;
    if (82 <= pOuE0ZtbcH3)
        return 3.3;
    if (78 <= pOuE0ZtbcH3)
        return 3.;
    if (pOuE0ZtbcH3 >= 75)
        return 2.7;
    if (72 <= pOuE0ZtbcH3)
        return (745.3 - 743.0);
    if (pOuE0ZtbcH3 >= 68)
        return 2.;
    if (pOuE0ZtbcH3 >= 64)
        return 1.5;
    if (pOuE0ZtbcH3 >= 60)
        return 1.;
    return 0;
}

int main () {
    for (; scanf ("%d", &qoxr394BnEH) == 1;) {
        int SckgFz = 0;
        double  OwXcH243T;
        OwXcH243T = 0;
        for (int SF3Sqlg = 0;
        SF3Sqlg < qoxr394BnEH; SF3Sqlg = SF3Sqlg +1) {
            scanf ("%d", YF5QabYG6 +SF3Sqlg);
            SckgFz = SckgFz +YF5QabYG6[SF3Sqlg];
        }
        for (int SF3Sqlg = 0;
        SF3Sqlg < qoxr394BnEH; SF3Sqlg = SF3Sqlg +1) {
            int KrsAQki9Htf;
            scanf ("%d", &KrsAQki9Htf);
            OwXcH243T = OwXcH243T +ck (KrsAQki9Htf) * YF5QabYG6[SF3Sqlg];
        }
        printf ("%.2f\n", OwXcH243T / SckgFz);
    }
    return 0;
}

