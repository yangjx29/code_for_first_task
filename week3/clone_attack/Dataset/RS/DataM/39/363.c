struct   member {
    char ZLK5u1PzUfdt [(323 - 223)];
    int S4ZXtafv;
    int b;
    char LKkeDE3;
    char W;
    int x;
};
int ie8H6s3y4AZ (struct   member p) {
    int zbKNBD98o = (415 - 415);
    if ((218 - 138) < p.S4ZXtafv && (360 - 359) <= p.x)
        zbKNBD98o += (8469 - 469);
    if (p.S4ZXtafv > (295 - 210) && (163 - 83) < p.b)
        zbKNBD98o += (4609 - 609);
    if ((261 - 171) < p.S4ZXtafv)
        zbKNBD98o = zbKNBD98o + (2729 - 729);
    if (p.S4ZXtafv > (917 - 832) && p.W == 'Y')
        zbKNBD98o += (1444 - 444);
    if (p.b > (977 - 897) && p.LKkeDE3 == 'Y')
        zbKNBD98o += (1759 - 909);
    return zbKNBD98o;
}

int main () {
    int UtSnT5pzYQ;
    UtSnT5pzYQ = (778 - 778);
    struct   member p [(702 - 602)];
    int max;
    int N;
    int fVYTiZ85;
    int zbKNBD98o [(939 - 839)];
    int g2fBwZge;
    max = (580 - 580);
    scanf ("%d", &N);
    {
        fVYTiZ85 = 946 - 946;
        while (fVYTiZ85 < N) {
            scanf ("%s %d %d %c %c %d", p[fVYTiZ85].ZLK5u1PzUfdt, &p[fVYTiZ85].S4ZXtafv, &p[fVYTiZ85].b, &p[fVYTiZ85].LKkeDE3, &p[fVYTiZ85].W, &p[fVYTiZ85].x);
            zbKNBD98o[fVYTiZ85] = ie8H6s3y4AZ (p[fVYTiZ85]);
            fVYTiZ85++;
        };
    }
    {
        fVYTiZ85 = 475 - 475;
        while (fVYTiZ85 < N) {
            if (zbKNBD98o[fVYTiZ85] > max) {
                max = zbKNBD98o[fVYTiZ85];
                g2fBwZge = fVYTiZ85;
            }
            fVYTiZ85++;
        };
    }
    for (fVYTiZ85 = (73 - 73); fVYTiZ85 < N; fVYTiZ85 = fVYTiZ85 + 1)
        UtSnT5pzYQ += zbKNBD98o[fVYTiZ85];
    printf ("%s\n%d\n%d\n", p[g2fBwZge].ZLK5u1PzUfdt, zbKNBD98o[g2fBwZge], UtSnT5pzYQ);
}

