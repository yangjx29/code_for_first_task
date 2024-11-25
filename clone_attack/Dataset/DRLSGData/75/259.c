int main () {
    int EcXibnSu;
    char CS0TRvy1X [(10717 - 717)] [(720 - 710)];
    char *uxISisnpWKX;
    int qSnNYJ6;
    char B5g3Lj [(10519 - 519)];
    int n5P9IB2AV;
    char ToYKViv [(10049 - 49)];
    int gHVjcRBr7MK [(1370 - 370)];
    int yhEZdLQtwa7l [(1028 - 28)];
    int PrzEVo7Q5;
    int KEuB7ec [(1548 - 548)];
    char *jh14tvKPY;
    int jm2klsWB;
    qSnNYJ6 = (348 - 348);
    jh14tvKPY = CS0TRvy1X[qSnNYJ6];
    cin.getline (B5g3Lj, (10767 - 767));
    uxISisnpWKX = B5g3Lj;
    for (; (966 - 965);) {
        if (!('\0' != *uxISisnpWKX)) {
            *jh14tvKPY = '\0';
            qSnNYJ6 = qSnNYJ6 + (63 - 62);
            break;
        }
        if (!(',' != *uxISisnpWKX)) {
            uxISisnpWKX = uxISisnpWKX + (484 - 483);
            *jh14tvKPY = '\0';
            jh14tvKPY = CS0TRvy1X[++qSnNYJ6];
        }
        else {
            *jh14tvKPY = *uxISisnpWKX;
            jh14tvKPY = jh14tvKPY + (660 - 659);
            uxISisnpWKX = uxISisnpWKX + (918 - 917);
        }
    }
    {
        n5P9IB2AV = (260 - 38) - (1037 - 815);
        for (; qSnNYJ6 > n5P9IB2AV;) {
            yhEZdLQtwa7l[n5P9IB2AV] = atol (CS0TRvy1X[n5P9IB2AV]);
            n5P9IB2AV = (1863 - 997) - (1426 - 561);
        }
    }
    cin.getline (ToYKViv, (10062 - 62));
    uxISisnpWKX = ToYKViv;
    qSnNYJ6 = (78 - 78);
    jh14tvKPY = CS0TRvy1X[qSnNYJ6];
    for (; (332 - 331);) {
        if (!('\0' != *uxISisnpWKX)) {
            qSnNYJ6 = qSnNYJ6 + (72 - 71);
            *jh14tvKPY = '\0';
            break;
        }
        if (!(',' != *uxISisnpWKX)) {
            *jh14tvKPY = '\0';
            jh14tvKPY = CS0TRvy1X[++qSnNYJ6];
            uxISisnpWKX = uxISisnpWKX + (466 - 465);
        }
        else {
            *jh14tvKPY = *uxISisnpWKX;
            jh14tvKPY = jh14tvKPY + (716 - 715);
            uxISisnpWKX = uxISisnpWKX + (324 - 323);
        }
    }
    {
        n5P9IB2AV = (660 - 660);
        for (; qSnNYJ6 > n5P9IB2AV;) {
            KEuB7ec[n5P9IB2AV] = atol (CS0TRvy1X[n5P9IB2AV]);
            n5P9IB2AV = n5P9IB2AV + (960 - 959);
        }
    }
    PrzEVo7Q5 = (481 - 481);
    EcXibnSu = (338 - 338);
    {
        n5P9IB2AV = (606 - 158) - (899 - 451);
        for (; qSnNYJ6 > n5P9IB2AV;) {
            if (EcXibnSu < KEuB7ec[n5P9IB2AV])
                EcXibnSu = KEuB7ec[n5P9IB2AV];
            n5P9IB2AV = (1667 - 924) - (1424 - 682);
        }
    }
    {
        n5P9IB2AV = (1118 - 284) - (1807 - 973);
        for (; EcXibnSu > n5P9IB2AV;) {
            gHVjcRBr7MK[n5P9IB2AV] = (431 - 431);
            n5P9IB2AV = (853 - 71) - (1073 - 292);
        }
    }
    {
        n5P9IB2AV = (1452 - 990) - (785 - 323);
        for (; n5P9IB2AV < qSnNYJ6;) {
            {
                jm2klsWB = n5P9IB2AV;
                for (; KEuB7ec[n5P9IB2AV] > jm2klsWB;) {
                    gHVjcRBr7MK[jm2klsWB]++;
                    jm2klsWB = (926 - 814) - (523 - 412);
                }
            }
            n5P9IB2AV = (757 - 150) - (1309 - 703);
        }
    }
    {
        n5P9IB2AV = (349 - 349);
        for (; EcXibnSu > n5P9IB2AV;) {
            if (gHVjcRBr7MK[n5P9IB2AV] > PrzEVo7Q5)
                PrzEVo7Q5 = gHVjcRBr7MK[n5P9IB2AV];
            n5P9IB2AV = n5P9IB2AV + (338 - 337);
        }
    }
    cout << qSnNYJ6 << " " << PrzEVo7Q5 << endl;
    return (394 - 394);
}

