int main () {
    int xa4UXj1PlMCT [21] [21] = {0};
    int NdQbAByH [500] [2] = {0};
    int nJg4v6;
    int vxzeK5D9WdGN;
    int SpHzyJ2VDv;
    int IM3hQKeYymc;
    int oy1qEreHl8;
    nJg4v6 = 0;
    cin >> vxzeK5D9WdGN >> SpHzyJ2VDv;
    for (IM3hQKeYymc = 1; IM3hQKeYymc <= vxzeK5D9WdGN; IM3hQKeYymc++) {
        oy1qEreHl8 = 1;
        for (; SpHzyJ2VDv >= oy1qEreHl8;) {
            cin >> xa4UXj1PlMCT[IM3hQKeYymc][oy1qEreHl8];
            oy1qEreHl8++;
        }
    }
    {
        IM3hQKeYymc = 1;
        for (; IM3hQKeYymc <= vxzeK5D9WdGN;) {
            {
                oy1qEreHl8 = 1;
                for (; oy1qEreHl8 <= SpHzyJ2VDv;) {
                    if (xa4UXj1PlMCT[IM3hQKeYymc][oy1qEreHl8] >= xa4UXj1PlMCT[IM3hQKeYymc -1][oy1qEreHl8] && xa4UXj1PlMCT[IM3hQKeYymc][oy1qEreHl8] >= xa4UXj1PlMCT[IM3hQKeYymc +1][oy1qEreHl8] && xa4UXj1PlMCT[IM3hQKeYymc][oy1qEreHl8] >= xa4UXj1PlMCT[IM3hQKeYymc][oy1qEreHl8 - 1] && xa4UXj1PlMCT[IM3hQKeYymc][oy1qEreHl8] >= xa4UXj1PlMCT[IM3hQKeYymc][oy1qEreHl8 + 1]) {
                        NdQbAByH[nJg4v6][0] = IM3hQKeYymc;
                        NdQbAByH[nJg4v6][1] = oy1qEreHl8;
                        nJg4v6++;
                    }
                    oy1qEreHl8++;
                }
            }
            IM3hQKeYymc++;
        }
    }
    for (IM3hQKeYymc = 0; IM3hQKeYymc < nJg4v6; IM3hQKeYymc++) {
        cout << NdQbAByH[IM3hQKeYymc][0] - 1 << " " << NdQbAByH[IM3hQKeYymc][1] - 1 << '\n';
    }
    return 0;
}

