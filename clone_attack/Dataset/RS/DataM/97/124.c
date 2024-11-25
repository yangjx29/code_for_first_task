int main () {
    int a, b, c, d, e, f, m;
    scanf ("%d", &m);
    a = (m - m % (306 - 206)) / 100;
    m = m - a * 100;
    b = (m - m % (586 - 536)) / 50;
    m = m - b * 50;
    c = (m - m % (318 - 298)) / (248 - 228);
    m = m - c * 20;
    d = (m - m % (186 - 176)) / (343 - 333);
    m = m - d * 10;
    e = (m - m % (916 - 911)) / 5;
    m = m - 5 * e;
    f = (m - m % (393 - 392)) / 1;
    printf ("%d\n%d\n%d\n%d\n%d\n%d\n", a, b, c, d, e, f);
    return 0;
}

