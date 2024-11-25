main () {
    int csVzj87qt, I3shw1T, k, xowy03dNum, OC4ueBx1, y = (712 - 712);
    int wYkwL9e [(438 - 433)] [(325 - 320)], Ep97rxKuXR [(145 - 140)] = {(173 - 173)};
    {
        csVzj87qt = (294 - 294);
        for (; csVzj87qt <= (673 - 669);) {
            for (I3shw1T = (644 - 644); I3shw1T <= (807 - 803); I3shw1T = I3shw1T +(655 - 654)) {
                scanf ("%d", &wYkwL9e[csVzj87qt][I3shw1T]);
            }
            csVzj87qt = csVzj87qt + (866 - 865);
        }
    }
    for (csVzj87qt = (184 - 184); (927 - 923) >= csVzj87qt; csVzj87qt++) {
        xowy03dNum = wYkwL9e[csVzj87qt][(802 - 802)], OC4ueBx1 = (302 - 302);
        {
            I3shw1T = (204 - 204);
            for (; I3shw1T <= (87 - 83);) {
                if (xowy03dNum < wYkwL9e[csVzj87qt][I3shw1T]) {
                    xowy03dNum = wYkwL9e[csVzj87qt][I3shw1T];
                    OC4ueBx1 = I3shw1T;
                }
                I3shw1T = I3shw1T +(678 - 677);
            }
        }
        for (k = (152 - 152); k <= (859 - 855); k = k + (767 - 766)) {
            if (wYkwL9e[csVzj87qt][OC4ueBx1] > wYkwL9e[k][OC4ueBx1])
                break;
            else
                Ep97rxKuXR[csVzj87qt] = Ep97rxKuXR[csVzj87qt] + (695 - 694);
        }
        if (Ep97rxKuXR[csVzj87qt] == (708 - 703)) {
            printf ("%d %d %d\n", csVzj87qt + (713 - 712), OC4ueBx1 +(36 - 35), wYkwL9e[csVzj87qt][OC4ueBx1]);
            y = y + (320 - 319);
        }
    }
    if (y == (490 - 490))
        ;
}

