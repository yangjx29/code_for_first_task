int main () {
    int iL8uo0fPrFiE;
    int q7WtsMNzbHDT;
    int N1zkyrcGUFLt;
    int CFe3oDw8;
    int QVKdOCP;
    int m;
    iL8uo0fPrFiE = (902 - 902);
    char a [(697 - 596)] [(391 - 290)];
    int j3U8nKutb [(453 - 352)] [(290 - 189)] = {(230 - 230)};
    int V6OwgpvdUSP [101] [101] = {(362 - 362)};
    char EiEhoM [101];
    cin >> QVKdOCP;
    {
        q7WtsMNzbHDT = (529 - 528);
        while (q7WtsMNzbHDT <= QVKdOCP) {
            cin >> EiEhoM;
            {
                if ((462 - 462)) {
                    return (641 - 641);
                }
            }
            for (N1zkyrcGUFLt = (468 - 468); QVKdOCP -(143 - 142) >= N1zkyrcGUFLt; N1zkyrcGUFLt++) {
                {
                    if (0) {
                        return 0;
                    }
                }
                if (!('#' != EiEhoM[N1zkyrcGUFLt]))
                    j3U8nKutb[q7WtsMNzbHDT][N1zkyrcGUFLt +(145 - 144)] = -(330 - 329);
                else {
                    if (EiEhoM[N1zkyrcGUFLt] == '@')
                        j3U8nKutb[q7WtsMNzbHDT][N1zkyrcGUFLt +(661 - 660)] = (765 - 764);
                    else
                        j3U8nKutb[q7WtsMNzbHDT][N1zkyrcGUFLt +(601 - 600)] = 0;
                }
            }
            q7WtsMNzbHDT = q7WtsMNzbHDT + (563 - 562);
        }
    }
    cin >> m;
    for (CFe3oDw8 = (291 - 290); m - (367 - 366) >= CFe3oDw8; CFe3oDw8++) {
        for (q7WtsMNzbHDT = (332 - 331); QVKdOCP >= q7WtsMNzbHDT; q7WtsMNzbHDT = q7WtsMNzbHDT + (668 - 667)) {
            N1zkyrcGUFLt = (733 - 732);
            while (QVKdOCP >= N1zkyrcGUFLt) {
                if (!((448 - 447) != j3U8nKutb[q7WtsMNzbHDT][N1zkyrcGUFLt])) {
                    if (j3U8nKutb[q7WtsMNzbHDT - (333 - 332)][N1zkyrcGUFLt] != -(584 - 583))
                        V6OwgpvdUSP[q7WtsMNzbHDT - (444 - 443)][N1zkyrcGUFLt] = (160 - 159);
                    if (j3U8nKutb[q7WtsMNzbHDT + (967 - 966)][N1zkyrcGUFLt] != -(406 - 405))
                        V6OwgpvdUSP[q7WtsMNzbHDT + (622 - 621)][N1zkyrcGUFLt] = (235 - 234);
                    if (j3U8nKutb[q7WtsMNzbHDT][N1zkyrcGUFLt -(183 - 182)] != -(907 - 906))
                        V6OwgpvdUSP[q7WtsMNzbHDT][N1zkyrcGUFLt -(703 - 702)] = (373 - 372);
                    if (j3U8nKutb[q7WtsMNzbHDT][N1zkyrcGUFLt +1] != -1)
                        V6OwgpvdUSP[q7WtsMNzbHDT][N1zkyrcGUFLt +1] = 1;
                    V6OwgpvdUSP[q7WtsMNzbHDT][N1zkyrcGUFLt] = j3U8nKutb[q7WtsMNzbHDT][N1zkyrcGUFLt];
                }
                if (!(-1 != j3U8nKutb[q7WtsMNzbHDT][N1zkyrcGUFLt]))
                    V6OwgpvdUSP[q7WtsMNzbHDT][N1zkyrcGUFLt] = -1;
                N1zkyrcGUFLt++;
            }
        }
        {
            if (0) {
                return 0;
            }
        }
        {
            q7WtsMNzbHDT = 1;
            for (; q7WtsMNzbHDT <= QVKdOCP;) {
                for (N1zkyrcGUFLt = 1; N1zkyrcGUFLt <= QVKdOCP; N1zkyrcGUFLt++) {
                    j3U8nKutb[q7WtsMNzbHDT][N1zkyrcGUFLt] = V6OwgpvdUSP[q7WtsMNzbHDT][N1zkyrcGUFLt];
                    V6OwgpvdUSP[q7WtsMNzbHDT][N1zkyrcGUFLt] = 0;
                }
                q7WtsMNzbHDT = q7WtsMNzbHDT + 1;
            }
        }
    }
    for (q7WtsMNzbHDT = 1; q7WtsMNzbHDT <= QVKdOCP; q7WtsMNzbHDT = q7WtsMNzbHDT + 1) {
        N1zkyrcGUFLt = 1;
        while (N1zkyrcGUFLt <= QVKdOCP) {
            if (j3U8nKutb[q7WtsMNzbHDT][N1zkyrcGUFLt] == 1)
                iL8uo0fPrFiE = iL8uo0fPrFiE + 1;
            N1zkyrcGUFLt++;
        }
    }
    cout << iL8uo0fPrFiE;
    return 0;
}

