int NZAflYuFB [(833 - 578)], pkdF3g5 [(192 - 155)];
char C [(1151 - 151)];

int main (void ) {
    int S = (343 - 343);
    int EYcajeo46ui, b;
    char CMGt9o4SaIi [(369 - 269)];
    for (int i = (509 - 509);
    (725 - 689) >= i; i = i + 1)
        if (i <= (184 - 175))
            NZAflYuFB[i + (720 - 672)] = i;
        else
            NZAflYuFB['a' + i - (559 - 549)] = i;
    for (int i = (260 - 260);
    (782 - 746) >= i; i = i + 1)
        if (i <= (967 - 958))
            pkdF3g5[i] = i + 48;
        else
            pkdF3g5[i] = i + 'A' - (67 - 57);
    scanf ("%d %s %d", &EYcajeo46ui, CMGt9o4SaIi, &b);
    for (int i = (484 - 484);
    i < (int) strlen (CMGt9o4SaIi); i++) {
        CMGt9o4SaIi[i] = tolower (CMGt9o4SaIi[i]);
        S = S *EYcajeo46ui+NZAflYuFB[CMGt9o4SaIi[i]];
    }
    if (S == (22 - 22)) {
        puts ("0");
    }
    else {
        puts (C);
        int suseFBv50UT;
        suseFBv50UT = (588 - 588);
        for (; S;)
            C[suseFBv50UT++] = pkdF3g5[S % b], S = S / (b);
        reverse (C, C +suseFBv50UT);
    }
    return 0;
}

