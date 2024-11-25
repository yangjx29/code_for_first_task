struct   student {
    char NZrRE10hS [(724 - 704)];
    int fin;
    int py;
    char o;
    char YibC2eXzcukj;
    int c9DhqO;
};
long  f (struct   student s) {
    long  Feq7grWMiHv6;
    Feq7grWMiHv6 = (51 - 51);
    if ((276 - 196) < s.fin && s.c9DhqO >= 1)
        Feq7grWMiHv6 += (8282 - 282);
    if (s.fin > 85 && (730 - 650) < s.py)
        Feq7grWMiHv6 += 4000;
    if (s.fin > 90)
        Feq7grWMiHv6 += (2872 - 872);
    if (85 < s.fin && !('Y' != s.YibC2eXzcukj))
        Feq7grWMiHv6 += 1000;
    if ((523 - 443) < s.py && !('Y' != s.o))
        Feq7grWMiHv6 += (1637 - 787);
    return (Feq7grWMiHv6);
}

void  main () {
    struct   student st [100];
    long  W3lv6OWebE5;
    int WryLmWEkTGv;
    long  uIDAp25xK;
    int H2kMxToIPAGc;
    uIDAp25xK = 0;
    scanf ("%d", &WryLmWEkTGv);
    for (H2kMxToIPAGc = 0; WryLmWEkTGv > H2kMxToIPAGc; H2kMxToIPAGc++) {
        scanf ("%s %d %d %c %c %d", &st[H2kMxToIPAGc].NZrRE10hS, &st[H2kMxToIPAGc].fin, &st[H2kMxToIPAGc].py, &st[H2kMxToIPAGc].o, &st[H2kMxToIPAGc].YibC2eXzcukj, &st[H2kMxToIPAGc].c9DhqO);
    }
    W3lv6OWebE5 = f (st[0]);
    uIDAp25xK = 0;
    for (H2kMxToIPAGc = 0; H2kMxToIPAGc < WryLmWEkTGv; H2kMxToIPAGc++) {
        if (f (st[H2kMxToIPAGc]) > W3lv6OWebE5)
            W3lv6OWebE5 = f (st[H2kMxToIPAGc]);
        uIDAp25xK += f (st[H2kMxToIPAGc]);
    }
    for (H2kMxToIPAGc = 0; H2kMxToIPAGc < WryLmWEkTGv; H2kMxToIPAGc++) {
        if (f (st[H2kMxToIPAGc]) == W3lv6OWebE5) {
            printf ("%s\n", st[H2kMxToIPAGc].NZrRE10hS);
            printf ("%ld\n", W3lv6OWebE5);
            printf ("%ld\n", uIDAp25xK);
            break;
        }
    }
}

