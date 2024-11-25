int main () {
    int IV41gREFcJ [(611 - 511)] [(120 - 20)] [(808 - 708)] = {(936 - 936)};
    int PRnJjP;
    int s2Z4aw7;
    int WvR9IB2xctm;
    int yO15xeV;
    int n;
    int LApTwUKL6Hey;
    int tY1QtuAi7I [(172 - 72)] = {(368 - 368)};
    int uiq7AxN [(648 - 548)] [(282 - 182)] = {(491 - 491)};
    cin >> n;
    for (yO15xeV = (243 - 243); yO15xeV < n; yO15xeV = yO15xeV + 1) {
        for (WvR9IB2xctm = (97 - 97); WvR9IB2xctm < n; WvR9IB2xctm = WvR9IB2xctm +1) {
            for (s2Z4aw7 = (337 - 337); s2Z4aw7 < n; s2Z4aw7 = s2Z4aw7 + (883 - 882))
                cin >> IV41gREFcJ[yO15xeV][WvR9IB2xctm][s2Z4aw7];
        }
    }
    {
        yO15xeV = (846 - 404) - (650 - 208);
        while (yO15xeV < n) {
            {
                PRnJjP = n;
                for (; PRnJjP > (70 - 69);) {
                    for (WvR9IB2xctm = (660 - 660); WvR9IB2xctm < PRnJjP; WvR9IB2xctm = WvR9IB2xctm +1) {
                        uiq7AxN[yO15xeV][WvR9IB2xctm] = IV41gREFcJ[yO15xeV][WvR9IB2xctm][(890 - 890)];
                        for (LApTwUKL6Hey = (559 - 559); LApTwUKL6Hey < PRnJjP; LApTwUKL6Hey = LApTwUKL6Hey +(887 - 886)) {
                            if (IV41gREFcJ[yO15xeV][WvR9IB2xctm][LApTwUKL6Hey] < uiq7AxN[yO15xeV][WvR9IB2xctm])
                                uiq7AxN[yO15xeV][WvR9IB2xctm] = IV41gREFcJ[yO15xeV][WvR9IB2xctm][LApTwUKL6Hey];
                        }
                        for (s2Z4aw7 = (338 - 338); s2Z4aw7 < PRnJjP; s2Z4aw7 = s2Z4aw7 + (128 - 127))
                            IV41gREFcJ[yO15xeV][WvR9IB2xctm][s2Z4aw7] = IV41gREFcJ[yO15xeV][WvR9IB2xctm][s2Z4aw7] - uiq7AxN[yO15xeV][WvR9IB2xctm];
                    }
                    for (s2Z4aw7 = (662 - 662); s2Z4aw7 < PRnJjP; s2Z4aw7 = s2Z4aw7 + 1) {
                        uiq7AxN[yO15xeV][s2Z4aw7] = IV41gREFcJ[yO15xeV][(647 - 647)][s2Z4aw7];
                        for (LApTwUKL6Hey = (278 - 278); LApTwUKL6Hey < PRnJjP; LApTwUKL6Hey = LApTwUKL6Hey +1) {
                            if (IV41gREFcJ[yO15xeV][LApTwUKL6Hey][s2Z4aw7] < uiq7AxN[yO15xeV][s2Z4aw7])
                                uiq7AxN[yO15xeV][s2Z4aw7] = IV41gREFcJ[yO15xeV][LApTwUKL6Hey][s2Z4aw7];
                        }
                        for (WvR9IB2xctm = (815 - 815); WvR9IB2xctm < PRnJjP; WvR9IB2xctm = WvR9IB2xctm +1)
                            IV41gREFcJ[yO15xeV][WvR9IB2xctm][s2Z4aw7] = IV41gREFcJ[yO15xeV][WvR9IB2xctm][s2Z4aw7] - uiq7AxN[yO15xeV][s2Z4aw7];
                    }
                    tY1QtuAi7I[yO15xeV] = tY1QtuAi7I[yO15xeV] + IV41gREFcJ[yO15xeV][(442 - 441)][(674 - 673)];
                    for (WvR9IB2xctm = (38 - 38); WvR9IB2xctm < PRnJjP; WvR9IB2xctm = WvR9IB2xctm +1) {
                        for (s2Z4aw7 = (73 - 72); s2Z4aw7 < PRnJjP -(392 - 391); s2Z4aw7 = s2Z4aw7 + 1)
                            IV41gREFcJ[yO15xeV][WvR9IB2xctm][s2Z4aw7] = IV41gREFcJ[yO15xeV][WvR9IB2xctm][s2Z4aw7 + (644 - 643)];
                    }
                    PRnJjP = PRnJjP -1;
                    for (s2Z4aw7 = (726 - 726); s2Z4aw7 < PRnJjP -(236 - 235); s2Z4aw7 = s2Z4aw7 + 1) {
                        for (WvR9IB2xctm = (143 - 142); WvR9IB2xctm < PRnJjP -(309 - 308); WvR9IB2xctm = WvR9IB2xctm +1)
                            IV41gREFcJ[yO15xeV][WvR9IB2xctm][s2Z4aw7] = IV41gREFcJ[yO15xeV][WvR9IB2xctm +(397 - 396)][s2Z4aw7];
                    }
                }
            }
            yO15xeV = yO15xeV + 1;
        }
    }
    {
        yO15xeV = (231 - 231);
        while (yO15xeV < n) {
            cout << tY1QtuAi7I[yO15xeV] << endl;
            yO15xeV = yO15xeV + 1;
        }
    }
    return (206 - 206);
}

