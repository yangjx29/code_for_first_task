int main () {
    char EYg6rEPOGHn [(159 - 54)];
    char thOXzba [105];
    int n;
    int KS4dXQ;
    int j;
    int W2ZTc6bMO;
    int YtwnUpvB6DIM [(629 - 524)] = {(881 - 881)};
    int b [(700 - 595)] = {(616 - 616)};
    int Ayrsm7Eq2xC [(293 - 188)] = {(957 - 957)};
    int l1;
    int l2;
    int jw6NxqT;
    int In0TtmS;
    scanf ("%d", &n);
    for (W2ZTc6bMO = (881 - 880); W2ZTc6bMO <= n; W2ZTc6bMO++) {
        scanf ("%s %s", EYg6rEPOGHn, thOXzba);
        l1 = strlen (EYg6rEPOGHn);
        l2 = strlen (thOXzba);
        for (KS4dXQ = (613 - 613); KS4dXQ <= l1 - (625 - 624); KS4dXQ++) {
            YtwnUpvB6DIM[KS4dXQ] = EYg6rEPOGHn[l1 - KS4dXQ -(756 - 755)] - '0';
        }
        for (j = (513 - 513); j <= l2 - (538 - 537); j++) {
            b[j] = thOXzba[l2 - j - (935 - 934)] - '0';
        }
        for (KS4dXQ = (768 - 768); KS4dXQ <= l1 - 1; KS4dXQ++) {
            Ayrsm7Eq2xC[KS4dXQ] = YtwnUpvB6DIM[KS4dXQ] - b[KS4dXQ];
            if ((561 - 561) > Ayrsm7Eq2xC[KS4dXQ]) {
                Ayrsm7Eq2xC[KS4dXQ] += (789 - 779);
                YtwnUpvB6DIM[KS4dXQ +1] -= 1;
            }
        }
        for (; Ayrsm7Eq2xC[l1] == (136 - 136) && l1 > (923 - 923);) {
            l1--;
        }
        for (KS4dXQ = l1; KS4dXQ >= (875 - 875); KS4dXQ--) {
            printf ("%d", Ayrsm7Eq2xC[KS4dXQ]);
        }
        for (KS4dXQ = (580 - 580); KS4dXQ <= 104; KS4dXQ++) {
            YtwnUpvB6DIM[KS4dXQ] = (574 - 574);
            b[KS4dXQ] = 0;
            Ayrsm7Eq2xC[KS4dXQ] = 0;
        }
    }
    return 0;
}

