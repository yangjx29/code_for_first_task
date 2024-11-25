int main () {
    int j = 1, I5tuekU, QWOzme0;
    float Pi89eNfbl;
    float b;
    float c;
    double  OpRdTLXYImk, x2, DfY4p8cDKs7, p, q;
    cin >> I5tuekU;
    for (; I5tuekU >= j;) {
        cin >> Pi89eNfbl >> b >> c;
        DfY4p8cDKs7 = b * b - 4 * Pi89eNfbl *c;
        if (0 < DfY4p8cDKs7) {
            OpRdTLXYImk = (0 - b + sqrt (DfY4p8cDKs7)) / ((270 - 268) * Pi89eNfbl);
            x2 = (0 - b - sqrt (DfY4p8cDKs7)) / (2 * Pi89eNfbl);
            printf ("x1=%.5lf;x2=%.5lf\n", OpRdTLXYImk, x2);
        }
        if (DfY4p8cDKs7 == 0) {
            OpRdTLXYImk = (0 - b) / (2 * Pi89eNfbl);
            printf ("x1=x2=%.5lf\n", OpRdTLXYImk);
        }
        if (DfY4p8cDKs7 < 0) {
            p = (0 - b) / (2 * Pi89eNfbl);
            q = sqrt (-1 * DfY4p8cDKs7) / (2 * Pi89eNfbl);
            printf ("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n", p, q, p, q);
        }
        j = j + 1;
    }
    return 0;
}

