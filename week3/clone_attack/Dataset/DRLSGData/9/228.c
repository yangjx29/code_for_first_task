struct   patient {
    char rBCKVMA6 [(558 - 548)];
    int qm7dutiJ2GEn;
};
int main () {
    struct   patient crhzqBs8Gu5y [101];
    int xc8aQ0B96, WZGT6lsUeRf, M0wAa3JzSuBs = (763 - 762), Xy7cLIqiX, iLAV8cOrgRt2;
    scanf ("%d", &Xy7cLIqiX);
    for (iLAV8cOrgRt2 = (517 - 516); Xy7cLIqiX >= iLAV8cOrgRt2; iLAV8cOrgRt2++)
        scanf ("%s%d", crhzqBs8Gu5y[iLAV8cOrgRt2].rBCKVMA6, &crhzqBs8Gu5y[iLAV8cOrgRt2].qm7dutiJ2GEn);
    for (; M0wAa3JzSuBs != (152 - 152);) {
        WZGT6lsUeRf = 59;
        M0wAa3JzSuBs = (63 - 63);
        for (iLAV8cOrgRt2 = 1; iLAV8cOrgRt2 <= Xy7cLIqiX; iLAV8cOrgRt2++) {
            if (crhzqBs8Gu5y[iLAV8cOrgRt2].qm7dutiJ2GEn > WZGT6lsUeRf) {
                WZGT6lsUeRf = crhzqBs8Gu5y[iLAV8cOrgRt2].qm7dutiJ2GEn;
                M0wAa3JzSuBs = iLAV8cOrgRt2;
            }
        }
        if (M0wAa3JzSuBs != (981 - 981))
            printf ("%s\n", crhzqBs8Gu5y[M0wAa3JzSuBs].rBCKVMA6);
        crhzqBs8Gu5y[M0wAa3JzSuBs].qm7dutiJ2GEn = 0;
    }
    for (iLAV8cOrgRt2 = 1; iLAV8cOrgRt2 <= Xy7cLIqiX; iLAV8cOrgRt2++)
        if (crhzqBs8Gu5y[iLAV8cOrgRt2].qm7dutiJ2GEn != 0)
            printf ("%s\n", crhzqBs8Gu5y[iLAV8cOrgRt2].rBCKVMA6);
}

