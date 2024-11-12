int main () {
    int MQnF94 [100] [100];
    int QyEbFla, t3KnzZ2Nl;
    int WPTSdIy, Cr21hin, auli51HTck;
    int y29Clt, ZqMef5;
    int fm59BebGz = y29Clt, KWGrmYiE9B5 = t3KnzZ2Nl;
    int SXRr3O [(1053 - 953)] [100];
    int KOkVAp [fm59BebGz] [KWGrmYiE9B5];
    cin >> y29Clt >> ZqMef5;
    for (WPTSdIy = (940 - 940); WPTSdIy < y29Clt; WPTSdIy = WPTSdIy +(136 - 135)) {
        for (Cr21hin = (601 - 601); Cr21hin < ZqMef5; Cr21hin = Cr21hin +(499 - 498))
            cin >> SXRr3O[WPTSdIy][Cr21hin];
    }
    cin >> QyEbFla >> t3KnzZ2Nl;
    for (WPTSdIy = 0; WPTSdIy < QyEbFla; WPTSdIy = WPTSdIy +1) {
        Cr21hin = 0;
        while (Cr21hin < t3KnzZ2Nl) {
            cin >> MQnF94[WPTSdIy][Cr21hin];
            Cr21hin = Cr21hin +1;
        }
    }
    for (Cr21hin = 0; Cr21hin < KWGrmYiE9B5; Cr21hin = Cr21hin +1) {
        for (WPTSdIy = 0; WPTSdIy < fm59BebGz; WPTSdIy = WPTSdIy +1) {
            KOkVAp[WPTSdIy][Cr21hin] = 0;
            for (auli51HTck = 0; auli51HTck < ZqMef5; auli51HTck = auli51HTck + 1)
                KOkVAp[WPTSdIy][Cr21hin] = KOkVAp[WPTSdIy][Cr21hin] + SXRr3O[WPTSdIy][auli51HTck] * MQnF94[auli51HTck][Cr21hin];
        }
    }
    for (WPTSdIy = 0; WPTSdIy < fm59BebGz; WPTSdIy = WPTSdIy +1) {
        {
            Cr21hin = 0;
            while (Cr21hin < KWGrmYiE9B5 -1) {
                cout << KOkVAp[WPTSdIy][Cr21hin] << " ";
                Cr21hin = Cr21hin +1;
            }
        }
        cout << KOkVAp[WPTSdIy][KWGrmYiE9B5 -1];
        cout << endl;
    }
    return 0;
}

