int main () {
    int vwCYiH0VmUa, zKfUeD [100], cjIOD1Vfun [100], rCyzBZI, A2p8F3Pi, c = 1, SYprSuAT = 1, nZFWNm3l, bNqm5wZKGW7i;
    scanf ("%d", &vwCYiH0VmUa);
    for (rCyzBZI = 0; vwCYiH0VmUa > rCyzBZI; rCyzBZI++) {
        scanf ("%d", &zKfUeD[rCyzBZI]);
    }
    for (rCyzBZI = 0; vwCYiH0VmUa > rCyzBZI; rCyzBZI++) {
        if (zKfUeD[rCyzBZI] == 2 || zKfUeD[rCyzBZI] == 1) {
            printf ("1\n");
        }
        else {
            c = 1;
            SYprSuAT = 1;
            for (A2p8F3Pi = 2; A2p8F3Pi < zKfUeD[rCyzBZI]; A2p8F3Pi++) {
                cjIOD1Vfun[A2p8F3Pi] = c + SYprSuAT;
                bNqm5wZKGW7i = A2p8F3Pi;
                nZFWNm3l = SYprSuAT;
                SYprSuAT = c + SYprSuAT;
                c = nZFWNm3l;
            }
            printf ("%d\n", cjIOD1Vfun[bNqm5wZKGW7i]);
        };
    }
    return 0;
}

