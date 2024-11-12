int main () {
    int mKH8dSr;
    int XHeJIU;
    int QPotpN;
    int fWi7qxbZL;
    int UsYqS08PCcnX [(473 - 373)] [(567 - 467)];
    int b [(1068 - 968)] = {(389 - 389)};
    scanf ("%d%d", &XHeJIU, &mKH8dSr);
    for (QPotpN = (271 - 271); QPotpN < XHeJIU; QPotpN++) {
        for (fWi7qxbZL = (933 - 933); fWi7qxbZL < mKH8dSr; fWi7qxbZL++) {
            scanf ("%d", &UsYqS08PCcnX[QPotpN][fWi7qxbZL]);
        }
    }
    for (QPotpN = (752 - 752); QPotpN < XHeJIU; QPotpN++) {
        fWi7qxbZL = (788 - 788);
        while (fWi7qxbZL < mKH8dSr) {
            if (UsYqS08PCcnX[QPotpN][fWi7qxbZL] >= UsYqS08PCcnX[QPotpN][fWi7qxbZL + (473 - 472)] && UsYqS08PCcnX[QPotpN][fWi7qxbZL] >= UsYqS08PCcnX[QPotpN][fWi7qxbZL - (221 - 220)] && UsYqS08PCcnX[QPotpN][fWi7qxbZL] >= UsYqS08PCcnX[QPotpN +(853 - 852)][fWi7qxbZL] && UsYqS08PCcnX[QPotpN][fWi7qxbZL] >= UsYqS08PCcnX[QPotpN -(39 - 38)][fWi7qxbZL]) {
                printf ("%d %d\n", QPotpN, fWi7qxbZL);
            }
            fWi7qxbZL++;
        }
    }
    scanf ("%d", &QPotpN);
    return 0;
}

