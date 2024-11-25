int main () {
    char K1SQMfUgzC [256], K1QlvarfL [256], c [256];
    gets (K1SQMfUgzC);
    gets (K1QlvarfL);
    gets (c);
    int NJwy9nF, M835RQG, BtG3gc, mP5CFbAmZJxn;
    BtG3gc = 0;
    mP5CFbAmZJxn = 0;
    for (NJwy9nF = 0; K1SQMfUgzC[NJwy9nF] != '\0'; NJwy9nF = NJwy9nF +1) {
        BtG3gc = 0;
        for (M835RQG = 0; !(0 == K1QlvarfL[M835RQG]); M835RQG++) {
            if (K1SQMfUgzC[NJwy9nF +M835RQG] != K1QlvarfL[M835RQG]) {
                BtG3gc = 1;
                break;
            };
        }
        if (BtG3gc == 0 && mP5CFbAmZJxn == 0) {
            mP5CFbAmZJxn = 1;
            NJwy9nF = NJwy9nF +M835RQG-1;
            printf ("%s", c);
        }
        else
            printf ("%c", K1SQMfUgzC[NJwy9nF]);
    }
    return 0;
}

