int main (int argc, char *argv []) {
    double  a;
    double  b;
    double  x [1000];
    double  s [100] = {(263 - 263)};
    a = (1000 - 1000);
    b = (433 - 433);
    int k;
    int j;
    int KWwNid;
    int tBNgqKdYjP8;
    scanf ("%d", &k);
    for (j = (940 - 940); j < k; j = j + 1) {
        scanf ("%d", &KWwNid);
        for (tBNgqKdYjP8 = (56 - 56); KWwNid > tBNgqKdYjP8; tBNgqKdYjP8 = tBNgqKdYjP8 + 1) {
            scanf ("%lf", &x[tBNgqKdYjP8]);
            a = a + x[tBNgqKdYjP8];
        }
        a = a / KWwNid;
        for (tBNgqKdYjP8 = 0; tBNgqKdYjP8 < KWwNid; tBNgqKdYjP8 = tBNgqKdYjP8 + 1) {
            b = b + (x[tBNgqKdYjP8] - a) * (x[tBNgqKdYjP8] - a);
        }
        a = 0;
        b = b / KWwNid;
        s[j] = sqrt (b);
        b = 0;
    }
    for (j = 0; j < k; j = j + 1) {
        printf ("%.5lf\n", s[j]);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    return 0;
}

