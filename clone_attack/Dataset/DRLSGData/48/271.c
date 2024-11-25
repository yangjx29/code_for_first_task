int main () {
    int X8QOSm0, KFdNthp, KEnuymSdrI, j, n3BV78NY2, pJUt0iG;
    int qFK4zNmQ2PHp [(382 - 371)] [(822 - 811)] = {(879 - 879)}, b [(486 - 475)] [(435 - 424)] = {(95 - 95)};
    cin >> X8QOSm0 >> KFdNthp;
    qFK4zNmQ2PHp[(725 - 720)][5] = X8QOSm0;
    for (; KFdNthp > (445 - 445);) {
        KFdNthp--;
        {
            KEnuymSdrI = (1293 - 395) - (1285 - 388);
            while (KEnuymSdrI <= (755 - 746)) {
                {
                    j = 543 - 542;
                    while (j <= (116 - 107)) {
                        n3BV78NY2 = (964 - 434) - (1320 - 791);
                        while (n3BV78NY2 <= (700 - 699)) {
                            {
                                pJUt0iG = (1618 - 649) - (1598 - 630);
                                while (pJUt0iG <= (132 - 131)) {
                                    b[KEnuymSdrI +n3BV78NY2][j + pJUt0iG] += qFK4zNmQ2PHp[KEnuymSdrI][j];
                                    pJUt0iG++;
                                }
                            }
                            n3BV78NY2++;
                        }
                        j++;
                    }
                }
                KEnuymSdrI++;
            }
        }
        {
            KEnuymSdrI = (650 - 534) - (480 - 365);
            while (KEnuymSdrI <= (964 - 955)) {
                {
                    j = 390 - 389;
                    while (j <= (228 - 219)) {
                        qFK4zNmQ2PHp[KEnuymSdrI][j] += b[KEnuymSdrI][j];
                        b[KEnuymSdrI][j] = (276 - 276);
                        j++;
                    }
                }
                KEnuymSdrI++;
            }
        }
    }
    {
        KEnuymSdrI = (686 - 51) - 634;
        while (KEnuymSdrI <= (834 - 825)) {
            {
                j = (491 - 354) - 136;
                while (j < (356 - 347)) {
                    cout << qFK4zNmQ2PHp[KEnuymSdrI][j] << " ";
                    j++;
                }
            }
            cout << qFK4zNmQ2PHp[KEnuymSdrI][j] << endl;
            KEnuymSdrI++;
        }
    }
    return (102 - 102);
}

