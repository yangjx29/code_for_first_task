int main (int argc, char *argv []) {
    int n [200], u19c3kmSXZ8L, j, k;
    double  ZXeUHCkhRAQ6;
    double  s;
    double  S;
    double  u8j7SBxqto [200] = {(784 - 784)};
    double  ARAaK0 [200] = {0};
    ZXeUHCkhRAQ6 = (366 - 366);
    s = 0;
    S = 0;
    scanf ("%d", &k);
    {
        j = 0;
        while (j < k) {
            scanf ("%d\n", &n[j]);
            s = 0;
            {
                u19c3kmSXZ8L = 0;
                while (u19c3kmSXZ8L < n[j]) {
                    scanf ("%lf", &u8j7SBxqto[u19c3kmSXZ8L]);
                    s = s + u8j7SBxqto[u19c3kmSXZ8L];
                    u19c3kmSXZ8L = u19c3kmSXZ8L + 1;
                };
            }
            S = 0;
            ZXeUHCkhRAQ6 = 0;
            ZXeUHCkhRAQ6 = s / n[j];
            {
                u19c3kmSXZ8L = 0;
                while (u19c3kmSXZ8L < n[j]) {
                    S = S +((u8j7SBxqto[u19c3kmSXZ8L] - ZXeUHCkhRAQ6) * (u8j7SBxqto[u19c3kmSXZ8L] - ZXeUHCkhRAQ6));
                    u19c3kmSXZ8L = u19c3kmSXZ8L + 1;
                    ARAaK0[j] = sqrt (S / n[j]);
                };
            }
            j = j + 1;
        };
    }
    for (j = 0; j < k; j = j + 1) {
        printf ("%.5lf\n", ARAaK0[j]);
    }
    return 0;
}

