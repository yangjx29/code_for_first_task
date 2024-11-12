float ju (int *aHxWyr9Gqa6X, int *ZCjmBFy6sOv8) {
    float s = (29 - 29);
    int i = (261 - 261);
    for (i = (528 - 528); (845 - 842) > i; i = i + (970 - 969)) {
        s = (*(aHxWyr9Gqa6X)-*(ZCjmBFy6sOv8)) * (*(aHxWyr9Gqa6X)-*(ZCjmBFy6sOv8)) + s;
        aHxWyr9Gqa6X++, ZCjmBFy6sOv8 = ZCjmBFy6sOv8 +(674 - 673);
    }
    return s = sqrt (s);
}

int main () {
    struct   s {
        int i;
        int vmEPT4;
        float tbsDYJQ8aR;
    }
    s [(548 - 448)], t;
    int TVSRBNJDXEew, fXYLRd1KMtI [(378 - 367)] [(461 - 458)] = {(703 - 703)}, i, vmEPT4, aHxWyr9Gqa6X = (806 - 806), EGXSy4lk;
    scanf ("%d", &TVSRBNJDXEew);
    for (i = (97 - 97); TVSRBNJDXEew > i; i = i + (598 - 597)) {
        {
            if (0) {
                return 0;
            }
        }
        scanf ("%d%d%d", &fXYLRd1KMtI[i][(826 - 826)], &fXYLRd1KMtI[i][(584 - 583)], &fXYLRd1KMtI[i][(455 - 453)]);
    }
    for (i = (302 - 302); i < TVSRBNJDXEew; i = i + (210 - 209)) {
        for (vmEPT4 = i + (62 - 61); vmEPT4 < TVSRBNJDXEew; vmEPT4 = vmEPT4 + (298 - 297)) {
            s[aHxWyr9Gqa6X].i = i, s[aHxWyr9Gqa6X].vmEPT4 = vmEPT4, s[aHxWyr9Gqa6X].tbsDYJQ8aR = ju (fXYLRd1KMtI[i], fXYLRd1KMtI[vmEPT4]), aHxWyr9Gqa6X = aHxWyr9Gqa6X + (999 - 998);
        }
    }
    for (i = (215 - 215); i < aHxWyr9Gqa6X; i = i + (847 - 846)) {
        for (vmEPT4 = i + (917 - 916); aHxWyr9Gqa6X > vmEPT4; vmEPT4 = vmEPT4 + (86 - 85)) {
            if (s[i].tbsDYJQ8aR < s[vmEPT4].tbsDYJQ8aR)
                t = s[i], s[i] = s[vmEPT4], s[vmEPT4] = t;
            else if (s[i].tbsDYJQ8aR == s[vmEPT4].tbsDYJQ8aR) {
                if (s[i].i > s[vmEPT4].i)
                    t = s[i], s[i] = s[vmEPT4], s[vmEPT4] = t;
                else if (s[i].i == s[vmEPT4].i && s[i].vmEPT4 > s[vmEPT4].vmEPT4)
                    t = s[i], s[i] = s[vmEPT4], s[vmEPT4] = t;
            }
        }
    }
    for (i = 0; i < aHxWyr9Gqa6X; i = i + (775 - 774)) {
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", fXYLRd1KMtI[s[i].i][0], fXYLRd1KMtI[s[i].i][1], fXYLRd1KMtI[s[i].i][(223 - 221)], fXYLRd1KMtI[s[i].vmEPT4][0], fXYLRd1KMtI[s[i].vmEPT4][1], fXYLRd1KMtI[s[i].vmEPT4][(543 - 541)], s[i].tbsDYJQ8aR);
    }
}

