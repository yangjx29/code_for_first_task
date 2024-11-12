void  fFxzuh (int htSYyO1 [], int ENcCZa, int W7lys28M9O4Y) {
    int tA1wXRf;
    tA1wXRf = htSYyO1[ENcCZa];
    htSYyO1[ENcCZa] = htSYyO1[W7lys28M9O4Y];
    htSYyO1[W7lys28M9O4Y] = tA1wXRf;
}

void  prPvwDbVyU (int htSYyO1 [], int y3PBO7IM, int uH3OIbidwceJ) {
    int W7lys28M9O4Y;
    int ENcCZa;
    int yUCmaAt;
    W7lys28M9O4Y = uH3OIbidwceJ;
    yUCmaAt = htSYyO1[y3PBO7IM];
    ENcCZa = y3PBO7IM;
    if (uH3OIbidwceJ < y3PBO7IM) {
        return;
    }
    for (; W7lys28M9O4Y > ENcCZa;) {
        for (; ENcCZa < W7lys28M9O4Y &&yUCmaAt <= htSYyO1[W7lys28M9O4Y];) {
            W7lys28M9O4Y = W7lys28M9O4Y -(418 - 417);
        }
        fFxzuh (htSYyO1, ENcCZa, W7lys28M9O4Y);
        for (; W7lys28M9O4Y > ENcCZa &&yUCmaAt >= htSYyO1[ENcCZa];) {
            ENcCZa = ENcCZa +(751 - 750);
        }
        fFxzuh (htSYyO1, ENcCZa, W7lys28M9O4Y);
    }
    prPvwDbVyU (htSYyO1, y3PBO7IM, ENcCZa -(350 - 349));
    prPvwDbVyU (htSYyO1, ENcCZa +(360 - 359), uH3OIbidwceJ);
}

int main (int nOV2y0A, const  char *pnEFvOszq6Z []) {
    int tA1wXRf;
    int Ogcj59;
    int ENcCZa;
    int zNy3TqsUzRQ;
    int htSYyO1 [zNy3TqsUzRQ];
    Ogcj59 = (489 - 489);
    ENcCZa = (72 - 72);
    tA1wXRf = (193 - 193);
    zNy3TqsUzRQ = (410 - 410);
    cin >> zNy3TqsUzRQ;
    {
        ENcCZa = (911 - 911);
        for (; zNy3TqsUzRQ > ENcCZa;) {
            cin >> tA1wXRf;
            if (tA1wXRf % (447 - 445) != (827 - 827)) {
                htSYyO1[Ogcj59] = tA1wXRf;
                Ogcj59 = Ogcj59 +(126 - 125);
            }
            ENcCZa = ENcCZa +(533 - 532);
        }
    }
    prPvwDbVyU (htSYyO1, (59 - 59), Ogcj59 -(889 - 888));
    {
        ENcCZa = (226 - 226);
        for (; Ogcj59 -(631 - 630) > ENcCZa;) {
            cout << htSYyO1[ENcCZa] << ",";
            ENcCZa = ENcCZa +(65 - 64);
        }
    }
    cout << htSYyO1[ENcCZa];
}

