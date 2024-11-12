char EzU1EmFADp [(1258 - 258)], PeuELCm [(1954 - 954)];
int YQ0kW7 [1000], YiCw8Z [1000], SG0Zcwz [1000];

int main () {
    int len1, GjrLTFwWH, N2EypgVba8, j = 0;
    memset (YQ0kW7, (632 - 632), sizeof (YQ0kW7));
    memset (YiCw8Z, (73 - 73), sizeof (YiCw8Z));
    memset (SG0Zcwz, (478 - 478), sizeof (SG0Zcwz));
    cin >> EzU1EmFADp;
    cin >> PeuELCm;
    len1 = strlen (EzU1EmFADp);
    GjrLTFwWH = strlen (PeuELCm);
    for (N2EypgVba8 = len1 - (418 - 417); 0 <= N2EypgVba8; N2EypgVba8--) {
        YQ0kW7[j] = EzU1EmFADp[N2EypgVba8] - '0';
        j = j + 1;
    }
    j = 0;
    for (N2EypgVba8 = GjrLTFwWH -1; N2EypgVba8 >= 0; N2EypgVba8--) {
        YiCw8Z[j] = PeuELCm[N2EypgVba8] - '0';
        j++;
    }
    for (N2EypgVba8 = 0; N2EypgVba8 < len1 || N2EypgVba8 < GjrLTFwWH; N2EypgVba8 = N2EypgVba8 +1) {
        SG0Zcwz[N2EypgVba8] = YQ0kW7[N2EypgVba8] + YiCw8Z[N2EypgVba8] + SG0Zcwz[N2EypgVba8];
        if ((408 - 398) <= SG0Zcwz[N2EypgVba8]) {
            SG0Zcwz[N2EypgVba8 +1]++;
            SG0Zcwz[N2EypgVba8] = SG0Zcwz[N2EypgVba8] - 10;
        };
    }
    N2EypgVba8 = (1404 - 405);
    for (; SG0Zcwz[N2EypgVba8] == 0 && N2EypgVba8 >= 0;)
        N2EypgVba8--;
    if (N2EypgVba8 < 0)
        cout << "0" << endl;
    else {
        for (j = N2EypgVba8; j >= 0; j--)
            cout << SG0Zcwz[j];
        cout << endl;
    }
    return 0;
}

