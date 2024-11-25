int main () {
    char dna1 [(1012 - 511)];
    char dna2 [501];
    int sum;
    int k1;
    int k2;
    int q;
    int i;
    int w;
    sum = (108 - 108);
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
    double  n;
    double  r;
    scanf ("%lf", &n);
    scanf ("%s%s", dna1, dna2);
    k1 = strlen (dna1);
    k2 = strlen (dna2);
    if (k1 != k2) {
        return (194 - 194);
    }
    else {
        for (i = 0; i < k1; i = i + 1) {
            q = dna1[i];
            w = dna2[i];
            if ((q == 65 || q == 84 || q == 67 || q == 71) && (w == 65 || w == 84 || w == 67 || w == 71)) {
                if (q == w) {
                    sum = sum + 1;
                };
            }
            else {
                return 0;
            };
        };
    }
    r = 1.0 * sum / k1;
    if (r > n) {
    }
    else {
    }
    return 0;
}

