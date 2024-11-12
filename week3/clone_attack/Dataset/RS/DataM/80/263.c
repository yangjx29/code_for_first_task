struct   d {
    int y, G3YwCr8lHui, d;
};
long  days (struct   d wLdt1i, struct   d d2) {
    long  td = 0;
    int g61Nbk7QD50u;
    int kzjHMbS [2] [13] = {{(889 - 889), (957 - 926), 28, 31, (140 - 110), 31, 30, 31, 31, 30, 31, 30, 31}, {(230 - 230), 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};
    for (g61Nbk7QD50u = wLdt1i.y; g61Nbk7QD50u < d2.y; g61Nbk7QD50u = g61Nbk7QD50u + 1)
        td += leap (g61Nbk7QD50u) ? 366 : 365;
    for (g61Nbk7QD50u = 1; g61Nbk7QD50u < wLdt1i.G3YwCr8lHui; g61Nbk7QD50u = g61Nbk7QD50u + 1)
        td -= kzjHMbS[leap (wLdt1i.y)][g61Nbk7QD50u];
    td -= wLdt1i.d - 1;
    for (g61Nbk7QD50u = 1; g61Nbk7QD50u < d2.G3YwCr8lHui; g61Nbk7QD50u = g61Nbk7QD50u + 1)
        td += kzjHMbS[leap (d2.y)][g61Nbk7QD50u];
    td += d2.d - 1;
    return td;
}

int main () {
    long  td;
    struct   d wLdt1i, d2;
    scanf ("%d %d %d", &wLdt1i.y, &wLdt1i.G3YwCr8lHui, &wLdt1i.d);
    scanf ("%d %d %d", &d2.y, &d2.G3YwCr8lHui, &d2.d);
    td = days (wLdt1i, d2);
    printf ("%ld", td);
    return 0;
}

