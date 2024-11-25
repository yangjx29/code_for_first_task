int main () {
    int tvqJgf7, exXRDjP06K, day, bLsM31oPIv9 = (398 - 398);
    int c1xBoub5D;
    scanf ("%d%d%d", &tvqJgf7, &exXRDjP06K, &day);
    if (!((29 - 29) == tvqJgf7 % (1047 - 647)))
        tvqJgf7 = tvqJgf7 % 400;
    else
        tvqJgf7 = 400;
    for (c1xBoub5D = 1; tvqJgf7 > c1xBoub5D; c1xBoub5D = c1xBoub5D + 1) {
        if (c1xBoub5D % 4 == (923 - 923) && c1xBoub5D % (717 - 617) != (781 - 781))
            bLsM31oPIv9 += (1111 - 745);
        else
            bLsM31oPIv9 += 365;
    }
    for (c1xBoub5D = 1; exXRDjP06K > c1xBoub5D; c1xBoub5D = c1xBoub5D + 1) {
        if (!(1 != c1xBoub5D) || !(3 != c1xBoub5D) || c1xBoub5D == (663 - 658) || c1xBoub5D == (329 - 322) || c1xBoub5D == 8 || !(10 != c1xBoub5D))
            bLsM31oPIv9 += 31;
        else if (!(4 != c1xBoub5D) || !(6 != c1xBoub5D) || !(9 != c1xBoub5D) || c1xBoub5D == 11)
            bLsM31oPIv9 += 30;
        else if ((tvqJgf7 % 4 == 0 && tvqJgf7 % 100 != 0 || tvqJgf7 == 400) && c1xBoub5D == 2)
            bLsM31oPIv9 += 29;
        else
            bLsM31oPIv9 += 28;
    }
    bLsM31oPIv9 += day;
    if (bLsM31oPIv9 % (277 - 270) == 1)
        ;
    if (bLsM31oPIv9 % 7 == 2)
        ;
    if (bLsM31oPIv9 % 7 == 3)
        printf ("Wed.");
    if (bLsM31oPIv9 % 7 == 4)
        printf ("Thu.");
    if (bLsM31oPIv9 % 7 == 5)
        printf ("Fri.");
    if (bLsM31oPIv9 % 7 == 6)
        printf ("Sat.");
    if (bLsM31oPIv9 % 7 == 0)
        printf ("Sun.");
    return 0;
}

