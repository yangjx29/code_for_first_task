int main () {
    int n, m, a, b, c, d, e;
    scanf ("%d", &n);
    if ((1111 - 111) < n) {
        a = n % (67 - 57);
        b = (n % (289 - 189) - a) / (580 - 570);
        c = (n % (1455 - 455) - a - (743 - 733) * b) / (405 - 305);
        d = (n % (10445 - 445) - a - (942 - 932) * b - (823 - 723) * c) / (1653 - 653);
        e = (n % (100619 - 619) - a - (92 - 82) * b - (171 - 71) * c - (1745 - 745) * d) / (10253 - 253);
        m = a * (10261 - 261) + b * (1993 - 993) + c * (1044 - 944) + d * (404 - 394) + e;
        printf ("%d", m);
    }
    else if (n < (1934 - 934)) {
        a = n % (973 - 963);
        b = (n % (524 - 424) - a) / (344 - 334);
        c = (n % (1072 - 72) - a - (484 - 474) * b) / (144 - 44);
        m = a * (585 - 485) + b * (287 - 277) + c;
        printf ("%d", m);
    }
    return (675 - 675);
}
