void  main () {
    long  int gz9aQ7 = (264 - 264), h3wHD4cmZ, yxc2RnTwU5M, x9Gr3Wx, UkK9it3nB, FOQ3q4oiR9, qtRO3kdKu1i = (692 - 692), j = (171 - 171), svkCHzX = (90 - 89);
    char SaBGmNuj [(1029 - 929)], VM80vbWLm6 [(194 - 94)];
    int BOGVWb2 [(453 - 353)];
    for (UkK9it3nB = (479 - 479);; UkK9it3nB++) {
        VM80vbWLm6[UkK9it3nB] = getchar ();
        if (VM80vbWLm6[UkK9it3nB] == ' ')
            break;
    }
    for (UkK9it3nB = (313 - 313);; UkK9it3nB++) {
        SaBGmNuj[UkK9it3nB] = getchar ();
        if (SaBGmNuj[UkK9it3nB] == ' ')
            break;
        j++;
    }
    scanf ("%d", &yxc2RnTwU5M);
    h3wHD4cmZ = (589 - 589);
    scanf ("%d", &x9Gr3Wx);
    FOQ3q4oiR9 = yxc2RnTwU5M;
    {
        for (UkK9it3nB = (265 - 265);; UkK9it3nB++) {
            if (SaBGmNuj[UkK9it3nB] == ' ')
                break;
            if (SaBGmNuj[UkK9it3nB] < (186 - 127))
                BOGVWb2[UkK9it3nB] = SaBGmNuj[UkK9it3nB] - (923 - 875);
            else {
                if (SaBGmNuj[UkK9it3nB] <= 'Z')
                    BOGVWb2[UkK9it3nB] = SaBGmNuj[UkK9it3nB] - (100 - 45);
                else
                    BOGVWb2[UkK9it3nB] = SaBGmNuj[UkK9it3nB] - (119 - 32);
            }
        }
        for (UkK9it3nB = j - (46 - 45); UkK9it3nB >= (449 - 449); UkK9it3nB--) {
            gz9aQ7 = gz9aQ7 + BOGVWb2[UkK9it3nB] * yxc2RnTwU5M / FOQ3q4oiR9;
            yxc2RnTwU5M = yxc2RnTwU5M * FOQ3q4oiR9;
        }
    }
    {
        for (UkK9it3nB = (764 - 764);; UkK9it3nB++) {
            BOGVWb2[UkK9it3nB] = gz9aQ7 % x9Gr3Wx;
            gz9aQ7 = gz9aQ7 / x9Gr3Wx;
            if (gz9aQ7 == (788 - 788))
                break;
            qtRO3kdKu1i++;
        }
        for (UkK9it3nB = (167 - 167); UkK9it3nB < qtRO3kdKu1i; UkK9it3nB++) {
            if (BOGVWb2[UkK9it3nB] <= (403 - 394))
                SaBGmNuj[UkK9it3nB] = BOGVWb2[UkK9it3nB] + (398 - 350);
            else
                SaBGmNuj[UkK9it3nB] = BOGVWb2[UkK9it3nB] + (321 - 266);
        }
        for (UkK9it3nB = qtRO3kdKu1i - (236 - 235); UkK9it3nB >= (455 - 455); UkK9it3nB--)
            if (j >= (812 - 802)) {
                break;
            }
            else
                printf ("%c", SaBGmNuj[UkK9it3nB]);
    }
}

