int main () {
    double  zls863Ck, b, c, iL6RXS, e, f, xhZJb6qmIx, ffZwOu27pnbP, n;
    scanf ("%lf%lf%lf%lf%lf", &zls863Ck, &b, &c, &iL6RXS, &e);
    ffZwOu27pnbP = (zls863Ck + b + c + iL6RXS) / 2;
    f = e * PI / (546 - 186);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    xhZJb6qmIx = sqrt (((ffZwOu27pnbP - zls863Ck) * (ffZwOu27pnbP - b) * (ffZwOu27pnbP - c) * (ffZwOu27pnbP - iL6RXS) - zls863Ck * b * c * iL6RXS * cos (f) * cos (f)));
    n = (ffZwOu27pnbP - zls863Ck) * (ffZwOu27pnbP - b) * (ffZwOu27pnbP - c) * (ffZwOu27pnbP - iL6RXS) - zls863Ck * b * c * iL6RXS * cos (f) * cos (f);
    if (n >= 0)
        printf ("%.4lf\n", xhZJb6qmIx);
    else
        printf ("Invalid input\n");
    return 0;
}

