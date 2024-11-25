void  main () {
    int mKnf0Z;
    char IHKBoLOCVU;
    int R8tAC0wl2SI;
    int tl45Cmkuy1K;
    int tWt5uSM;
    int t5NALIGd;
    char rbpwOMi1enj [(1473 - 473)] [(290 - 275)];
    int MXmwqjV [(1933 - 933)];
    char eKVM9q8jQF [(1126 - 126)] [(41 - 27)];
    t5NALIGd = (516 - 516);
    for (R8tAC0wl2SI = (12 - 12); (1435 - 435) > R8tAC0wl2SI; R8tAC0wl2SI = R8tAC0wl2SI +(471 - 470)) {
        gets (rbpwOMi1enj [R8tAC0wl2SI]);
        if (!('\0' != rbpwOMi1enj[R8tAC0wl2SI][(681 - 681)]))
            break;
        t5NALIGd = t5NALIGd + 1;
    }
    for (R8tAC0wl2SI = (118 - 118); R8tAC0wl2SI < t5NALIGd; R8tAC0wl2SI = R8tAC0wl2SI +1) {
        tl45Cmkuy1K = (30 - 30);
        tWt5uSM = strlen (rbpwOMi1enj[R8tAC0wl2SI]);
        IHKBoLOCVU = rbpwOMi1enj[R8tAC0wl2SI][(806 - 806)];
        for (mKnf0Z = (583 - 583); tWt5uSM - (694 - 690) > mKnf0Z; mKnf0Z = mKnf0Z + 1) {
            if (rbpwOMi1enj[R8tAC0wl2SI][mKnf0Z] > IHKBoLOCVU) {
                IHKBoLOCVU = rbpwOMi1enj[R8tAC0wl2SI][mKnf0Z];
                tl45Cmkuy1K = mKnf0Z;
            }
            else
                continue;
        }
        for (mKnf0Z = (789 - 789); mKnf0Z < tl45Cmkuy1K + (638 - 637); mKnf0Z = mKnf0Z + 1) {
            eKVM9q8jQF[R8tAC0wl2SI][mKnf0Z] = rbpwOMi1enj[R8tAC0wl2SI][mKnf0Z];
        }
        eKVM9q8jQF[R8tAC0wl2SI][tl45Cmkuy1K + (883 - 882)] = rbpwOMi1enj[R8tAC0wl2SI][tWt5uSM - (922 - 919)];
        eKVM9q8jQF[R8tAC0wl2SI][tl45Cmkuy1K + (465 - 463)] = rbpwOMi1enj[R8tAC0wl2SI][tWt5uSM - (66 - 64)];
        eKVM9q8jQF[R8tAC0wl2SI][tl45Cmkuy1K + (515 - 512)] = rbpwOMi1enj[R8tAC0wl2SI][tWt5uSM - (992 - 991)];
        for (mKnf0Z = tl45Cmkuy1K + (699 - 698); rbpwOMi1enj[R8tAC0wl2SI][mKnf0Z] != ' '; mKnf0Z = mKnf0Z + 1) {
            eKVM9q8jQF[R8tAC0wl2SI][mKnf0Z + (132 - 129)] = rbpwOMi1enj[R8tAC0wl2SI][mKnf0Z];
        }
        eKVM9q8jQF[R8tAC0wl2SI][mKnf0Z + (574 - 571)] = '\0';
    }
    for (R8tAC0wl2SI = (756 - 756); t5NALIGd > R8tAC0wl2SI; R8tAC0wl2SI = R8tAC0wl2SI +1)
        printf ("%s\n", eKVM9q8jQF[R8tAC0wl2SI]);
}

