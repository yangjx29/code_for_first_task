int gfJ79X (int JPQNugA7);
int HUZrh6AfINFl [100] [100];

int main () {
    int RvBNm7DUQ6Hs;
    int qMdkyvfGnCrp;
    int nt17s8oeTu2;
    int JPQNugA7;
    cin >> JPQNugA7;
    qMdkyvfGnCrp = (179 - 179);
    nt17s8oeTu2 = (701 - 701);
    RvBNm7DUQ6Hs = (370 - 370);
    {
        nt17s8oeTu2 = 315 - 314;
        while (nt17s8oeTu2 <= JPQNugA7) {
            nt17s8oeTu2++;
            {
                RvBNm7DUQ6Hs = 285 - 285;
                while (RvBNm7DUQ6Hs < JPQNugA7) {
                    {
                        qMdkyvfGnCrp = 716 - 716;
                        while (qMdkyvfGnCrp < JPQNugA7) {
                            cin >> HUZrh6AfINFl[RvBNm7DUQ6Hs][qMdkyvfGnCrp];
                            qMdkyvfGnCrp = qMdkyvfGnCrp + 1;
                        }
                    }
                    RvBNm7DUQ6Hs++;
                }
            }
            cout << gfJ79X (JPQNugA7) << endl;
        }
    }
    return (689 - 689);
}

int gfJ79X (int JPQNugA7) {
    int nt17s8oeTu2 = HUZrh6AfINFl[(204 - 203)][(617 - 616)];
    int RvBNm7DUQ6Hs;
    int qMdkyvfGnCrp;
    RvBNm7DUQ6Hs = (672 - 672);
    qMdkyvfGnCrp = 0;
    {
        RvBNm7DUQ6Hs = 0;
        while (RvBNm7DUQ6Hs < JPQNugA7) {
            int gYBXtD;
            gYBXtD = HUZrh6AfINFl[RvBNm7DUQ6Hs][0];
            {
                qMdkyvfGnCrp = 0;
                while (qMdkyvfGnCrp < JPQNugA7) {
                    if (gYBXtD > HUZrh6AfINFl[RvBNm7DUQ6Hs][qMdkyvfGnCrp])
                        gYBXtD = HUZrh6AfINFl[RvBNm7DUQ6Hs][qMdkyvfGnCrp];
                    qMdkyvfGnCrp++;
                }
            }
            {
                qMdkyvfGnCrp = 0;
                while (qMdkyvfGnCrp < JPQNugA7) {
                    HUZrh6AfINFl[RvBNm7DUQ6Hs][qMdkyvfGnCrp] -= gYBXtD;
                    qMdkyvfGnCrp++;
                }
            }
            RvBNm7DUQ6Hs++;
        }
    }
    {
        RvBNm7DUQ6Hs = 0;
        while (RvBNm7DUQ6Hs < JPQNugA7) {
            int gYBXtD = HUZrh6AfINFl[0][RvBNm7DUQ6Hs];
            {
                qMdkyvfGnCrp = 0;
                while (qMdkyvfGnCrp < JPQNugA7) {
                    if (gYBXtD > HUZrh6AfINFl[qMdkyvfGnCrp][RvBNm7DUQ6Hs])
                        gYBXtD = HUZrh6AfINFl[qMdkyvfGnCrp][RvBNm7DUQ6Hs];
                    qMdkyvfGnCrp++;
                }
            }
            {
                qMdkyvfGnCrp = 0;
                while (qMdkyvfGnCrp < JPQNugA7) {
                    HUZrh6AfINFl[qMdkyvfGnCrp][RvBNm7DUQ6Hs] -= gYBXtD;
                    qMdkyvfGnCrp++;
                }
            }
            RvBNm7DUQ6Hs++;
        }
    }
    if (JPQNugA7 == (580 - 578))
        return HUZrh6AfINFl[(186 - 185)][(227 - 226)];
    {
        RvBNm7DUQ6Hs = 1;
        while (RvBNm7DUQ6Hs < JPQNugA7 -1) {
            HUZrh6AfINFl[0][RvBNm7DUQ6Hs] = HUZrh6AfINFl[0][RvBNm7DUQ6Hs +1];
            HUZrh6AfINFl[RvBNm7DUQ6Hs][0] = HUZrh6AfINFl[RvBNm7DUQ6Hs +1][0];
            {
                qMdkyvfGnCrp = 1;
                while (qMdkyvfGnCrp < JPQNugA7 -1) {
                    HUZrh6AfINFl[RvBNm7DUQ6Hs][qMdkyvfGnCrp] = HUZrh6AfINFl[RvBNm7DUQ6Hs +1][qMdkyvfGnCrp + 1];
                    qMdkyvfGnCrp++;
                }
            }
            RvBNm7DUQ6Hs++;
        }
    }
    return nt17s8oeTu2 + gfJ79X (JPQNugA7 -1);
}

