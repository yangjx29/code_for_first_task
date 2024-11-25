int main () {
    char dna1 [501];
    char dna2 [501];
    int d;
    int p;
    int m;
    int n;
    int i;
    d = (535 - 535);
    p = 0;
    double  b;
    scanf ("%lf", &b);
    scanf ("%s", dna1);
    m = strlen (dna1);
    scanf ("%s", dna2);
    n = strlen (dna2);
    for (i = 0; dna1[i] && dna2[i]; i = i + 1) {
        if (!(n == m)) {
            d++;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            break;
        }
        if (!('A' == dna1[i]) && !('T' == dna1[i]) && !('C' == dna1[i]) && !('G' == dna1[i])) {
            d++;
            break;
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
        if (dna2[i] != 'A' && !('T' == dna2[i]) && dna2[i] != 'C' && dna2[i] != 'G') {
            d++;
            break;
        }
        if (dna1[i] == dna2[i]) {
            p = p + 1;
        };
    }
    if ((p * 1.0 / m) > b && d == 0) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                for (x = 0; x < 20; x++) {
                    y += x;
                }
                if (y > 30)
                    return y;
            }
        };
    }
    if (d != 0) {
    }
    if ((p * 1.0 / m) <= b && d == 0) {
    }
    return 0;
}

