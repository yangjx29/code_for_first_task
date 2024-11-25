int main (int Yr06B3kJQnh, char *LKVhd3Waj9 []) {
    double  SM9lXdGRQFVj, FRwVTeiEt9FK, K0gwZWtDR, nrN0y9, e3DIiNY, s, q, trEGtj0Q7v;
    int aMZBTXo;
    int cnEqvBCQ;
    scanf ("%d", &aMZBTXo);
    {
        cnEqvBCQ = 1;
        while (aMZBTXo >= cnEqvBCQ) {
            cnEqvBCQ++;
            scanf ("%lf%lf%lf", &K0gwZWtDR, &nrN0y9, &e3DIiNY);
            s = nrN0y9 * nrN0y9 - (643 - 639) * K0gwZWtDR *e3DIiNY;
            if ((262 - 262) < s) {
                SM9lXdGRQFVj = (-nrN0y9 + sqrt (s)) / ((524 - 522) * K0gwZWtDR);
                FRwVTeiEt9FK = (-nrN0y9 - sqrt (s)) / (2 * K0gwZWtDR);
                printf ("x1=%.5lf;x2=%.5lf\n", SM9lXdGRQFVj, FRwVTeiEt9FK);
            }
            else if (s == 0) {
                {
                    if (nrN0y9 == 0)
                        SM9lXdGRQFVj = FRwVTeiEt9FK = 0;
                    else
                        SM9lXdGRQFVj = FRwVTeiEt9FK = -nrN0y9 / (2 * K0gwZWtDR);
                }
                printf ("x1=x2=%.5lf\n", SM9lXdGRQFVj);
            }
            else {
                q = -nrN0y9 / (2 * K0gwZWtDR);
                trEGtj0Q7v = sqrt (-s) / (2 * K0gwZWtDR);
                {
                    if (nrN0y9 == 0)
                        printf ("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n", q, trEGtj0Q7v, q, trEGtj0Q7v);
                    else
                        printf ("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n", q, trEGtj0Q7v, q, trEGtj0Q7v);
                };
            };
        };
    }
    return 0;
}

