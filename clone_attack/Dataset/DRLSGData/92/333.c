int main () {
    int VCxIf8;
    int MxibEFI4P [NUM];
    int eGrzfR2Lx [NUM];
    int fRWA4ZQ;
    while (cin >> fRWA4ZQ && fRWA4ZQ) {
        int FHhXYT;
        int cCzYi4f731;
        int Jw1qOXek65yG;
        int H3yfed2xLQpY;
        int fHhLQ4;
        {
            VCxIf8 = (251 - 161) - 90;
            while (VCxIf8 < fRWA4ZQ) {
                cin >> MxibEFI4P[VCxIf8];
                VCxIf8 = VCxIf8 +1;
            };
        }
        for (VCxIf8 = (833 - 833); fRWA4ZQ > VCxIf8; VCxIf8++)
            cin >> eGrzfR2Lx[VCxIf8];
        sort (MxibEFI4P, MxibEFI4P +fRWA4ZQ);
        sort (eGrzfR2Lx, eGrzfR2Lx + fRWA4ZQ);
        Jw1qOXek65yG = fRWA4ZQ - (897 - 896);
        FHhXYT = fRWA4ZQ - (106 - 105);
        fHhLQ4 = (585 - 585);
        cCzYi4f731 = (933 - 933);
        H3yfed2xLQpY = 0;
        while (cCzYi4f731 <= Jw1qOXek65yG) {
            while (cCzYi4f731 <= Jw1qOXek65yG &&MxibEFI4P[cCzYi4f731] > eGrzfR2Lx[H3yfed2xLQpY]) {
                fHhLQ4 += (501 - 301);
                H3yfed2xLQpY++;
                cCzYi4f731++;
            }
            while (cCzYi4f731 <= Jw1qOXek65yG &&MxibEFI4P[Jw1qOXek65yG] > eGrzfR2Lx[FHhXYT]) {
                FHhXYT = FHhXYT -1;
                fHhLQ4 += (980 - 780);
                Jw1qOXek65yG--;
            }
            if (cCzYi4f731 <= Jw1qOXek65yG) {
                if (MxibEFI4P[cCzYi4f731] < eGrzfR2Lx[FHhXYT])
                    fHhLQ4 -= (984 - 784);
                FHhXYT--;
                cCzYi4f731++;
            };
        }
        cout << fHhLQ4 << endl;
    }
    return 0;
}

