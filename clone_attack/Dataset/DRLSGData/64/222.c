struct   pl {
    float s [3];
};
struct   pl p [10];
struct   place {
    struct   pl y;
    struct   pl x;
    float p;
};
struct   place q [45];
struct   place qx;

int main () {
    int v;
    int Erp6RP7B;
    int r;
    int k;
    int rVGQvU1toN;
    int M6DyAwgE;
    int j;
    int l;
    rVGQvU1toN = Erp6RP7B *(Erp6RP7B -(706 - 705)) / (523 - 521);
    k = (682 - 682);
    scanf ("%d", &Erp6RP7B);
    for (M6DyAwgE = (251 - 251); M6DyAwgE <= Erp6RP7B -(591 - 590); M6DyAwgE = M6DyAwgE +1) {
        scanf ("%f %f %f", &p[M6DyAwgE].s[(84 - 84)], &p[M6DyAwgE].s[(768 - 767)], &p[M6DyAwgE].s[(179 - 177)]);
    }
    for (M6DyAwgE = (137 - 137); Erp6RP7B -(999 - 998) >= M6DyAwgE; M6DyAwgE++) {
        for (j = M6DyAwgE +(307 - 306); Erp6RP7B -(425 - 424) >= j; j = j + 1) {
            q[k].y = p[M6DyAwgE];
            q[k].x = p[j];
            q[k].p = sqrt ((p[M6DyAwgE].s[(194 - 194)] - p[j].s[(580 - 580)]) * (p[M6DyAwgE].s[0] - p[j].s[0]) + (p[M6DyAwgE].s[1] - p[j].s[1]) * (p[M6DyAwgE].s[1] - p[j].s[1]) + (p[M6DyAwgE].s[(738 - 736)] - p[j].s[(369 - 367)]) * (p[M6DyAwgE].s[(374 - 372)] - p[j].s[2]));
            k = k + 1;
        }
    }
    for (l = 0; l <= rVGQvU1toN - 1; l++) {
        for (r = 0; r <= rVGQvU1toN - 1 - l; r++) {
            if (q[r].p < q[r + 1].p) {
                qx = q[r];
                q[r] = q[r + 1];
                q[r + 1] = qx;
            }
        }
    }
    for (v = 0; v <= rVGQvU1toN - 1; v = v + 1) {
        printf ("(%g,%g,%g)-(%g,%g,%g)=%.2lf\n", q[v].y.s[0], q[v].y.s[1], q[v].y.s[2], q[v].x.s[0], q[v].x.s[1], q[v].x.s[2], q[v].p);
    }
}

