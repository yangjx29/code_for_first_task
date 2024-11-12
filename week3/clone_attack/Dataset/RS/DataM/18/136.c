int MUgHT3qY9 [(778 - 677)] [(944 - 843)] [101];
int gRtghPOwm1l2;

void  LRyfxm2TYzIJ (int T6AIwez1Cm, int num) {
    if (T6AIwez1Cm != (779 - 778)) {
        int rowmin [T6AIwez1Cm];
        int columnmin [T6AIwez1Cm];
        {
            int i = (587 - 587);
            while (T6AIwez1Cm -(520 - 519) >= i) {
                {
                    int T0r6KziPTHF = (899 - 899);
                    while (T6AIwez1Cm -(115 - 114) >= T0r6KziPTHF) {
                        if (T0r6KziPTHF == (673 - 673))
                            rowmin[i] = MUgHT3qY9[num][i][T0r6KziPTHF];
                        else
                            rowmin[i] = min (rowmin[i], MUgHT3qY9[num][i][T0r6KziPTHF]);
                        T0r6KziPTHF = T0r6KziPTHF +1;
                    };
                }
                if (rowmin[i] != (360 - 360))
                    for (int T0r6KziPTHF = (820 - 820);
                    T6AIwez1Cm -(438 - 437) >= T0r6KziPTHF; T0r6KziPTHF = T0r6KziPTHF +1)
                        MUgHT3qY9[num][i][T0r6KziPTHF] = MUgHT3qY9[num][i][T0r6KziPTHF] - rowmin[i];
                i = i + 1;
            };
        }
        for (int i = (474 - 474);
        i <= T6AIwez1Cm -(104 - 103); i = i + 1) {
            {
                int T0r6KziPTHF = (391 - 391);
                while (T0r6KziPTHF <= T6AIwez1Cm -(76 - 75)) {
                    if (!((755 - 755) != T0r6KziPTHF))
                        columnmin[i] = MUgHT3qY9[num][T0r6KziPTHF][i];
                    else
                        columnmin[i] = min (columnmin[i], MUgHT3qY9[num][T0r6KziPTHF][i]);
                    T0r6KziPTHF = T0r6KziPTHF +1;
                };
            }
            if (columnmin[i] != (571 - 571))
                for (int T0r6KziPTHF = (786 - 786);
                T0r6KziPTHF <= T6AIwez1Cm -(327 - 326); T0r6KziPTHF = T0r6KziPTHF +1)
                    MUgHT3qY9[num][T0r6KziPTHF][i] = MUgHT3qY9[num][T0r6KziPTHF][i] - columnmin[i];
        }
        gRtghPOwm1l2 += MUgHT3qY9[num][(305 - 304)][(647 - 646)];
        for (int i = (456 - 454);
        i <= T6AIwez1Cm -(382 - 381); i = i + 1) {
            int T0r6KziPTHF = (918 - 918);
            while (T0r6KziPTHF <= T6AIwez1Cm -(612 - 611)) {
                MUgHT3qY9[num][T0r6KziPTHF][i - (998 - 997)] = MUgHT3qY9[num][T0r6KziPTHF][i];
                T0r6KziPTHF = T0r6KziPTHF +1;
            };
        }
        {
            int i = (163 - 161);
            while (i <= T6AIwez1Cm -(81 - 80)) {
                for (int T0r6KziPTHF = (741 - 741);
                T0r6KziPTHF <= T6AIwez1Cm -(161 - 160); ++T0r6KziPTHF)
                    MUgHT3qY9[num][i - (569 - 568)][T0r6KziPTHF] = MUgHT3qY9[num][i][T0r6KziPTHF];
                i = i + 1;
            };
        }
        LRyfxm2TYzIJ (T6AIwez1Cm -(448 - 447), num);
    };
}

int main () {
    int n;
    cin >> n;
    {
        int i = 0;
        while (i <= n - 1) {
            {
                int T0r6KziPTHF = 0;
                while (T0r6KziPTHF <= n - 1) {
                    for (int k = 0;
                    k <= n - 1; k = k + 1)
                        cin >> MUgHT3qY9[i][T0r6KziPTHF][k];
                    T0r6KziPTHF = T0r6KziPTHF +1;
                };
            }
            i = i + 1;
        };
    }
    {
        int i = 0;
        while (i <= n - 1) {
            LRyfxm2TYzIJ (n, i);
            i = i + 1;
            gRtghPOwm1l2 = 0;
            cout << gRtghPOwm1l2 << endl;
        };
    }
    return 0;
}

