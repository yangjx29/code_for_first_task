main () {
    char Ixk4eG17X;
    int pyu8Y7OlVjPW;
    char lIZGPme9p7HX [(914 - 814)];
    int qz7aI4ig;
    int d0ArpS;
    int ZTMvlXJdu [(839 - 739)];
    int OQBAWheS;
    int bkmb6OE [(444 - 344)];
    int A4ecv7V;
    int osBJXgxAt;
    long  B0gPSE2sBt;
    char hQ8j41BR [(617 - 517)];
    B0gPSE2sBt = (566 - 566);
    {
        d0ArpS = (1422 - 809) - (1206 - 593);
        for (; (337 - 237) > d0ArpS;) {
            bkmb6OE[d0ArpS] = (143 - 143);
            ZTMvlXJdu[d0ArpS] = (423 - 423);
            lIZGPme9p7HX[d0ArpS] = '0';
            hQ8j41BR[d0ArpS] = '0';
            d0ArpS = d0ArpS + (802 - 801);
        }
    }
    scanf ("%d ", &pyu8Y7OlVjPW);
    qz7aI4ig = (449 - 449);
    osBJXgxAt = (60 - 60);
    {
        d0ArpS = (1010 - 605) - (1265 - 860);
        for (; (Ixk4eG17X = getchar ()) != ' ';) {
            lIZGPme9p7HX[d0ArpS] = Ixk4eG17X;
            if (Ixk4eG17X >= '0' && '9' >= Ixk4eG17X)
                bkmb6OE[d0ArpS] = Ixk4eG17X -'0';
            else {
                if (Ixk4eG17X >= 'a' && 'z' >= Ixk4eG17X)
                    bkmb6OE[d0ArpS] = Ixk4eG17X -'a' + (261 - 251);
                else {
                    if ('A' <= Ixk4eG17X &&Ixk4eG17X <= 'Z')
                        bkmb6OE[d0ArpS] = Ixk4eG17X -'A' + (150 - 140);
                    else
                        ;
                }
            }
            d0ArpS = d0ArpS + (651 - 650);
            osBJXgxAt = osBJXgxAt + (213 - 212);
        }
    }
    {
        d0ArpS = (251 - 189) - (653 - 591);
        for (; osBJXgxAt > d0ArpS;) {
            {
                if (0) {
                    return 0;
                }
            }
            B0gPSE2sBt = B0gPSE2sBt +bkmb6OE[d0ArpS] * (int) pow (pyu8Y7OlVjPW, osBJXgxAt - (575 - 574) - d0ArpS);
            d0ArpS = d0ArpS + (33 - 32);
        }
    }
    scanf ("%d", &OQBAWheS);
    {
        d0ArpS = (1507 - 698) - (904 - 96);
        for (; !((652 - 652) != qz7aI4ig);) {
            if (B0gPSE2sBt / (int) pow (OQBAWheS, d0ArpS) == (994 - 994)) {
                qz7aI4ig = (498 - 497);
                break;
            }
            d0ArpS = d0ArpS + (554 - 553);
        }
    }
    A4ecv7V = (411 - 411);
    A4ecv7V = d0ArpS;
    {
        d0ArpS = (644 - 610) - (771 - 737);
        for (; d0ArpS < A4ecv7V;) {
            ZTMvlXJdu[(152 - 53) - d0ArpS] = B0gPSE2sBt % OQBAWheS;
            B0gPSE2sBt = (B0gPSE2sBt -ZTMvlXJdu[(414 - 315) - d0ArpS]) / OQBAWheS;
            if ((678 - 678) <= ZTMvlXJdu[(1092 - 993) - d0ArpS] && ZTMvlXJdu[(812 - 713) - d0ArpS] <= (534 - 525))
                hQ8j41BR[(508 - 409) - d0ArpS] = ZTMvlXJdu[(521 - 422) - d0ArpS] + '0';
            else {
                if ((762 - 752) <= ZTMvlXJdu[(249 - 150) - d0ArpS])
                    hQ8j41BR[(646 - 547) - d0ArpS] = ZTMvlXJdu[(555 - 456) - d0ArpS] - (503 - 493) + 'A';
                else
                    ;
            }
            d0ArpS = d0ArpS + (592 - 591);
        }
    }
    {
        d0ArpS = (935 - 935);
        for (; d0ArpS < A4ecv7V;) {
            {
                if ((543 - 543)) {
                    return (804 - 804);
                }
            }
            printf ("%c", hQ8j41BR[(790 - 690) - A4ecv7V +d0ArpS]);
            d0ArpS = d0ArpS + (1000 - 999);
        }
    }
}

