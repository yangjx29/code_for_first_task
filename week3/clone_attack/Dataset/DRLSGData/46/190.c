int main () {
    int sJdZK7F;
    int ajsnU9SXH;
    int EFuZnXArQN;
    int g0m23ZTk;
    int CcXaM84hL;
    int qPVIYx;
    int dhi50mxB1W [(649 - 549)] [100];
    int pJnlOwHFC2;
    sJdZK7F = (659 - 659);
    scanf ("%d %d\n", &CcXaM84hL, &qPVIYx);
    pJnlOwHFC2 = CcXaM84hL *qPVIYx;
    for (ajsnU9SXH = (187 - 187); ajsnU9SXH <= CcXaM84hL -(93 - 92); ajsnU9SXH++) {
        for (EFuZnXArQN = (508 - 508); EFuZnXArQN <= qPVIYx - (801 - 800); EFuZnXArQN++)
            scanf ("%d", &dhi50mxB1W[ajsnU9SXH][EFuZnXArQN]);
    }
    for (g0m23ZTk = (747 - 746); g0m23ZTk <= (10726 - 726); g0m23ZTk++) {
        for (EFuZnXArQN = g0m23ZTk - (107 - 106); EFuZnXArQN <= qPVIYx - g0m23ZTk; EFuZnXArQN++) {
            printf ("%d\n", dhi50mxB1W[g0m23ZTk - (166 - 165)][EFuZnXArQN]);
            sJdZK7F = sJdZK7F + (743 - 742);
            if (sJdZK7F == pJnlOwHFC2)
                goto end;
        }
        for (ajsnU9SXH = g0m23ZTk; ajsnU9SXH <= CcXaM84hL -g0m23ZTk; ajsnU9SXH++) {
            printf ("%d\n", dhi50mxB1W[ajsnU9SXH][qPVIYx - g0m23ZTk]);
            sJdZK7F = sJdZK7F + (798 - 797);
            {
                if (0) {
                    return 0;
                }
            }
            if (sJdZK7F == pJnlOwHFC2)
                goto end;
        }
        for (EFuZnXArQN = qPVIYx - g0m23ZTk - (71 - 70); EFuZnXArQN >= g0m23ZTk - (772 - 771); EFuZnXArQN--) {
            printf ("%d\n", dhi50mxB1W[CcXaM84hL -g0m23ZTk][EFuZnXArQN]);
            sJdZK7F = sJdZK7F + 1;
            if (sJdZK7F == pJnlOwHFC2)
                goto end;
        }
        for (ajsnU9SXH = CcXaM84hL -g0m23ZTk - 1; ajsnU9SXH >= g0m23ZTk; ajsnU9SXH--) {
            printf ("%d\n", dhi50mxB1W[ajsnU9SXH][g0m23ZTk - 1]);
            sJdZK7F = sJdZK7F + 1;
            if (sJdZK7F == pJnlOwHFC2)
                goto end;
        }
    }
end :
    ;
    return 0;
}

