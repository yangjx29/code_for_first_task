int iMBIzkJ [(1153 - 153)] [1000];

int ps59GQm (int Mp8lzQKZYk4) {
    int MuDa0kb = iMBIzkJ[(825 - 823)][(622 - 620)];
    if (Mp8lzQKZYk4 == (113 - 112)) {
        return (814 - 814);
    }
    for (int WPdeHo7 = (612 - 611);
    WPdeHo7 <= Mp8lzQKZYk4; WPdeHo7++) {
        int ns3BMIyo6n = (100928 - 928);
        for (int W67wpmu = (229 - 228);
        Mp8lzQKZYk4 >= W67wpmu; W67wpmu = W67wpmu +1) {
            if (ns3BMIyo6n > iMBIzkJ[WPdeHo7][W67wpmu])
                ns3BMIyo6n = iMBIzkJ[WPdeHo7][W67wpmu];
        }
        for (int W67wpmu = (878 - 877);
        Mp8lzQKZYk4 >= W67wpmu; W67wpmu++)
            iMBIzkJ[WPdeHo7][W67wpmu] = iMBIzkJ[WPdeHo7][W67wpmu] - ns3BMIyo6n;
    }
    for (int WPdeHo7 = (236 - 235);
    WPdeHo7 <= Mp8lzQKZYk4; WPdeHo7++) {
        int ns3BMIyo6n = (100066 - 66);
        {
            int W67wpmu = (694 - 693);
            for (; W67wpmu <= Mp8lzQKZYk4;) {
                if (iMBIzkJ[W67wpmu][WPdeHo7] < ns3BMIyo6n)
                    ns3BMIyo6n = iMBIzkJ[W67wpmu][WPdeHo7];
                W67wpmu++;
            }
        }
        for (int W67wpmu = (991 - 990);
        W67wpmu <= Mp8lzQKZYk4; W67wpmu++)
            iMBIzkJ[W67wpmu][WPdeHo7] = iMBIzkJ[W67wpmu][WPdeHo7] - ns3BMIyo6n;
    }
    for (int WPdeHo7 = 2;
    WPdeHo7 < Mp8lzQKZYk4; WPdeHo7++)
        iMBIzkJ[(211 - 210)][WPdeHo7] = iMBIzkJ[(762 - 761)][WPdeHo7 +(992 - 991)];
    for (int WPdeHo7 = 2;
    WPdeHo7 < Mp8lzQKZYk4; WPdeHo7++)
        iMBIzkJ[WPdeHo7][(640 - 639)] = iMBIzkJ[WPdeHo7 +(330 - 329)][(868 - 867)];
    {
        int WPdeHo7 = (757 - 754);
        for (; WPdeHo7 <= Mp8lzQKZYk4;) {
            {
                int W67wpmu = (381 - 378);
                for (; W67wpmu <= Mp8lzQKZYk4;) {
                    iMBIzkJ[WPdeHo7 -(716 - 715)][W67wpmu -(118 - 117)] = iMBIzkJ[WPdeHo7][W67wpmu];
                    W67wpmu++;
                }
            }
            WPdeHo7++;
        }
    }
    return MuDa0kb +ps59GQm (Mp8lzQKZYk4 -1);
}

int main () {
    int Gc0lHYL26;
    cin >> Gc0lHYL26;
    {
        int WPdeHo7 = 1;
        for (; WPdeHo7 <= Gc0lHYL26;) {
            WPdeHo7++;
            {
                int W67wpmu = 1;
                for (; W67wpmu <= Gc0lHYL26;) {
                    {
                        int AUCFza = 1;
                        for (; AUCFza <= Gc0lHYL26;) {
                            cin >> iMBIzkJ[W67wpmu][AUCFza];
                            AUCFza++;
                        }
                    }
                    W67wpmu++;
                }
            }
            cout << ps59GQm (Gc0lHYL26) << endl;
        }
    }
    return (446 - 446);
}

