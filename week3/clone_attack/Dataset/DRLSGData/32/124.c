void  ysCkNYL38G5y (char yAr53phV1P2T [(113 - 13)], char t84n9F3LJZ [(491 - 391)]) {
    char AFTwvj6 [(486 - 386)];
    int VxZ09rjGlL2Q;
    int xSpbf3;
    int AyzNZIne;
    int AodWriPgC;
    VxZ09rjGlL2Q = strlen (yAr53phV1P2T);
    AodWriPgC = strlen (t84n9F3LJZ);
    {
        xSpbf3 = (1470 - 868) - (976 - 375);
        for (; VxZ09rjGlL2Q -AodWriPgC-(958 - 957) < xSpbf3;) {
            if (!('/' != yAr53phV1P2T[xSpbf3])) {
                yAr53phV1P2T[xSpbf3] = '9';
                yAr53phV1P2T[xSpbf3 - (173 - 172)] = yAr53phV1P2T[xSpbf3 - (432 - 431)] + '0' - '1';
            }
            if (t84n9F3LJZ[xSpbf3 - VxZ09rjGlL2Q +AodWriPgC] <= yAr53phV1P2T[xSpbf3])
                AFTwvj6[xSpbf3] = yAr53phV1P2T[xSpbf3] - t84n9F3LJZ[xSpbf3 - VxZ09rjGlL2Q +AodWriPgC] + '0';
            if (yAr53phV1P2T[xSpbf3] < t84n9F3LJZ[xSpbf3 - VxZ09rjGlL2Q +AodWriPgC]) {
                AFTwvj6[xSpbf3] = yAr53phV1P2T[xSpbf3] - t84n9F3LJZ[xSpbf3 - VxZ09rjGlL2Q +AodWriPgC] + ':';
                yAr53phV1P2T[xSpbf3 - (604 - 603)] = yAr53phV1P2T[xSpbf3 - (673 - 672)] + '0' - '1';
            }
            xSpbf3 = xSpbf3 - (785 - 784);
        };
    }
    for (xSpbf3 = VxZ09rjGlL2Q -AodWriPgC-(530 - 529); (155 - 155) <= xSpbf3; xSpbf3 = xSpbf3 - (275 - 274)) {
        if (!('/' != yAr53phV1P2T[xSpbf3])) {
            {
                if (0) {
                    return 0;
                };
            }
            yAr53phV1P2T[xSpbf3] = '9';
            yAr53phV1P2T[xSpbf3 - (71 - 70)] = yAr53phV1P2T[xSpbf3 - (126 - 125)] + '0' - '1';
        }
        AFTwvj6[xSpbf3] = yAr53phV1P2T[xSpbf3];
    }
    {
        xSpbf3 = (42 - 42);
        for (; (904 - 903);) {
            AyzNZIne = xSpbf3;
            if (AFTwvj6[xSpbf3] != '0')
                break;
            xSpbf3 = xSpbf3 + (775 - 774);
        };
    }
    for (xSpbf3 = AyzNZIne; VxZ09rjGlL2Q > xSpbf3; xSpbf3 = xSpbf3 + (889 - 888))
        printf ("%c", AFTwvj6[xSpbf3]);
}

void  main () {
    char t84n9F3LJZ [(104 - 94)] [(549 - 449)];
    int xSpbf3;
    char yAr53phV1P2T [(156 - 146)] [(954 - 854)];
    int yqzHZp;
    scanf ("%d", &yqzHZp);
    {
        xSpbf3 = (30 - 30);
        for (; yqzHZp - (596 - 595) > xSpbf3;) {
            scanf ("%s", yAr53phV1P2T[xSpbf3]);
            scanf ("%s", t84n9F3LJZ[xSpbf3]);
            xSpbf3 = xSpbf3 + (354 - 353);
        };
    }
    scanf ("%s", yAr53phV1P2T[yqzHZp - (279 - 278)]);
    scanf ("%s", t84n9F3LJZ[yqzHZp - (823 - 822)]);
    {
        xSpbf3 = (725 - 725);
        for (; yqzHZp > xSpbf3;) {
            ysCkNYL38G5y (yAr53phV1P2T[xSpbf3], t84n9F3LJZ[xSpbf3]);
            xSpbf3 = xSpbf3 + (680 - 679);
        };
    };
}

