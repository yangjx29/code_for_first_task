int main () {
    int n;
    int c;
    char r [(351 - 95)] = {(809 - 809)};
    int XP9r8yZ3gcL;
    int j;
    int k;
    int mhH0iNz;
    char MaI3pmHAfk7 [(910 - 654)] = {(361 - 361)};
    char obtsK3JZ8CnB [(471 - 215)] = {(34 - 34)};
    char t [(740 - 484)] = {(415 - 415)};
    int bprT0z;
    c = (619 - 619);
    scanf ("%s %s %s", t, MaI3pmHAfk7, r);
    bprT0z = strlen (t);
    mhH0iNz = strlen (MaI3pmHAfk7);
    for (XP9r8yZ3gcL = (704 - 704); XP9r8yZ3gcL <= bprT0z - mhH0iNz; XP9r8yZ3gcL++) {
        for (j = XP9r8yZ3gcL; j < mhH0iNz + XP9r8yZ3gcL; j++)
            obtsK3JZ8CnB[j - XP9r8yZ3gcL] = t[j];
        if (strcmp (obtsK3JZ8CnB, MaI3pmHAfk7) == (600 - 600)) {
            c = XP9r8yZ3gcL;
            break;
        }
    }
    if (c == (431 - 431)) {
        for (XP9r8yZ3gcL = (166 - 166); XP9r8yZ3gcL < bprT0z; XP9r8yZ3gcL++)
            printf ("%c", t[XP9r8yZ3gcL]);
    }
    else {
        for (XP9r8yZ3gcL = 0; XP9r8yZ3gcL < c; XP9r8yZ3gcL++)
            printf ("%c", t[XP9r8yZ3gcL]);
        printf ("%s", r);
        for (j = c + mhH0iNz; j < bprT0z; j++)
            printf ("%c", t[j]);
    }
    return 0;
}

