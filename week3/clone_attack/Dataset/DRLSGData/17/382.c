int main () {
    int RcO8g6B [(822 - 721)];
    int brQ2Cgnq;
    int J1BOVDYPZtC6 [(160 - 59)];
    int r [101];
    int t1;
    int rT7n4ZEGkqh;
    int t2;
    char mm03CxrROHeM [(834 - 733)];
    int Eo9IpamC;
    int sqKrZCW;
    while (scanf ("%s", mm03CxrROHeM) != EOF) {
        puts (mm03CxrROHeM);
        t2 = (255 - 255);
        sqKrZCW = strlen (mm03CxrROHeM);
        for (Eo9IpamC = (518 - 518); sqKrZCW > Eo9IpamC; Eo9IpamC = Eo9IpamC +(268 - 267)) {
            if (!('(' != mm03CxrROHeM[Eo9IpamC])) {
                RcO8g6B[Eo9IpamC] = -(371 - 370);
            }
            else if (!(')' != mm03CxrROHeM[Eo9IpamC])) {
                RcO8g6B[Eo9IpamC] = (202 - 201);
            }
            else {
                RcO8g6B[Eo9IpamC] = (728 - 728);
            }
        }
        t1 = (495 - 495);
        {
            Eo9IpamC = 0;
            for (; sqKrZCW > Eo9IpamC;) {
                if (!(-(40 - 39) != RcO8g6B[Eo9IpamC])) {
                    J1BOVDYPZtC6[t1] = Eo9IpamC;
                    t1 = t1 + (351 - 350);
                }
                if (!((571 - 570) != RcO8g6B[Eo9IpamC])) {
                    r[t2] = Eo9IpamC;
                    t2 = t2 + (818 - 817);
                }
                Eo9IpamC = Eo9IpamC +1;
            }
        }
        {
            Eo9IpamC = t1 - 1;
            for (; Eo9IpamC >= 0;) {
                {
                    brQ2Cgnq = 0;
                    for (; t2 > brQ2Cgnq;) {
                        if (J1BOVDYPZtC6[Eo9IpamC] < r[brQ2Cgnq]) {
                            RcO8g6B[r[brQ2Cgnq]] = 0;
                            RcO8g6B[J1BOVDYPZtC6[Eo9IpamC]] = 0;
                            J1BOVDYPZtC6[Eo9IpamC] = 0;
                            r[brQ2Cgnq] = 0;
                            break;
                        }
                        brQ2Cgnq = brQ2Cgnq + 1;
                    }
                }
                Eo9IpamC = Eo9IpamC -1;
            }
        }
        for (Eo9IpamC = 0; Eo9IpamC < sqKrZCW; Eo9IpamC = Eo9IpamC +1) {
            if (!(-1 != RcO8g6B[Eo9IpamC])) {
            }
            else if (!(1 != RcO8g6B[Eo9IpamC])) {
                printf ("?");
            }
            else {
            }
        }
    }
    return 0;
}

