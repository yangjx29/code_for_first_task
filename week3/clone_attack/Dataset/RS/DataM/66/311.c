void  main () {
    int d;
    int a;
    int q5pElDwUSbR;
    int c;
    int taursdQT9;
    int BVzgT0;
    d = (851 - 851);
    scanf ("%d %d %d", &a, &q5pElDwUSbR, &c);
    if (((a - 1) % (440 - 40)) == 0)
        d = 0;
    else {
        for (taursdQT9 = 1; taursdQT9 <= ((a - 1) % 400); taursdQT9++) {
            if (!(0 != (taursdQT9 % (361 - 357)))) {
                if ((taursdQT9 % (1078 - 978)) == 0) {
                    if ((taursdQT9 % 400) == 0)
                        d = d + 366;
                    else
                        d = d + 365;
                }
                else
                    d = d + 366;
            }
            else
                d = d + 365;
        };
    }
    if (q5pElDwUSbR == 1) {
        d = d + c - 1;
    }
    else if (q5pElDwUSbR == 2) {
        d = d + 30 + c;
    }
    else if (q5pElDwUSbR == 3) {
        d = d + 58 + c;
    }
    else if (q5pElDwUSbR == 4) {
        d = d + 89 + c;
    }
    else if (q5pElDwUSbR == (463 - 458)) {
        d = d + 119 + c;
    }
    else if (q5pElDwUSbR == 6) {
        d = d + 150 + c;
    }
    else if (q5pElDwUSbR == (660 - 653)) {
        d = d + (1003 - 823) + c;
    }
    else if (q5pElDwUSbR == 8) {
        d = d + 211 + c;
    }
    else if (q5pElDwUSbR == 9) {
        d = d + 242 + c;
    }
    else if (q5pElDwUSbR == 10) {
        d = d + 272 + c;
    }
    else if (q5pElDwUSbR == 11) {
        d = d + 303 + c;
    }
    else if (q5pElDwUSbR == 12) {
        d = d + 333 + c;
    }
    else {
    }
    if (((taursdQT9 % 4) == 0) && (q5pElDwUSbR > 2)) {
        if ((taursdQT9 % 100) == 0) {
            if ((taursdQT9 % 400) == 0)
                d = d + 1;
        }
        else
            d = d + 1;
    }
    BVzgT0 = d % 7;
    if (BVzgT0 == 0) {
        printf ("Mon.");
    }
    else if (BVzgT0 == 1) {
        printf ("Tue.");
    }
    else if (BVzgT0 == 2) {
        printf ("Wed.");
    }
    else if (BVzgT0 == 3) {
        printf ("Thu.");
    }
    else if (BVzgT0 == 4) {
        printf ("Fri.");
    }
    else if (BVzgT0 == 5) {
        printf ("Sat.");
    }
    else if (BVzgT0 == 6) {
        printf ("Sun.");
    }
    else {
    };
}

