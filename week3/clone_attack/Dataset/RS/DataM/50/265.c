int main () {
    int QvXwuhzi, zkb6c35Eu, cbLcGQvyF, Ka8clH1, gSqoIdXU0Gzn [11];
    int PgoSn8 [12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    scanf ("%d", &QvXwuhzi);
    for (zkb6c35Eu = 0; zkb6c35Eu < 12; zkb6c35Eu++) {
        Ka8clH1 = 12;
        {
            cbLcGQvyF = 0;
            while (cbLcGQvyF < zkb6c35Eu) {
                Ka8clH1 = Ka8clH1 +PgoSn8[cbLcGQvyF];
                cbLcGQvyF++;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        gSqoIdXU0Gzn[zkb6c35Eu] = (Ka8clH1 % 7 + QvXwuhzi) % 7;
        if (gSqoIdXU0Gzn[zkb6c35Eu] == 5)
            printf ("%d\n", zkb6c35Eu + 1);
    }
    return 0;
}

