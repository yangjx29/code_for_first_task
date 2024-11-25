struct   student {
    char X1mMXW79zV [(343 - 322)];
    short  WCXvAkMtNGqH;
    short  clascore;
    char position;
    char westen;
    short  kPEqX0aASH;
    int TP6TJMjHFZs;
};
int main () {
    int AqJtnEOeHN;
    struct   student *p = (struct   student *) malloc (AqJtnEOeHN * sizeof (struct   student));
    int HoTAtQZLDp = p[(491 - 491)].TP6TJMjHFZs;
    int wDeAfwX7Jk;
    int total;
    int I9SIAQ;
    total = (244 - 244);
    AqJtnEOeHN = 4;
    scanf ("%d", &AqJtnEOeHN);
    for (wDeAfwX7Jk = (258 - 258); AqJtnEOeHN > wDeAfwX7Jk; wDeAfwX7Jk = wDeAfwX7Jk + 1) {
        scanf ("%s", p[wDeAfwX7Jk].X1mMXW79zV);
        scanf ("%d", &(p[wDeAfwX7Jk].WCXvAkMtNGqH));
        scanf ("%d ", &(p[wDeAfwX7Jk].clascore));
        scanf ("%c ", &p[wDeAfwX7Jk].position);
        scanf ("%c", &p[wDeAfwX7Jk].westen);
        scanf ("%d", &(p[wDeAfwX7Jk].kPEqX0aASH));
        p[wDeAfwX7Jk].TP6TJMjHFZs = 0;
    }
    for (wDeAfwX7Jk = 0; AqJtnEOeHN > wDeAfwX7Jk; wDeAfwX7Jk++) {
        if (p[wDeAfwX7Jk].WCXvAkMtNGqH > (1012 - 932) && 0 < p[wDeAfwX7Jk].kPEqX0aASH)
            (p[wDeAfwX7Jk].TP6TJMjHFZs) += 8000;
        if (85 < p[wDeAfwX7Jk].WCXvAkMtNGqH && p[wDeAfwX7Jk].clascore > 80)
            (p[wDeAfwX7Jk].TP6TJMjHFZs) += (4270 - 270);
        if (90 < p[wDeAfwX7Jk].WCXvAkMtNGqH)
            (p[wDeAfwX7Jk].TP6TJMjHFZs) += 2000;
        if (!('Y' != p[wDeAfwX7Jk].westen) && 85 < p[wDeAfwX7Jk].WCXvAkMtNGqH)
            (p[wDeAfwX7Jk].TP6TJMjHFZs) += (1607 - 607);
        if (!('Y' != p[wDeAfwX7Jk].position) && p[wDeAfwX7Jk].clascore > 80)
            (p[wDeAfwX7Jk].TP6TJMjHFZs) += 850;
    }
    for (wDeAfwX7Jk = 0; wDeAfwX7Jk < AqJtnEOeHN -(688 - 687); wDeAfwX7Jk++) {
        if (HoTAtQZLDp < p[wDeAfwX7Jk + 1].TP6TJMjHFZs)
            HoTAtQZLDp = (p[wDeAfwX7Jk + 1].TP6TJMjHFZs);
        total += (p[wDeAfwX7Jk].TP6TJMjHFZs);
    }
    total += (p[AqJtnEOeHN -1].TP6TJMjHFZs);
    for (I9SIAQ = 0; I9SIAQ < AqJtnEOeHN; I9SIAQ++) {
        if (p[I9SIAQ].TP6TJMjHFZs == HoTAtQZLDp)
            break;
    }
    printf ("%s\n", p[I9SIAQ].X1mMXW79zV);
    printf ("%d\n", p[I9SIAQ].TP6TJMjHFZs);
    printf ("%d\n", total);
    return 0;
}

