int main () {
    int UEZ8FAzxLWOb [(789 - 689)];
    int k;
    double  z [(865 - 765)] [(134 - 34)];
    double  OuPA5xrcNKi [100] = {(319 - 319)};
    double  Tv7oai [100] = {0};
    scanf ("%d", &k);
    for (int XB5mgfcw9CDY = 0;
    k > XB5mgfcw9CDY; XB5mgfcw9CDY++) {
        scanf ("%d", &UEZ8FAzxLWOb[XB5mgfcw9CDY]);
        for (int lnV0Nrub = 0;
        UEZ8FAzxLWOb[XB5mgfcw9CDY] > lnV0Nrub; lnV0Nrub = lnV0Nrub + 1) {
            scanf ("%lf", &z[XB5mgfcw9CDY][lnV0Nrub]);
            OuPA5xrcNKi[XB5mgfcw9CDY] = OuPA5xrcNKi[XB5mgfcw9CDY] + z[XB5mgfcw9CDY][lnV0Nrub];
        }
        OuPA5xrcNKi[XB5mgfcw9CDY] = OuPA5xrcNKi[XB5mgfcw9CDY] / (double ) UEZ8FAzxLWOb[XB5mgfcw9CDY];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        {
            int t = 0;
            while (UEZ8FAzxLWOb[XB5mgfcw9CDY] > t) {
                Tv7oai[XB5mgfcw9CDY] = Tv7oai[XB5mgfcw9CDY] + (z[XB5mgfcw9CDY][t] - OuPA5xrcNKi[XB5mgfcw9CDY]) * (z[XB5mgfcw9CDY][t] - OuPA5xrcNKi[XB5mgfcw9CDY]);
                t = t + 1;
            };
        }
        Tv7oai[XB5mgfcw9CDY] = sqrt (Tv7oai[XB5mgfcw9CDY] / (double ) UEZ8FAzxLWOb[XB5mgfcw9CDY]);
        printf ("%.5lf\n", Tv7oai[XB5mgfcw9CDY]);
    }
    return 0;
}

