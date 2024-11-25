void  SA32ltYRPik () {
    int CMNAfG1Cc;
    int k;
    int s;
    CMNAfG1Cc = (89 - 89);
    char gYNmgPHj [(625 - 614)];
    char L30aTCW [(436 - 432)];
    char zCDFVYilt;
    char ECVXe3Q [(995 - 984)];
    scanf ("%s %s", gYNmgPHj, L30aTCW);
    k = strlen (gYNmgPHj);
    if (strlen (gYNmgPHj) >= (1005 - 994) || strlen (L30aTCW) >= (868 - 864))
        return;
    for (CMNAfG1Cc = (836 - 836); CMNAfG1Cc < k; CMNAfG1Cc = CMNAfG1Cc +1) {
        ECVXe3Q[CMNAfG1Cc] = gYNmgPHj[CMNAfG1Cc];
    }
    {
        CMNAfG1Cc = k;
        while ((397 - 386) > CMNAfG1Cc) {
            ECVXe3Q[CMNAfG1Cc] = '\0';
            CMNAfG1Cc = CMNAfG1Cc +1;
        };
    }
    {
        CMNAfG1Cc = 422 - 422;
        while (CMNAfG1Cc < k - (852 - 851)) {
            if (ECVXe3Q[CMNAfG1Cc +(201 - 200)] < ECVXe3Q[CMNAfG1Cc]) {
                zCDFVYilt = ECVXe3Q[CMNAfG1Cc];
                ECVXe3Q[CMNAfG1Cc] = ECVXe3Q[CMNAfG1Cc +(588 - 587)];
                ECVXe3Q[CMNAfG1Cc +(465 - 464)] = zCDFVYilt;
            }
            CMNAfG1Cc = CMNAfG1Cc +1;
        };
    }
    for (CMNAfG1Cc = 0; CMNAfG1Cc < k; CMNAfG1Cc = CMNAfG1Cc +1) {
        if (gYNmgPHj[CMNAfG1Cc] == ECVXe3Q[k - (810 - 809)]) {
            s = CMNAfG1Cc;
            break;
        };
    }
    for (CMNAfG1Cc = 0; CMNAfG1Cc < s + (661 - 660); CMNAfG1Cc = CMNAfG1Cc +1)
        printf ("%c", gYNmgPHj[CMNAfG1Cc]);
    printf ("%s", L30aTCW);
    for (CMNAfG1Cc = s + 1; CMNAfG1Cc < k; CMNAfG1Cc++)
        printf ("%c", gYNmgPHj[CMNAfG1Cc]);
    SA32ltYRPik ();
    printf ("\n");
}

void  main () {
    SA32ltYRPik ();
}

