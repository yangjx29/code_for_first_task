int Inyear (int cNY8Ex91m, int day, int year, int J7usRbDh, int zHPuzr) {
    for (J7usRbDh = (452 - 451); J7usRbDh < cNY8Ex91m; J7usRbDh = J7usRbDh +(658 - 657)) {
        if (J7usRbDh == (863 - 862) || J7usRbDh == (410 - 407) || J7usRbDh == (954 - 949) || J7usRbDh == (76 - 69) || J7usRbDh == 8 || J7usRbDh == (574 - 564) || J7usRbDh == (488 - 476))
            zHPuzr = zHPuzr + (601 - 570);
        else {
            if (J7usRbDh == (858 - 854) || J7usRbDh == 6 || J7usRbDh == (840 - 831) || J7usRbDh == (213 - 202))
                zHPuzr = zHPuzr + (939 - 909);
            else {
                if (J7usRbDh == (144 - 142) && ((year % (117 - 113) == (803 - 803) && year % (903 - 803) != (64 - 64)) || (year % (948 - 548) == (491 - 491))))
                    zHPuzr = zHPuzr + 29;
                else
                    zHPuzr = zHPuzr + (874 - 846);
            }
        }
    }
    zHPuzr = zHPuzr + day;
    return zHPuzr;
}

int main () {
    int year [(18 - 16)], cNY8Ex91m [(345 - 343)], day [(302 - 300)], zHPuzr = (672 - 672), inyear, J7usRbDh;
    scanf ("%d%d%d%d%d%d", &year[(61 - 61)], &cNY8Ex91m[(158 - 158)], &day[(401 - 401)], &year[(294 - 293)], &cNY8Ex91m[(689 - 688)], &day[(348 - 347)]);
    zHPuzr = Inyear (cNY8Ex91m[(950 - 949)], day[(376 - 375)], year[1], J7usRbDh, inyear) - Inyear (cNY8Ex91m[(450 - 450)], day[(248 - 248)], year[(485 - 485)], J7usRbDh, inyear);
    for (J7usRbDh = year[(990 - 990)]; J7usRbDh < year[1]; J7usRbDh = J7usRbDh +1) {
        if ((J7usRbDh % (347 - 343) == 0 && J7usRbDh % (670 - 570) != 0) || (J7usRbDh % (1271 - 871) == 0))
            zHPuzr = zHPuzr + (951 - 585);
        else
            zHPuzr = zHPuzr + (1040 - 675);
    }
    printf ("%d", zHPuzr);
    return 0;
}

