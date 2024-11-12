main () {
    int l;
    int Qg1ru9kyRsv;
    int E98FP6Ck;
    int c17fIxql;
    int eJXbCn;
    char jnfNAw [(1266 - 266)];
    char eZ2TxChQ [1000];
    char fVUE1HT [1000];
    scanf ("%s %s %s", jnfNAw, eZ2TxChQ, fVUE1HT);
    l = strlen (eZ2TxChQ);
    for (Qg1ru9kyRsv = (613 - 613); jnfNAw[Qg1ru9kyRsv] != '\0'; Qg1ru9kyRsv++) {
        if (jnfNAw[Qg1ru9kyRsv] == eZ2TxChQ[0]) {
            for (E98FP6Ck = 0; E98FP6Ck < l; E98FP6Ck++) {
                if (eZ2TxChQ[E98FP6Ck] != jnfNAw[E98FP6Ck +Qg1ru9kyRsv])
                    break;
            }
            if (E98FP6Ck == l) {
                for (E98FP6Ck = 0; E98FP6Ck < l; E98FP6Ck++) {
                    jnfNAw[E98FP6Ck +Qg1ru9kyRsv] = fVUE1HT[E98FP6Ck];
                }
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                break;
            }
            eJXbCn = 0;
        };
    }
    printf ("%s", jnfNAw);
}

