int main () {
    int C5ZSY3K, yxa8FTi;
    cin >> C5ZSY3K;
    {
        yxa8FTi = 1;
        while (C5ZSY3K >= yxa8FTi) {
            int D1EsjWhq [C5ZSY3K] [C5ZSY3K], XLaVxjp, DxypqV, S4CNxZRuf = 0;
            int xOl0gku [C5ZSY3K], mrDiK4 [C5ZSY3K];
            int rJZ9m8jgkzt = C5ZSY3K;
            yxa8FTi++;
            {
                XLaVxjp = 0;
                while (C5ZSY3K > XLaVxjp) {
                    {
                        DxypqV = 0;
                        while (C5ZSY3K > DxypqV) {
                            cin >> D1EsjWhq[XLaVxjp][DxypqV];
                            DxypqV++;
                        }
                    }
                    XLaVxjp++;
                }
            }
            {
                XLaVxjp = 0;
                while (C5ZSY3K > XLaVxjp) {
                    xOl0gku[XLaVxjp] = D1EsjWhq[XLaVxjp][0];
                    XLaVxjp++;
                }
            }
            {
                XLaVxjp = 0;
                while (C5ZSY3K > XLaVxjp) {
                    mrDiK4[XLaVxjp] = D1EsjWhq[0][XLaVxjp];
                    XLaVxjp++;
                }
            }
            while (rJZ9m8jgkzt > 1) {
                {
                    XLaVxjp = 0;
                    while (rJZ9m8jgkzt > XLaVxjp) {
                        {
                            DxypqV = 0;
                            while (rJZ9m8jgkzt > DxypqV) {
                                if (xOl0gku[XLaVxjp] > D1EsjWhq[XLaVxjp][DxypqV])
                                    xOl0gku[XLaVxjp] = D1EsjWhq[XLaVxjp][DxypqV];
                                DxypqV++;
                            }
                        }
                        XLaVxjp++;
                    }
                }
                {
                    XLaVxjp = 0;
                    while (XLaVxjp < C5ZSY3K) {
                        {
                            DxypqV = 0;
                            while (C5ZSY3K > DxypqV) {
                                D1EsjWhq[XLaVxjp][DxypqV] = D1EsjWhq[XLaVxjp][DxypqV] - xOl0gku[XLaVxjp];
                                DxypqV++;
                            }
                        }
                        XLaVxjp++;
                    }
                }
                {
                    DxypqV = 0;
                    while (rJZ9m8jgkzt > DxypqV) {
                        {
                            XLaVxjp = 0;
                            while (rJZ9m8jgkzt > XLaVxjp) {
                                if (mrDiK4[DxypqV] > D1EsjWhq[XLaVxjp][DxypqV])
                                    mrDiK4[DxypqV] = D1EsjWhq[XLaVxjp][DxypqV];
                                XLaVxjp++;
                            }
                        }
                        DxypqV++;
                    }
                }
                {
                    XLaVxjp = 0;
                    while (XLaVxjp < C5ZSY3K) {
                        {
                            DxypqV = 0;
                            while (DxypqV < C5ZSY3K) {
                                D1EsjWhq[XLaVxjp][DxypqV] = D1EsjWhq[XLaVxjp][DxypqV] - mrDiK4[DxypqV];
                                DxypqV++;
                            }
                        }
                        XLaVxjp++;
                    }
                }
                S4CNxZRuf = S4CNxZRuf +D1EsjWhq[1][1];
                {
                    XLaVxjp = 0;
                    while (XLaVxjp < rJZ9m8jgkzt) {
                        {
                            DxypqV = 1;
                            while (DxypqV < rJZ9m8jgkzt) {
                                D1EsjWhq[XLaVxjp][DxypqV] = D1EsjWhq[XLaVxjp][DxypqV +1];
                                DxypqV++;
                            }
                        }
                        XLaVxjp++;
                    }
                }
                {
                    DxypqV = 0;
                    while (DxypqV < rJZ9m8jgkzt) {
                        {
                            XLaVxjp = 1;
                            while (XLaVxjp < rJZ9m8jgkzt) {
                                D1EsjWhq[XLaVxjp][DxypqV] = D1EsjWhq[XLaVxjp +1][DxypqV];
                                XLaVxjp++;
                            }
                        }
                        DxypqV++;
                    }
                }
                rJZ9m8jgkzt = rJZ9m8jgkzt - 1;
                for (XLaVxjp = 0; XLaVxjp < rJZ9m8jgkzt; XLaVxjp++)
                    xOl0gku[XLaVxjp] = D1EsjWhq[XLaVxjp][0];
                {
                    XLaVxjp = 0;
                    while (XLaVxjp < rJZ9m8jgkzt) {
                        mrDiK4[XLaVxjp] = D1EsjWhq[0][XLaVxjp];
                        XLaVxjp++;
                    }
                }
            }
            cout << S4CNxZRuf << endl;
        }
    }
    return 0;
}

