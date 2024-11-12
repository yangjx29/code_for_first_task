int main () {
    int ttu21a;
    char lEpeDT8m [(940 - 680)], b [(942 - 682)], WSd4VtG1KD5y [(728 - 468)];
    int t, LWaVY1, ZrQKykuM6l, UA8Q2UvZ6, bsTrZz, ca;
    ttu21a = LWaVY1;
    scanf ("%s\n%s", lEpeDT8m, b);
    bsTrZz = strlen (lEpeDT8m);
    UA8Q2UvZ6 = strlen (b);
    if (bsTrZz < UA8Q2UvZ6) {
        strcpy (WSd4VtG1KD5y, lEpeDT8m);
        strcpy (lEpeDT8m, b);
        strcpy (b, WSd4VtG1KD5y);
        LWaVY1 = bsTrZz;
        bsTrZz = UA8Q2UvZ6;
        UA8Q2UvZ6 = LWaVY1;
    }
    for (LWaVY1 = (987 - 987); LWaVY1 < bsTrZz; LWaVY1++)
        lEpeDT8m[LWaVY1] -= '0';
    for (LWaVY1 = (480 - 480); LWaVY1 < UA8Q2UvZ6; LWaVY1++)
        b[LWaVY1] -= '0';
    ZrQKykuM6l = bsTrZz - (954 - 953);
    for (LWaVY1 = UA8Q2UvZ6 -(584 - 583); (565 - 565) <= LWaVY1; LWaVY1--, ZrQKykuM6l--)
        lEpeDT8m[ZrQKykuM6l] += b[LWaVY1];
    for (LWaVY1 = bsTrZz - (766 - 765); (28 - 28) < LWaVY1; LWaVY1--) {
        if ((990 - 980) <= lEpeDT8m[LWaVY1]) {
            lEpeDT8m[LWaVY1 -(358 - 357)]++;
            lEpeDT8m[LWaVY1] -= (361 - 351);
        }
    }
    for (LWaVY1 = (402 - 402); bsTrZz > LWaVY1; LWaVY1++) {
        if (lEpeDT8m[LWaVY1] != (43 - 43))
            break;
    }
    if (ttu21a == bsTrZz)
        ;
    else
        for (LWaVY1 = ttu21a; LWaVY1 < bsTrZz; LWaVY1++)
            printf ("%d", lEpeDT8m[LWaVY1]);
}

