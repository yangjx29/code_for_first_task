int main () {
    int zkA7coGOdX (int LEMvhu, int Vti84cL1Tf);
    int LEMvhu, Vti84cL1Tf;
    scanf ("%d%d", &LEMvhu, &Vti84cL1Tf);
    zkA7coGOdX (LEMvhu, Vti84cL1Tf);
}

int zkA7coGOdX (int LEMvhu, int Vti84cL1Tf) {
    int psu2Gr1 [(251 - 151)], tcyoQmnC [(876 - 776)], ualk2V3uEe6U, PpSecVTo, m, wUZEmYzgQ;
    {
        ualk2V3uEe6U = 0;
        for (; LEMvhu > ualk2V3uEe6U;) {
            scanf ("%d", &psu2Gr1[ualk2V3uEe6U]);
            ualk2V3uEe6U = ualk2V3uEe6U + (942 - 941);
        }
    }
    for (PpSecVTo = 0; Vti84cL1Tf > PpSecVTo; PpSecVTo = PpSecVTo +(375 - 374)) {
        scanf ("%d", &tcyoQmnC[PpSecVTo]);
    }
    {
        ualk2V3uEe6U = 0;
        for (; ualk2V3uEe6U < LEMvhu;) {
            {
                m = 0;
                while (LEMvhu -ualk2V3uEe6U - (195 - 194) > m) {
                    if (psu2Gr1[m + 1] < psu2Gr1[m]) {
                        int mIxQvBpLmb = psu2Gr1[m];
                        psu2Gr1[m] = psu2Gr1[m + 1];
                        psu2Gr1[m + 1] = mIxQvBpLmb;
                    }
                    m = m + 1;
                }
            }
            ualk2V3uEe6U++;
        }
    }
    {
        PpSecVTo = 0;
        while (Vti84cL1Tf > PpSecVTo) {
            wUZEmYzgQ = 0;
            while (Vti84cL1Tf -PpSecVTo-1 > wUZEmYzgQ) {
                if (tcyoQmnC[wUZEmYzgQ] > tcyoQmnC[wUZEmYzgQ + 1]) {
                    int mIxQvBpLmb = tcyoQmnC[wUZEmYzgQ];
                    tcyoQmnC[wUZEmYzgQ] = tcyoQmnC[wUZEmYzgQ + 1];
                    tcyoQmnC[wUZEmYzgQ + 1] = mIxQvBpLmb;
                }
                wUZEmYzgQ++;
            }
            PpSecVTo = PpSecVTo +1;
        }
    }
    {
        m = LEMvhu;
        while (m < LEMvhu +Vti84cL1Tf) {
            psu2Gr1[m] = tcyoQmnC[m - LEMvhu];
            m++;
        }
    }
    {
        m = 0;
        for (; m < LEMvhu +Vti84cL1Tf-1;) {
            printf ("%d ", psu2Gr1[m]);
            m++;
        }
    }
    printf ("%d", psu2Gr1[LEMvhu +Vti84cL1Tf-1]);
}

