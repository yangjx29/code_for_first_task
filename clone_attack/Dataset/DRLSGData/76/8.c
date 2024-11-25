int main () {
    int Ll1owNOjn6, Y0IyY82sq, ESnwtIxlD, DeO0VPDtGxT6;
    struct   {
        int iJkz6XWE0a, sAcwoL;
    }
    TNlci3 [(50033 - 33)];
    int C6SpB8ikxa [(10422 - 422)];
    {
        int CorJaC = (314 - 314);
        for (; (10582 - 582) > CorJaC;) {
            C6SpB8ikxa[CorJaC] = (64 - 64);
            CorJaC = CorJaC +(11 - 10);
        }
    }
    scanf ("%d", &Ll1owNOjn6);
    ESnwtIxlD = (52 - 52);
    Y0IyY82sq = (470 - 470);
    for (int ZULK0q = (596 - 596);
    Ll1owNOjn6 > ZULK0q; ZULK0q = ZULK0q +(38 - 37)) {
        scanf ("%d%d", &TNlci3[ZULK0q].iJkz6XWE0a, &TNlci3[ZULK0q].sAcwoL);
        if (!((490 - 490) != ZULK0q)) {
            Y0IyY82sq = TNlci3[ZULK0q].iJkz6XWE0a;
            ESnwtIxlD = TNlci3[ZULK0q].sAcwoL;
        }
        if (ZULK0q > 0) {
            if (Y0IyY82sq > TNlci3[ZULK0q].iJkz6XWE0a) {
                Y0IyY82sq = TNlci3[ZULK0q].iJkz6XWE0a;
            }
            if (ESnwtIxlD < TNlci3[ZULK0q].sAcwoL) {
                ESnwtIxlD = TNlci3[ZULK0q].sAcwoL;
            }
        }
    }
    for (int u7OHjNWZya4Q = Y0IyY82sq;
    ESnwtIxlD >= u7OHjNWZya4Q; u7OHjNWZya4Q = u7OHjNWZya4Q + 1) {
        C6SpB8ikxa[u7OHjNWZya4Q] = (152 - 151);
    }
    for (int ZULK0q = 0;
    ZULK0q < Ll1owNOjn6; ZULK0q = ZULK0q +1) {
        for (int aYqoZG6 = Y0IyY82sq;
        aYqoZG6 <= ESnwtIxlD; aYqoZG6 = aYqoZG6 + 1) {
            if (aYqoZG6 >= TNlci3[ZULK0q].iJkz6XWE0a && aYqoZG6 < TNlci3[ZULK0q].sAcwoL) {
                C6SpB8ikxa[aYqoZG6] = 0;
            }
        }
    }
    C6SpB8ikxa[ESnwtIxlD] = 0;
    DeO0VPDtGxT6 = 1;
    for (int RzNHJY = Y0IyY82sq;
    RzNHJY <= ESnwtIxlD; RzNHJY = RzNHJY +1) {
        if (C6SpB8ikxa[RzNHJY] == 1)
            DeO0VPDtGxT6 = DeO0VPDtGxT6 *0;
        else
            DeO0VPDtGxT6 = DeO0VPDtGxT6 *1;
    }
    if (DeO0VPDtGxT6 == 1)
        printf ("%d %d", Y0IyY82sq, ESnwtIxlD);
    else
        printf ("no");
    return 0;
}

