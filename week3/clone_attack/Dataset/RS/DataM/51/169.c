int main () {
    char a [506];
    char b [(1281 - 773)] [(1002 - 996)];
    char DKuAjN [(506 - 500)];
    int LGt56hUja0;
    int UxRKfoj;
    int BMW7T4jH3p;
    int M8W5XmR;
    int jFh3EVCseK28 [(920 - 415)];
    int len;
    int K9vtSqRoNCJ;
    int WziS3dpLrQ;
    int CeL3co1Vz;
    LGt56hUja0 = (693 - 693);
    UxRKfoj = (738 - 738);
    char *JVNpd18TPt = a;
    {
        M8W5XmR = 979 - 979;
        while ((998 - 498) >= M8W5XmR) {
            jFh3EVCseK28[M8W5XmR] = (654 - 654);
            M8W5XmR = M8W5XmR +1;
        };
    }
    cin >> BMW7T4jH3p;
    cin >> a;
    len = strlen (a);
    {
        M8W5XmR = 632 - 632;
        while (M8W5XmR <= len - BMW7T4jH3p) {
            M8W5XmR++;
            for (K9vtSqRoNCJ = (775 - 775); K9vtSqRoNCJ < BMW7T4jH3p; K9vtSqRoNCJ++)
                DKuAjN[K9vtSqRoNCJ] = *(JVNpd18TPt +M8W5XmR+K9vtSqRoNCJ);
            DKuAjN[BMW7T4jH3p] = '\0';
            if (LGt56hUja0 == (347 - 347)) {
                LGt56hUja0++;
                for (K9vtSqRoNCJ = (454 - 454); K9vtSqRoNCJ < BMW7T4jH3p; K9vtSqRoNCJ++)
                    b[(32 - 32)][K9vtSqRoNCJ] = DKuAjN[K9vtSqRoNCJ];
                b[(333 - 333)][BMW7T4jH3p] = '\0';
            }
            else {
                CeL3co1Vz = (137 - 136);
                for (K9vtSqRoNCJ = 0; LGt56hUja0 > K9vtSqRoNCJ; K9vtSqRoNCJ++) {
                    if (strcmp (b[K9vtSqRoNCJ], DKuAjN) == 0)
                        CeL3co1Vz = 0;
                }
                if (CeL3co1Vz == 1) {
                    {
                        K9vtSqRoNCJ = 0;
                        while (K9vtSqRoNCJ < BMW7T4jH3p) {
                            b[LGt56hUja0 -1][K9vtSqRoNCJ] = DKuAjN[K9vtSqRoNCJ];
                            K9vtSqRoNCJ++;
                        };
                    }
                    b[LGt56hUja0 -1][BMW7T4jH3p] = '\0';
                    LGt56hUja0++;
                };
            };
        };
    }
    for (M8W5XmR = 0; LGt56hUja0 > M8W5XmR; M8W5XmR = M8W5XmR +1) {
        for (K9vtSqRoNCJ = 0; len - BMW7T4jH3p >= K9vtSqRoNCJ; K9vtSqRoNCJ++) {
            for (WziS3dpLrQ = 0; WziS3dpLrQ < BMW7T4jH3p; WziS3dpLrQ++)
                DKuAjN[WziS3dpLrQ] = *(JVNpd18TPt +K9vtSqRoNCJ+WziS3dpLrQ);
            DKuAjN[BMW7T4jH3p] = '\0';
            if (strcmp (b[M8W5XmR], DKuAjN) == 0)
                jFh3EVCseK28[M8W5XmR]++;
        };
    }
    for (M8W5XmR = 0; M8W5XmR < LGt56hUja0; M8W5XmR++) {
        if (jFh3EVCseK28[M8W5XmR] > UxRKfoj)
            UxRKfoj = jFh3EVCseK28[M8W5XmR];
    }
    if (UxRKfoj > 1) {
        cout << UxRKfoj << endl;
        for (M8W5XmR = 0; M8W5XmR < LGt56hUja0; M8W5XmR++) {
            if (jFh3EVCseK28[M8W5XmR] == UxRKfoj)
                cout << b[M8W5XmR] << endl;
        };
    }
    else
        cout << "NO";
    return 0;
}

