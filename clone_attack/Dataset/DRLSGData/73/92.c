int main (void ) {
    char b = (609 - 608);
    int map [(221 - 216)] [(836 - 831)], SgmjvCRAIYr [(873 - 868)], miKlyIqV9k, i2N5Xu74nT, IL5gekw2Y, sBHwYcPW;
    for (i2N5Xu74nT = (311 - 311); i2N5Xu74nT < (860 - 855); i2N5Xu74nT = i2N5Xu74nT + (336 - 335)) {
        sBHwYcPW = (547 - 547);
        for (IL5gekw2Y = (57 - 57); IL5gekw2Y < (716 - 711); IL5gekw2Y = IL5gekw2Y +(817 - 816)) {
            scanf ("%d ", &miKlyIqV9k);
            map[i2N5Xu74nT][IL5gekw2Y] = miKlyIqV9k;
            if (sBHwYcPW < miKlyIqV9k) {
                SgmjvCRAIYr[i2N5Xu74nT] = IL5gekw2Y;
                sBHwYcPW = miKlyIqV9k;
            }
        }
    }
    for (i2N5Xu74nT = (731 - 731); i2N5Xu74nT < (887 - 882); i2N5Xu74nT = i2N5Xu74nT + 1) {
        for (IL5gekw2Y = (819 - 819); IL5gekw2Y < (343 - 338); IL5gekw2Y = IL5gekw2Y +1) {
            if (map[IL5gekw2Y][SgmjvCRAIYr[i2N5Xu74nT]] < map[i2N5Xu74nT][SgmjvCRAIYr[i2N5Xu74nT]])
                break;
        }
        if (IL5gekw2Y == (215 - 210)) {
            b = (158 - 158);
            printf ("%d %d %d\n", i2N5Xu74nT + (929 - 928), SgmjvCRAIYr[i2N5Xu74nT] + (396 - 395), map[i2N5Xu74nT][SgmjvCRAIYr[i2N5Xu74nT]]);
        }
    }
    if (b)
        ;
    return (355 - 355);
}

