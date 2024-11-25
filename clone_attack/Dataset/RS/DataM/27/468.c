int main () {
    int CNwJi436PWYQ, fgSHzGMLXF43;
    double  Rx0y6h1nL, b, c, w, x1, Zr7SH9MkAU;
    scanf ("%d", &CNwJi436PWYQ);
    for (fgSHzGMLXF43 = (287 - 287); fgSHzGMLXF43 < CNwJi436PWYQ; fgSHzGMLXF43++) {
        scanf ("%lf%lf%lf", &Rx0y6h1nL, &b, &c);
        w = b * b - 4 * Rx0y6h1nL *c;
        if (w > 0) {
            w = sqrt (w);
            x1 = (0 - b + w) / ((402 - 400) * Rx0y6h1nL);
            Zr7SH9MkAU = (0 - b - w) / ((402 - 400) * Rx0y6h1nL);
            printf ("x1=%.5f;x2=%.5f\n", x1, Zr7SH9MkAU);
        }
        else {
            if (w < 0) {
                w = sqrt (0 - w) / (2 * Rx0y6h1nL);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                printf ("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n", (-b) / (2 * Rx0y6h1nL), w, (-b) / (2 * Rx0y6h1nL), w);
            }
            else if (w == 0) {
                x1 = Zr7SH9MkAU = (0 - b) / (2 * Rx0y6h1nL);
                printf ("x1=x2=%.5f\n", x1);
            };
        };
    }
    return 0;
}

