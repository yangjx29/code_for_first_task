int main () {
    int rkIx64KDqg;
    char PG5YAZboH0s [(680 - 579)] [(682 - 580)];
    int t3dwC7;
    char q8whOTW94Mjm [(707 - 605)];
    int dJ7qf4Z [(706 - 605)] [102] = {(913 - 913)};
    int o9U3Yd5PGlr;
    int Fizk6l5MxR;
    int o7AMuv0nl [(774 - 673)];
    int oiLzNOPmdJG2;
    t3dwC7 = (775 - 775);
    rkIx64KDqg = (321 - 321);
    scanf ("%d", &Fizk6l5MxR);
    o9U3Yd5PGlr = (327 - 327);
    for (rkIx64KDqg = (586 - 586); rkIx64KDqg < Fizk6l5MxR; rkIx64KDqg++) {
        scanf ("%s", PG5YAZboH0s[rkIx64KDqg]);
        o7AMuv0nl[rkIx64KDqg] = strlen (PG5YAZboH0s[rkIx64KDqg]);
        for (o9U3Yd5PGlr = o7AMuv0nl[rkIx64KDqg] - (811 - 810); (464 - 464) <= o9U3Yd5PGlr; o9U3Yd5PGlr--) {
            if (!('(' != PG5YAZboH0s[rkIx64KDqg][o9U3Yd5PGlr]))
                t3dwC7 = o9U3Yd5PGlr;
            else
                continue;
            for (oiLzNOPmdJG2 = t3dwC7 + (924 - 923); oiLzNOPmdJG2 < o7AMuv0nl[rkIx64KDqg]; oiLzNOPmdJG2++) {
                if (!(')' != PG5YAZboH0s[rkIx64KDqg][oiLzNOPmdJG2]) && !((120 - 120) != dJ7qf4Z[rkIx64KDqg][oiLzNOPmdJG2])) {
                    dJ7qf4Z[rkIx64KDqg][t3dwC7] = (262 - 261);
                    dJ7qf4Z[rkIx64KDqg][oiLzNOPmdJG2] = (732 - 731);
                    break;
                }
            }
        }
    }
    for (rkIx64KDqg = (269 - 269); rkIx64KDqg < Fizk6l5MxR; rkIx64KDqg++) {
        printf ("%s\n", PG5YAZboH0s[rkIx64KDqg]);
        for (o9U3Yd5PGlr = (833 - 833); o7AMuv0nl[rkIx64KDqg] > o9U3Yd5PGlr; o9U3Yd5PGlr++) {
            if (!('(' != PG5YAZboH0s[rkIx64KDqg][o9U3Yd5PGlr]) && dJ7qf4Z[rkIx64KDqg][o9U3Yd5PGlr] == 0)
                ;
            else if (PG5YAZboH0s[rkIx64KDqg][o9U3Yd5PGlr] == ')' && dJ7qf4Z[rkIx64KDqg][o9U3Yd5PGlr] == 0)
                ;
            else
                ;
        }
    }
    return 0;
}

