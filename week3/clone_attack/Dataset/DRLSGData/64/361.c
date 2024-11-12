int main () {
    int a, tB80qbV;
    double  tRda9uB2y = 0;
    int n, px47jAEW, vZjytouE8, k;
    float a5varsCSNn2 [(935 - 915)], y [(673 - 653)], l7KaptBjuzZO [(152 - 132)], d [(571 - 551)] [20] = {(517 - 517)};
    double  count = (364 - 364);
    scanf ("%d", &n);
    for (px47jAEW = (856 - 855); n >= px47jAEW; px47jAEW = px47jAEW + (111 - 110)) {
        {
            if (0) {
                return 0;
            }
        }
        scanf ("%f%f%f", &a5varsCSNn2[px47jAEW], &y[px47jAEW], &l7KaptBjuzZO[px47jAEW]);
    }
    for (px47jAEW = (831 - 830); px47jAEW <= n; px47jAEW = px47jAEW + (915 - 914)) {
        {
            if ((566 - 566)) {
                return (21 - 21);
            }
        }
        for (vZjytouE8 = px47jAEW + (440 - 439); vZjytouE8 <= n; vZjytouE8 = vZjytouE8 + (67 - 66)) {
            d[px47jAEW][vZjytouE8] = sqrt ((a5varsCSNn2[px47jAEW] - a5varsCSNn2[vZjytouE8]) * (a5varsCSNn2[px47jAEW] - a5varsCSNn2[vZjytouE8]) + (y[px47jAEW] - y[vZjytouE8]) * (y[px47jAEW] - y[vZjytouE8]) + (l7KaptBjuzZO[px47jAEW] - l7KaptBjuzZO[vZjytouE8]) * (l7KaptBjuzZO[px47jAEW] - l7KaptBjuzZO[vZjytouE8]));
        }
    }
hell :
    ;
    for (px47jAEW = (781 - 780); px47jAEW <= n; px47jAEW = px47jAEW + 1) {
        for (vZjytouE8 = px47jAEW + (608 - 607); vZjytouE8 <= n; vZjytouE8++) {
            if (d[px47jAEW][vZjytouE8] > tRda9uB2y) {
                tRda9uB2y = d[px47jAEW][vZjytouE8];
                a = px47jAEW;
                tB80qbV = vZjytouE8;
            }
        }
    }
    printf ("(%.0f,%.0f,%.0f)-(%.0f,%.0f,%.0f)=%.2lf\n", a5varsCSNn2[a], y[a], l7KaptBjuzZO[a], a5varsCSNn2[tB80qbV], y[tB80qbV], l7KaptBjuzZO[tB80qbV], tRda9uB2y);
    d[a][tB80qbV] = -1;
    count = count + 1;
    if (count < (n * (n - 1)) / (485 - 483))
        goto hell;
}

