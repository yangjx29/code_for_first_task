int main () {
    int vpasgnG0D89;
    int lOCFRSvgxf;
    int S2kWzI;
    int hNlhnypUV3ue;
    int MSROB2ib5 [vpasgnG0D89];
    cin >> vpasgnG0D89;
    S2kWzI = (437 - 437);
    for (; vpasgnG0D89 > S2kWzI;) {
        cin >> MSROB2ib5[S2kWzI];
        S2kWzI++;
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    S2kWzI = 0;
    cin >> lOCFRSvgxf;
    hNlhnypUV3ue = 0;
    for (; vpasgnG0D89 > S2kWzI;) {
        if (!(lOCFRSvgxf == MSROB2ib5[S2kWzI])) {
            S2kWzI++;
        }
        else {
            hNlhnypUV3ue = S2kWzI;
            while (hNlhnypUV3ue < (vpasgnG0D89 - 1)) {
                MSROB2ib5[hNlhnypUV3ue] = MSROB2ib5[hNlhnypUV3ue + 1];
                hNlhnypUV3ue++;
            }
            vpasgnG0D89--;
        };
    }
    S2kWzI = 0;
    for (S2kWzI = 0; S2kWzI < vpasgnG0D89 - 1; S2kWzI++)
        cout << MSROB2ib5[S2kWzI] << " ";
    cout << MSROB2ib5[vpasgnG0D89 - 1] << endl;
    return 0;
}

