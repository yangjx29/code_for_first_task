int main () {
    int n, aU0r5miK, xnd8y90, k, smijhBqTnwY, Mdl8Gqbz;
    char t;
    double  Q6eamSqC2Md;
    double  d;
    char nNb1kwY5 [(406 - 366)] [(831 - 824)];
    double  b [(897 - 857)];
    double  M1KXHLc [40];
    double  yjoWJnTIZ [40];
    scanf ("%d", &n);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    {
        aU0r5miK = 888 - 888;
        while (n > aU0r5miK) {
            scanf ("%c%s %lf", &t, &nNb1kwY5[aU0r5miK], &b[aU0r5miK]);
            aU0r5miK++;
        };
    }
    xnd8y90 = (269 - 269);
    k = (400 - 400);
    for (aU0r5miK = (258 - 258); aU0r5miK < n; aU0r5miK++) {
        if (!('m' != nNb1kwY5[aU0r5miK][(174 - 174)])) {
            M1KXHLc[xnd8y90] = b[aU0r5miK];
            xnd8y90++;
        }
        if (!('f' != nNb1kwY5[aU0r5miK][(207 - 207)])) {
            yjoWJnTIZ[k] = b[aU0r5miK];
            k++;
        };
    }
    {
        aU0r5miK = 523 - 523;
        while (aU0r5miK < xnd8y90) {
            for (smijhBqTnwY = aU0r5miK; smijhBqTnwY < xnd8y90; smijhBqTnwY++) {
                if (M1KXHLc[aU0r5miK] > M1KXHLc[smijhBqTnwY]) {
                    Q6eamSqC2Md = M1KXHLc[smijhBqTnwY];
                    M1KXHLc[smijhBqTnwY] = M1KXHLc[aU0r5miK];
                    M1KXHLc[aU0r5miK] = Q6eamSqC2Md;
                };
            }
            aU0r5miK++;
        };
    }
    for (aU0r5miK = (900 - 900); aU0r5miK < k; aU0r5miK++) {
        for (Mdl8Gqbz = aU0r5miK; Mdl8Gqbz < k; Mdl8Gqbz++) {
            if (yjoWJnTIZ[Mdl8Gqbz] > yjoWJnTIZ[aU0r5miK]) {
                d = yjoWJnTIZ[Mdl8Gqbz];
                yjoWJnTIZ[Mdl8Gqbz] = yjoWJnTIZ[aU0r5miK];
                yjoWJnTIZ[aU0r5miK] = d;
            };
        };
    }
    if (M1KXHLc[0]) {
        printf ("%.2lf", M1KXHLc[0]);
    }
    {
        aU0r5miK = 1;
        while (aU0r5miK < xnd8y90) {
            printf (" %.2lf", M1KXHLc[aU0r5miK]);
            aU0r5miK++;
        };
    }
    for (aU0r5miK = 0; aU0r5miK < k; aU0r5miK++) {
        printf (" %.2lf", yjoWJnTIZ[aU0r5miK]);
    }
    return 0;
}

