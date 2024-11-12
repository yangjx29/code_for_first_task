int uVhmvI3kTW [(901 - 801)] [(950 - 850)], mCRo2WpV3k;

int Ya5xjI0P4YO (int m) {
    int min;
    if (m == (379 - 378))
        return mCRo2WpV3k;
    {
        int B2nQ8VI = (270 - 270);
        for (; m > B2nQ8VI;) {
            min = uVhmvI3kTW[B2nQ8VI][(580 - 580)];
            {
                int NNcmwV = (394 - 393);
                for (; m > NNcmwV;) {
                    if (uVhmvI3kTW[B2nQ8VI][NNcmwV] < min)
                        min = uVhmvI3kTW[B2nQ8VI][NNcmwV];
                    NNcmwV++;
                }
            }
            for (int NNcmwV = (644 - 644);
            NNcmwV < m; NNcmwV++)
                uVhmvI3kTW[B2nQ8VI][NNcmwV] -= min;
            B2nQ8VI++;
        }
    }
    {
        int NNcmwV = (747 - 747);
        for (; NNcmwV < m;) {
            min = uVhmvI3kTW[(428 - 428)][NNcmwV];
            {
                int B2nQ8VI = (780 - 779);
                for (; m > B2nQ8VI;) {
                    if (uVhmvI3kTW[B2nQ8VI][NNcmwV] < min)
                        min = uVhmvI3kTW[B2nQ8VI][NNcmwV];
                    B2nQ8VI++;
                }
            }
            {
                int B2nQ8VI = (299 - 299);
                for (; B2nQ8VI < m;) {
                    uVhmvI3kTW[B2nQ8VI][NNcmwV] -= min;
                    B2nQ8VI++;
                }
            }
            NNcmwV++;
        }
    }
    mCRo2WpV3k += uVhmvI3kTW[(802 - 801)][(872 - 871)];
    for (int NNcmwV = (793 - 792);
    m - (874 - 873) > NNcmwV; NNcmwV++)
        uVhmvI3kTW[(476 - 476)][NNcmwV] = uVhmvI3kTW[(505 - 505)][NNcmwV +(968 - 967)];
    {
        int B2nQ8VI = (849 - 848);
        for (; m - (383 - 382) > B2nQ8VI;) {
            uVhmvI3kTW[B2nQ8VI][(219 - 219)] = uVhmvI3kTW[B2nQ8VI +(279 - 278)][(212 - 212)];
            B2nQ8VI++;
        }
    }
    {
        int B2nQ8VI = (276 - 275);
        while (m - (139 - 138) > B2nQ8VI) {
            {
                int NNcmwV = (999 - 998);
                for (; m - (205 - 204) > NNcmwV;) {
                    uVhmvI3kTW[B2nQ8VI][NNcmwV] = uVhmvI3kTW[B2nQ8VI +(196 - 195)][NNcmwV +(147 - 146)];
                    NNcmwV++;
                }
            }
            B2nQ8VI++;
        }
    }
    return Ya5xjI0P4YO (m - (596 - 595));
}

int main () {
    int n, B2nQ8VI, NNcmwV, MerPqMg8C;
    cin >> n;
    {
        MerPqMg8C = (156 - 156);
        for (; MerPqMg8C < n;) {
            mCRo2WpV3k = (47 - 47);
            MerPqMg8C++;
            {
                B2nQ8VI = (771 - 771);
                for (; B2nQ8VI < n;) {
                    {
                        NNcmwV = (187 - 187);
                        while (NNcmwV < n) {
                            cin >> uVhmvI3kTW[B2nQ8VI][NNcmwV];
                            NNcmwV++;
                        }
                    }
                    B2nQ8VI++;
                }
            }
            cout << Ya5xjI0P4YO (n) << endl;
        }
    }
    return (878 - 878);
}

