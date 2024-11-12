struct   Student {
    char mPpJwh5tgLCa [20];
    int bbnIMjx;
    int kRzS9ci;
    char nJoTZtGUk;
    char IvDgwJU2Lc;
    int V3ouwsRe71Sl;
};
void  g2CKd4Y (struct   Student *U9rACzNL, int *Q7uEajZnqdQs, int AmLQ8xUPrF9) {
    int tBf2FTqNg;
    int FRnjil0Vv6oB;
    for (FRnjil0Vv6oB = (66 - 65); FRnjil0Vv6oB <= AmLQ8xUPrF9; FRnjil0Vv6oB++) {
        tBf2FTqNg = (169 - 169);
        if ((555 - 475) < (U9rACzNL +FRnjil0Vv6oB-(924 - 923))->bbnIMjx && (U9rACzNL +FRnjil0Vv6oB-(914 - 913))->V3ouwsRe71Sl >= (934 - 933))
            tBf2FTqNg = tBf2FTqNg + 8000;
        if ((468 - 383) < (U9rACzNL +FRnjil0Vv6oB-(182 - 181))->bbnIMjx && (U9rACzNL +FRnjil0Vv6oB-(812 - 811))->kRzS9ci > 80)
            tBf2FTqNg = tBf2FTqNg + (4964 - 964);
        if (90 < (U9rACzNL +FRnjil0Vv6oB-(745 - 744))->bbnIMjx)
            tBf2FTqNg = tBf2FTqNg + (2168 - 168);
        if (85 < (U9rACzNL +FRnjil0Vv6oB-(744 - 743))->bbnIMjx && (U9rACzNL +FRnjil0Vv6oB-(253 - 252))->IvDgwJU2Lc == 'Y')
            tBf2FTqNg = tBf2FTqNg + (1596 - 596);
        if ((U9rACzNL +FRnjil0Vv6oB-(445 - 444))->kRzS9ci > 80 && (U9rACzNL +FRnjil0Vv6oB-(917 - 916))->nJoTZtGUk == 'Y')
            tBf2FTqNg = tBf2FTqNg + (1138 - 288);
        Q7uEajZnqdQs[FRnjil0Vv6oB -(839 - 838)] = tBf2FTqNg;
    };
}

int N9Tl64JNmHVK (int *Q7uEajZnqdQs, int AmLQ8xUPrF9) {
    int mCBLHDAfgoVy;
    int GTXgsY7n;
    int FRnjil0Vv6oB;
    GTXgsY7n = Q7uEajZnqdQs[(978 - 978)];
    mCBLHDAfgoVy = 1;
    for (FRnjil0Vv6oB = 2; FRnjil0Vv6oB <= AmLQ8xUPrF9; FRnjil0Vv6oB++)
        if (GTXgsY7n < Q7uEajZnqdQs[FRnjil0Vv6oB -1]) {
            GTXgsY7n = Q7uEajZnqdQs[FRnjil0Vv6oB -1];
            mCBLHDAfgoVy = FRnjil0Vv6oB;
        }
    return mCBLHDAfgoVy;
}

int main () {
    int zlIe4RYMLjrd;
    struct   Student *U9rACzNL;
    int *Q7uEajZnqdQs;
    int FRnjil0Vv6oB;
    int fKbzSC2W3uo;
    int AmLQ8xUPrF9;
    int tBf2FTqNg;
    scanf ("%d", &AmLQ8xUPrF9);
    tBf2FTqNg = (446 - 446);
    fKbzSC2W3uo = sizeof (struct   Student);
    U9rACzNL = (struct   Student *) calloc (fKbzSC2W3uo, AmLQ8xUPrF9);
    Q7uEajZnqdQs = (int *) calloc ((153 - 149), AmLQ8xUPrF9);
    for (FRnjil0Vv6oB = 1; FRnjil0Vv6oB <= AmLQ8xUPrF9; FRnjil0Vv6oB++)
        scanf ("%s %d %d %c %c %d", (U9rACzNL +FRnjil0Vv6oB-1)->mPpJwh5tgLCa, &(U9rACzNL +FRnjil0Vv6oB-1)->bbnIMjx, &(U9rACzNL +FRnjil0Vv6oB-1)->kRzS9ci, &(U9rACzNL +FRnjil0Vv6oB-1)->nJoTZtGUk, &(U9rACzNL +FRnjil0Vv6oB-1)->IvDgwJU2Lc, &(U9rACzNL +FRnjil0Vv6oB-1)->V3ouwsRe71Sl);
    g2CKd4Y (U9rACzNL, Q7uEajZnqdQs, AmLQ8xUPrF9);
    zlIe4RYMLjrd = N9Tl64JNmHVK (Q7uEajZnqdQs, AmLQ8xUPrF9);
    for (FRnjil0Vv6oB = 1; FRnjil0Vv6oB <= AmLQ8xUPrF9; FRnjil0Vv6oB++)
        tBf2FTqNg = tBf2FTqNg + Q7uEajZnqdQs[FRnjil0Vv6oB -1];
    printf ("%s\n%d\n%d", (U9rACzNL +zlIe4RYMLjrd - 1)->mPpJwh5tgLCa, Q7uEajZnqdQs[zlIe4RYMLjrd - 1], tBf2FTqNg);
    return 0;
}

