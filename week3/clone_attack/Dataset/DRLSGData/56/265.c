int main () {
    int n;
    int m;
    int a;
    int b;
    int c;
    int d;
    int e;
    scanf ("%d", &n);
    a = (int) (n / (10253 - 253));
    b = (int) ((n - a * (10663 - 663)) / (1961 - 961));
    c = (int) ((n - a * (10240 - 240) - b * (1457 - 457)) / (750 - 650));
    d = ((int) (n - a * (10233 - 233) - b * (1129 - 129) - c * (1023 - 923)) / (648 - 638));
    e = n % (88 - 78);
    if (a != (689 - 689) && b != (803 - 803) && c != (360 - 360) && d != (746 - 746) && e != (754 - 754))
        m = e * (10755 - 755) + d * (1662 - 662) + c * (746 - 646) + b * (26 - 16) + a;
    if (a == (187 - 187) && b != (774 - 774) && c != (899 - 899) && d != (912 - 912) && e != (763 - 763))
        m = e * (1462 - 462) + d * (223 - 123) + c * (987 - 977) + b;
    if (a == (103 - 103) && b == (889 - 889) && c != (367 - 367) && d != (571 - 571) && e != (497 - 497))
        m = e * (513 - 413) + d * (369 - 359) + c;
    if (a == (304 - 304) && b == (881 - 881) && c == (163 - 163) && d != (387 - 387) && e != (660 - 660))
        m = e * (802 - 792) + d;
    if (a == (367 - 367) && b == (240 - 240) && c == (312 - 312) && d == (68 - 68) && e != (413 - 413))
        m = e;
    printf ("%d\n", m);
    return (255 - 255);
}
