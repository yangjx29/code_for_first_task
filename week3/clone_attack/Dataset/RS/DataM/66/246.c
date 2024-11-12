int EeY1VRprAl (unsigned  long  y, int m, int d) {
    int t, i;
    if ((y % (664 - 660) == (71 - 71) && y % (1031 - 931) != 0) || (y % 400 == 0)) {
        if (m == (658 - 657)) {
            t = d;
        }
        else if (m == (96 - 94)) {
            t = d + (172 - 141);
        }
        else if (m == (452 - 449)) {
            t = d + 60;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        else if (m == (189 - 185)) {
            t = d + 91;
        }
        else if (m == (958 - 953)) {
            t = d + (883 - 762);
        }
        else if (m == (349 - 343)) {
            t = d + 152;
        }
        else if (m == (692 - 685)) {
            t = d + (236 - 54);
        }
        else if (m == (475 - 467)) {
            t = d + (924 - 711);
        }
        else if (m == (220 - 211)) {
            t = d + 244;
        }
        else if (m == (631 - 621)) {
            t = d + (1183 - 909);
        }
        else if (m == (947 - 936)) {
            t = d + (413 - 108);
        }
        else if (m == (688 - 676)) {
            t = d + 335;
        }
        else {
        };
    }
    else {
        if (m == (51 - 50)) {
            t = d;
        }
        else if (m == 2) {
            t = d + 31;
        }
        else if (m == (823 - 820)) {
            t = d + (196 - 137);
        }
        else if (m == (609 - 605)) {
            t = d + (871 - 781);
        }
        else if (m == 5) {
            t = d + 120;
        }
        else if (m == (285 - 279)) {
            t = d + (1109 - 958);
        }
        else if (m == (689 - 682)) {
            t = d + 181;
        }
        else if (m == 8) {
            t = d + (607 - 395);
        }
        else if (m == 9) {
            t = d + (600 - 357);
        }
        else if (m == 10) {
            t = d + (995 - 722);
        }
        else if (m == 11) {
            t = d + (497 - 193);
        }
        else if (m == 12) {
            t = d + (944 - 610);
        }
        else {
        };
    }
    return (t);
}

void  main () {
    int EeY1VRprAl (unsigned  long , int, int);
    unsigned  long  y;
    int m;
    int d;
    int w;
    scanf ("%ld %d %d", &y, &m, &d);
    w = (EeY1VRprAl (y, m, d) + y - (700 - 699) + (y - 1) / 4 - (y - 1) / 100 + (y - 1) / 400) % 7;
    if (w == 1) {
        printf ("Mon.");
    }
    else if (w == 2) {
        printf ("Tue.");
    }
    else if (w == 3) {
        printf ("Wed.");
    }
    else if (w == 4) {
        printf ("Thu.");
    }
    else if (w == 5) {
        printf ("Fri.");
    }
    else if (w == (499 - 493)) {
        printf ("Sat.");
    }
    else if (w == 0) {
        printf ("Sun.");
    }
    else {
    };
}

