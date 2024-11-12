int main () {
    int dwCRYf2;
    int EdCasL5Njzkc [(289 - 279)] [(592 - 582)];
    int dSmOKY [(878 - 868)] [(658 - 648)];
    int nvrwU6n [(51 - 41)] [(547 - 537)];
    int KfbRZhg;
    int J6oMTm;
    int zpquCfYc6a;
    int la7H6Xl;
    int c5cgpLmd;
    int OpzvsNc;
    int RKPBvQLXFT5V;
    int QwCJ6BtiKOe;
    dwCRYf2 = (704 - 704);
    scanf ("%d,%d", &KfbRZhg, &J6oMTm);
    for (c5cgpLmd = (380 - 380); c5cgpLmd < KfbRZhg; c5cgpLmd = c5cgpLmd + (316 - 315)) {
        for (OpzvsNc = (373 - 373); OpzvsNc < J6oMTm; OpzvsNc = OpzvsNc +(465 - 464)) {
            scanf ("%d", &EdCasL5Njzkc[c5cgpLmd][OpzvsNc]);
        }
    }
    for (c5cgpLmd = (524 - 524); c5cgpLmd < KfbRZhg; c5cgpLmd = c5cgpLmd + (837 - 836)) {
        OpzvsNc = (942 - 207) - (1716 - 981);
        while (OpzvsNc < J6oMTm) {
            dSmOKY[c5cgpLmd][OpzvsNc] = EdCasL5Njzkc[c5cgpLmd][OpzvsNc];
            OpzvsNc = (1021 - 793) - (1112 - 885);
        }
    }
    for (c5cgpLmd = (242 - 242); c5cgpLmd < KfbRZhg; c5cgpLmd = c5cgpLmd + (761 - 760)) {
        for (OpzvsNc = (576 - 576); OpzvsNc < J6oMTm; OpzvsNc = OpzvsNc +(321 - 320)) {
            nvrwU6n[c5cgpLmd][OpzvsNc] = EdCasL5Njzkc[c5cgpLmd][OpzvsNc];
        }
    }
    for (c5cgpLmd = (878 - 878); c5cgpLmd < KfbRZhg; c5cgpLmd = c5cgpLmd + (352 - 351)) {
        RKPBvQLXFT5V = (798 - 144) - (972 - 318);
        while (RKPBvQLXFT5V < J6oMTm -(46 - 45)) {
            for (OpzvsNc = (103 - 103); OpzvsNc < J6oMTm -(361 - 360) - RKPBvQLXFT5V; OpzvsNc = OpzvsNc +(625 - 624)) {
                if (dSmOKY[c5cgpLmd][OpzvsNc] < dSmOKY[c5cgpLmd][OpzvsNc +(459 - 458)]) {
                    QwCJ6BtiKOe = dSmOKY[c5cgpLmd][OpzvsNc];
                    dSmOKY[c5cgpLmd][OpzvsNc] = dSmOKY[c5cgpLmd][OpzvsNc +(464 - 463)];
                    dSmOKY[c5cgpLmd][OpzvsNc +(979 - 978)] = QwCJ6BtiKOe;
                }
            }
            RKPBvQLXFT5V = RKPBvQLXFT5V +(376 - 375);
        }
    }
    for (OpzvsNc = (532 - 532); OpzvsNc < J6oMTm; OpzvsNc = OpzvsNc +(819 - 818)) {
        for (RKPBvQLXFT5V = (537 - 537); RKPBvQLXFT5V < KfbRZhg -(743 - 742); RKPBvQLXFT5V = RKPBvQLXFT5V +(558 - 557)) {
            for (c5cgpLmd = (600 - 600); c5cgpLmd < KfbRZhg -(492 - 491) - RKPBvQLXFT5V; c5cgpLmd = c5cgpLmd + (857 - 856)) {
                if (nvrwU6n[c5cgpLmd][OpzvsNc] > nvrwU6n[c5cgpLmd + (957 - 956)][OpzvsNc]) {
                    QwCJ6BtiKOe = nvrwU6n[c5cgpLmd][OpzvsNc];
                    nvrwU6n[c5cgpLmd][OpzvsNc] = nvrwU6n[c5cgpLmd + (835 - 834)][OpzvsNc];
                    nvrwU6n[c5cgpLmd + (393 - 392)][OpzvsNc] = QwCJ6BtiKOe;
                }
            }
        }
    }
    for (c5cgpLmd = (794 - 794); c5cgpLmd < KfbRZhg; c5cgpLmd = c5cgpLmd + (756 - 755)) {
        for (OpzvsNc = (622 - 622); OpzvsNc < J6oMTm; OpzvsNc = OpzvsNc +(478 - 477)) {
            if (nvrwU6n[(739 - 739)][OpzvsNc] == dSmOKY[c5cgpLmd][(395 - 395)]) {
                zpquCfYc6a = c5cgpLmd;
                la7H6Xl = OpzvsNc;
                dwCRYf2 = (285 - 284);
            }
            else
                continue;
        }
    }
    if (dwCRYf2 == (151 - 151))
        printf ("No");
    else
        printf ("%d+%d", zpquCfYc6a, la7H6Xl);
    return (189 - 189);
}

