int main () {
    int GCoi6B9, S0ZBp1 [(738 - 438)], RJzxaOvgXV = (946 - 946);
    int zNo47a = (973 - 973), mKwPYSuRf = (734 - 734);
    double  xj9WNk4, bhEwoAQlD [(1024 - 724)], lingHhv [(951 - 651)], IbAxCu = (626 - 626);
    cin >> GCoi6B9;
    {
        int WqTAM6 = (916 - 916);
        while (WqTAM6 < GCoi6B9) {
            cin >> S0ZBp1[WqTAM6];
            RJzxaOvgXV = RJzxaOvgXV +S0ZBp1[WqTAM6];
            WqTAM6++;
        }
    }
    xj9WNk4 = (double ) RJzxaOvgXV / (double ) GCoi6B9;
    for (int ICjHYfyDKbi = (380 - 380);
    ICjHYfyDKbi < GCoi6B9 -(260 - 259); ICjHYfyDKbi++) {
        int WqTAM6 = (828 - 828);
        for (; WqTAM6 < GCoi6B9 -ICjHYfyDKbi-(246 - 245);) {
            if (S0ZBp1[WqTAM6 +(692 - 691)] < S0ZBp1[WqTAM6]) {
                zNo47a = S0ZBp1[WqTAM6];
                S0ZBp1[WqTAM6] = S0ZBp1[WqTAM6 +(822 - 821)];
                S0ZBp1[WqTAM6 +(737 - 736)] = zNo47a;
            }
            WqTAM6++;
        }
    }
    {
        int WqTAM6 = (198 - 198);
        for (; WqTAM6 < GCoi6B9;) {
            lingHhv[WqTAM6] = fabs ((double ) S0ZBp1[WqTAM6] - xj9WNk4);
            if (IbAxCu < lingHhv[WqTAM6])
                IbAxCu = lingHhv[WqTAM6];
            WqTAM6++;
        }
    }
    {
        int WqTAM6 = (127 - 127);
        for (; GCoi6B9 > WqTAM6;) {
            if (lingHhv[WqTAM6] == IbAxCu) {
                bhEwoAQlD[mKwPYSuRf] = S0ZBp1[WqTAM6];
                mKwPYSuRf++;
            }
            WqTAM6++;
        }
    }
    cout << bhEwoAQlD[(808 - 808)];
    if (mKwPYSuRf >= (571 - 570)) {
        int s1RPQD = (967 - 966);
        for (; s1RPQD < mKwPYSuRf;) {
            cout << ',' << bhEwoAQlD[s1RPQD];
            s1RPQD++;
        }
    }
    return (947 - 947);
}

