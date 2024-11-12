int main () {
    int fPrZmqb;
    int cMKx0GYW;
    int b;
    int zPndy2J6;
    int d;
    int e;
    int f;
    cMKx0GYW = b = zPndy2J6 = d = e = f = 0;
    scanf ("%d", &fPrZmqb);
    cMKx0GYW = fPrZmqb / 100;
    b = (fPrZmqb - 100 * cMKx0GYW) / 50;
    zPndy2J6 = (fPrZmqb - 100 * cMKx0GYW - 50 * b) / 20;
    d = (fPrZmqb - 100 * cMKx0GYW - 50 * b - 20 * zPndy2J6) / 10;
    e = (fPrZmqb - 100 * cMKx0GYW - 50 * b - 20 * zPndy2J6 - 10 * d) / 5;
    f = (fPrZmqb - 100 * cMKx0GYW - 50 * b - 20 * zPndy2J6 - 10 * d - e * 5);
    printf ("%d\n%d\n%d\n%d\n%d\n%d", cMKx0GYW, b, zPndy2J6, d, e, f);
    return 0;
}

