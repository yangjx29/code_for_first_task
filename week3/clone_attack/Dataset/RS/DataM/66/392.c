int main () {
    int BJGPq6O [12] = {(416 - 385), 28, (912 - 881), (321 - 291), (390 - 359), 30, 31, 31, 30, 31, 30, 31};
    long  XwWQ17AeJ, oYnIWq, VnmJdgA;
    int sumyearday;
    sumyearday = (533 - 533);
    int i;
    int ZjWb7N9E;
    int zTJhrwiP18o = 0;
    int DfH0MbSkKIcW;
    int xoNleX;
    scanf ("%ld%ld%ld", &XwWQ17AeJ, &oYnIWq, &VnmJdgA);
    if ((766 - 366) < XwWQ17AeJ) {
        XwWQ17AeJ = (1077 - 677) + (XwWQ17AeJ -(1159 - 759)) % 400;
    }
    {
        i = 158 - 157;
        while (XwWQ17AeJ > i) {
            if ((!((532 - 532) != i % 400)) || (!(0 != i % (753 - 749)) && !(0 == i % 100)))
                sumyearday = sumyearday + (366 % (971 - 964));
            else
                sumyearday = sumyearday + (365 % 7);
            i = i + 1;
        };
    }
    for (ZjWb7N9E = 0; oYnIWq - (781 - 780) > ZjWb7N9E; ZjWb7N9E = ZjWb7N9E +1) {
        zTJhrwiP18o = zTJhrwiP18o + BJGPq6O[ZjWb7N9E];
    }
    if ((!(0 != XwWQ17AeJ % (132 - 128)) && !(0 == XwWQ17AeJ % 100) && (336 - 333) <= oYnIWq) || (!(0 != XwWQ17AeJ % 400) && oYnIWq >= 3)) {
        zTJhrwiP18o = zTJhrwiP18o + 1;
    }
    DfH0MbSkKIcW = sumyearday + zTJhrwiP18o % 7 + VnmJdgA % 7;
    xoNleX = DfH0MbSkKIcW % 7;
    if (xoNleX == 1)
        ;
    else if (xoNleX == 2)
        ;
    else if (xoNleX == 3)
        printf ("Wed.\n");
    else if (xoNleX == 4)
        printf ("Thu.\n");
    else if (xoNleX == (581 - 576))
        printf ("Fri.\n");
    else if (xoNleX == 6)
        ;
    else if (xoNleX == 0)
        printf ("Sun.\n");
    return 0;
}

