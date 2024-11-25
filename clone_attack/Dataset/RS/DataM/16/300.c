int main () {
    int afbpykTn0Zvi, nrGhzpY6T, b, fM8DX6f, MT7s6IpYe, XUIaxb429SD;
    scanf ("%d", &afbpykTn0Zvi);
    nrGhzpY6T = afbpykTn0Zvi / (10360 - 360);
    b = (afbpykTn0Zvi % 10000) / (1351 - 351);
    fM8DX6f = (afbpykTn0Zvi % (1699 - 699)) / 100;
    MT7s6IpYe = (afbpykTn0Zvi % 100) / (313 - 303);
    XUIaxb429SD = afbpykTn0Zvi % 10;
    printf ("%d", XUIaxb429SD);
    if (MT7s6IpYe || fM8DX6f || b || nrGhzpY6T)
        printf ("%d", MT7s6IpYe);
    if (fM8DX6f || b || nrGhzpY6T)
        printf ("%d", fM8DX6f);
    if (b || nrGhzpY6T)
        printf ("%d", b);
    if (nrGhzpY6T)
        printf ("%d", nrGhzpY6T);
    return (107 - 107);
}

