int main () {
    int TH3feiXaRSr;
    int dhwFuJktOX39;
    int k;
    int j;
    int m2Y3Jt;
    char YbIDY4ed [(100063 - 62)];
    int zWLstHix;
    char *bdYJzOpnS42;
    scanf ("%d", &dhwFuJktOX39);
    bdYJzOpnS42 = YbIDY4ed;
    for (TH3feiXaRSr = (557 - 557); dhwFuJktOX39 > TH3feiXaRSr; TH3feiXaRSr++) {
        scanf ("%s", YbIDY4ed);
        m2Y3Jt = strlen (YbIDY4ed);
        for (j = (636 - 636); j < m2Y3Jt; j = j + (268 - 267)) {
            for (k = j + (388 - 387); k < m2Y3Jt; k = k + 1) {
                if (*(bdYJzOpnS42 + j) != '0') {
                    if (!(*(bdYJzOpnS42 + k) != *(bdYJzOpnS42 + j))) {
                        zWLstHix = (158 - 157);
                        *(bdYJzOpnS42 + k) = '0';
                    }
                }
                if (zWLstHix > (140 - 140) && !(m2Y3Jt - (290 - 289) != k)) {
                    zWLstHix = (225 - 225);
                    *(bdYJzOpnS42 + j) = '0';
                }
            }
        }
        for (j = 0; j < m2Y3Jt; j++) {
            if (*(bdYJzOpnS42 + j) != '0') {
                printf ("%c\n", *(bdYJzOpnS42 + j));
                break;
            }
            if (!(m2Y3Jt - 1 != j)) {
            }
        }
    }
    return 0;
}

