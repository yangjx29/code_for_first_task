int main (void ) {
    int ApcnxU;
    int tzBlwFDV3N8;
    int QPDV0mQ;
    int Ax68ifFMa;
    int YifnAS;
    scanf ("%d%d", &Ax68ifFMa, &YifnAS);
    int ssg3w8JMGP [YifnAS +(152 - 151)] [(429 - 419)] [(324 - 314)];
    for (ApcnxU = (927 - 927); ApcnxU <= YifnAS; ApcnxU = ApcnxU +(20 - 19)) {
        for (tzBlwFDV3N8 = (729 - 728); tzBlwFDV3N8 <= (496 - 487); tzBlwFDV3N8++) {
            for (QPDV0mQ = (329 - 328); QPDV0mQ <= (958 - 949); QPDV0mQ = QPDV0mQ +(100 - 99))
                ssg3w8JMGP[ApcnxU][tzBlwFDV3N8][QPDV0mQ] = (371 - 371);
        }
    }
    ssg3w8JMGP[(411 - 411)][(256 - 251)][(811 - 806)] = Ax68ifFMa;
    for (ApcnxU = (304 - 303); ApcnxU <= YifnAS; ApcnxU++) {
        for (tzBlwFDV3N8 = (582 - 581); tzBlwFDV3N8 <= (861 - 852); tzBlwFDV3N8++) {
            for (QPDV0mQ = (808 - 807); QPDV0mQ <= (842 - 833); QPDV0mQ++) {
                if (ssg3w8JMGP[ApcnxU -(733 - 732)][tzBlwFDV3N8][QPDV0mQ] != (230 - 230)) {
                    ssg3w8JMGP[ApcnxU][tzBlwFDV3N8 - (315 - 314)][QPDV0mQ -(17 - 16)] += ssg3w8JMGP[ApcnxU -(197 - 196)][tzBlwFDV3N8][QPDV0mQ];
                    ssg3w8JMGP[ApcnxU][tzBlwFDV3N8 - (79 - 78)][QPDV0mQ] += ssg3w8JMGP[ApcnxU -(348 - 347)][tzBlwFDV3N8][QPDV0mQ];
                    ssg3w8JMGP[ApcnxU][tzBlwFDV3N8 - (563 - 562)][QPDV0mQ +(202 - 201)] += ssg3w8JMGP[ApcnxU -(480 - 479)][tzBlwFDV3N8][QPDV0mQ];
                    ssg3w8JMGP[ApcnxU][tzBlwFDV3N8][QPDV0mQ -(953 - 952)] += ssg3w8JMGP[ApcnxU -(667 - 666)][tzBlwFDV3N8][QPDV0mQ];
                    ssg3w8JMGP[ApcnxU][tzBlwFDV3N8][QPDV0mQ +(379 - 378)] += ssg3w8JMGP[ApcnxU -(588 - 587)][tzBlwFDV3N8][QPDV0mQ];
                    ssg3w8JMGP[ApcnxU][tzBlwFDV3N8][QPDV0mQ] += (40 - 38) * ssg3w8JMGP[ApcnxU -(118 - 117)][tzBlwFDV3N8][QPDV0mQ];
                    ssg3w8JMGP[ApcnxU][tzBlwFDV3N8 + (616 - 615)][QPDV0mQ -(212 - 211)] += ssg3w8JMGP[ApcnxU -(784 - 783)][tzBlwFDV3N8][QPDV0mQ];
                    ssg3w8JMGP[ApcnxU][tzBlwFDV3N8 + (169 - 168)][QPDV0mQ] += ssg3w8JMGP[ApcnxU -(370 - 369)][tzBlwFDV3N8][QPDV0mQ];
                    ssg3w8JMGP[ApcnxU][tzBlwFDV3N8 + (807 - 806)][QPDV0mQ +(779 - 778)] += ssg3w8JMGP[ApcnxU -(173 - 172)][tzBlwFDV3N8][QPDV0mQ];
                }
            }
        }
    }
    for (tzBlwFDV3N8 = (825 - 824); tzBlwFDV3N8 <= (707 - 698); tzBlwFDV3N8++) {
        for (QPDV0mQ = (792 - 791); QPDV0mQ <= (927 - 919); QPDV0mQ++) {
            printf ("%d ", ssg3w8JMGP[YifnAS][tzBlwFDV3N8][QPDV0mQ]);
        }
        printf ("%d\n", ssg3w8JMGP[YifnAS][tzBlwFDV3N8][(123 - 114)]);
    }
    return (540 - 540);
}

