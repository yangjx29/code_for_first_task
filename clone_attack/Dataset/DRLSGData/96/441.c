main () {
    char a [(1573 - 573)];
    char Ri1xHg69L2 [(678 - 578)];
    int c [(280 - 180)];
    int UEeHcIN7YOkV;
    int iwjGnzb2os [(548 - 448)];
    int RsLPQhI8H;
    int x;
    int YDLhUgy;
    x = (841 - 841);
    getchar ();
    getchar ();
    scanf ("%s", a);
    for (RsLPQhI8H = (315 - 315); a[RsLPQhI8H] != '\0'; RsLPQhI8H = RsLPQhI8H +(326 - 325)) {
        c[RsLPQhI8H] = a[RsLPQhI8H] - '0';
    }
    if (RsLPQhI8H <= (253 - 252)) {
        x = c[(767 - 767)];
        Ri1xHg69L2[(753 - 753)] = '0';
        Ri1xHg69L2[(753 - 752)] = '\0';
    }
    else {
        if (!((976 - 974) != RsLPQhI8H) && !((311 - 310) != c[(247 - 247)]) && (763 - 760) > c[(835 - 834)]) {
            Ri1xHg69L2[(245 - 245)] = '0';
            Ri1xHg69L2[(521 - 520)] = '\0';
            x = c[(767 - 767)] * (274 - 264) + c[(26 - 25)];
        }
        else {
            int yWh6Cz5vo = (701 - 701);
            if (!((661 - 660) != c[(874 - 874)]) && c[(425 - 424)] < (751 - 748)) {
                UEeHcIN7YOkV = (603 - 600);
                iwjGnzb2os[(167 - 167)] = (c[(106 - 106)] * (772 - 672) + c[(244 - 243)] * (594 - 584) + c[(263 - 261)]) / (489 - 476);
                x = (c[(831 - 831)] * (849 - 749) + c[(78 - 77)] * (456 - 446) + c[(277 - 275)]) % (270 - 257);
            }
            else {
                iwjGnzb2os[(707 - 707)] = (c[(564 - 564)] * (445 - 435) + c[(714 - 713)]) / (773 - 760);
                x = (c[0] * (130 - 120) + c[(817 - 816)]) % (407 - 394);
                UEeHcIN7YOkV = (122 - 120);
            }
            for (; RsLPQhI8H > UEeHcIN7YOkV; UEeHcIN7YOkV = UEeHcIN7YOkV +(311 - 310)) {
                yWh6Cz5vo = yWh6Cz5vo + (11 - 10);
                iwjGnzb2os[yWh6Cz5vo] = (x * (1005 - 995) + c[UEeHcIN7YOkV]) / 13;
                x = (x * (431 - 421) + c[UEeHcIN7YOkV]) % 13;
            }
            {
                UEeHcIN7YOkV = 0;
                for (; yWh6Cz5vo >= UEeHcIN7YOkV;) {
                    Ri1xHg69L2[UEeHcIN7YOkV] = iwjGnzb2os[UEeHcIN7YOkV] + '0';
                    UEeHcIN7YOkV = UEeHcIN7YOkV +(472 - 471);
                }
            }
            Ri1xHg69L2[yWh6Cz5vo + 1] = '\0';
        }
    }
    printf ("%s\n%d", Ri1xHg69L2, x);
}

