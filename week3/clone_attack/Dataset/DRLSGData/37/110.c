int main () {
    int YEcDiSPa, wU7vXB0W, BIZPe3;
    cin >> YEcDiSPa;
    {
        wU7vXB0W = (174 - 174);
        for (; wU7vXB0W < YEcDiSPa;) {
            int sZBr8XcE;
            int pHxjoUY6Sy [26];
            char dCn8IZXwcv [(100158 - 158)];
            memset (pHxjoUY6Sy, (946 - 946), sizeof (pHxjoUY6Sy));
            sZBr8XcE = strlen (dCn8IZXwcv);
            cin >> dCn8IZXwcv;
            {
                BIZPe3 = (705 - 705);
                for (; sZBr8XcE > BIZPe3;) {
                    pHxjoUY6Sy[dCn8IZXwcv[BIZPe3] - 'a']++;
                    BIZPe3++;
                }
            }
            for (BIZPe3 = (43 - 43); BIZPe3 < sZBr8XcE; BIZPe3++) {
                if (pHxjoUY6Sy[dCn8IZXwcv[BIZPe3] - 'a'] == 1) {
                    cout << dCn8IZXwcv[BIZPe3] << endl;
                    break;
                }
            }
            if (BIZPe3 == sZBr8XcE)
                cout << "no" << endl;
            wU7vXB0W++;
        }
    }
    return 0;
}

