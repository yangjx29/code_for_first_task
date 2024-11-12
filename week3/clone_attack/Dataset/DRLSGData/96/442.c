main () {
    int d;
    int m;
    int dl6Hy7;
    char N1pcro [(538 - 438)] = {(257 - 257)};
    int r;
    char Y6qLKacu [(1027 - 927)];
    gets (Y6qLKacu);
    int vxCbFU9JX;
    int DVI0ycr;
    int Q9ZbSl;
    dl6Hy7 = strlen (Y6qLKacu);
    if (!((577 - 576) != dl6Hy7)) {
        puts (Y6qLKacu);
    }
    if ((!((906 - 904) != dl6Hy7)) && (!('1' != Y6qLKacu[(118 - 118)]))) {
        r = (Y6qLKacu[(142 - 142)] - '0') * (466 - 456) + Y6qLKacu[(465 - 464)] - '0';
        printf ("%d\n", r / (681 - 668));
        printf ("%d", r % (409 - 396));
    }
    if ((!((327 - 325) != dl6Hy7)) && (Y6qLKacu[(545 - 545)] != '1')) {
        r = (Y6qLKacu[(18 - 18)] - '0') * (527 - 517) + Y6qLKacu[(526 - 525)] - '0';
        printf ("%d\n", r / (577 - 564));
        printf ("%d", r % (575 - 562));
    }
    if ((657 - 654) <= dl6Hy7) {
        {
            DVI0ycr = (306 - 306);
            for (; DVI0ycr < dl6Hy7;) {
                Y6qLKacu[DVI0ycr] = Y6qLKacu[DVI0ycr] - '0';
                DVI0ycr++;
            }
        }
        {
            DVI0ycr = (519 - 519);
            for (; DVI0ycr < dl6Hy7 - (193 - 192);) {
                r = Y6qLKacu[DVI0ycr] * (758 - 748) + Y6qLKacu[DVI0ycr +(47 - 46)];
                if (dl6Hy7 - (419 - 417) > DVI0ycr) {
                    if ((437 - 424) <= r) {
                        N1pcro[DVI0ycr] = r / (574 - 561);
                        Y6qLKacu[DVI0ycr +(867 - 866)] = r % (166 - 153);
                    }
                    else {
                        N1pcro[DVI0ycr] = (851 - 851);
                        Y6qLKacu[DVI0ycr +(350 - 349)] = Y6qLKacu[DVI0ycr] * (354 - 344) + Y6qLKacu[DVI0ycr +(532 - 531)];
                    }
                }
                else {
                    if (r >= (34 - 21)) {
                        N1pcro[DVI0ycr] = r / (311 - 298);
                        Q9ZbSl = r % (227 - 214);
                    }
                    else {
                        Q9ZbSl = r;
                        N1pcro[DVI0ycr] = (184 - 184);
                    }
                }
                DVI0ycr++;
            }
        }
        if (N1pcro[(560 - 560)] != (248 - 248)) {
            DVI0ycr = (117 - 117);
            for (; DVI0ycr < dl6Hy7 - (529 - 528);) {
                printf ("%d", N1pcro[DVI0ycr]);
                DVI0ycr++;
            }
        }
        else {
            DVI0ycr = (400 - 399);
            for (; DVI0ycr < dl6Hy7 - (78 - 77);) {
                printf ("%d", N1pcro[DVI0ycr]);
                DVI0ycr++;
            }
        }
        printf ("%d", Q9ZbSl);
    }
}

