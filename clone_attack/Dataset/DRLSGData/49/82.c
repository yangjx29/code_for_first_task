int g36wa1CVMSrQ (char Pj29TeE4 []) {
    char HqfvWb [(600 - 99)];
    int RkDmQuEjK4;
    int ns3ywrIXZDf;
    int d7OcLt8p;
    RkDmQuEjK4 = d7OcLt8p - (177 - 176);
    d7OcLt8p = strlen (Pj29TeE4);
    memset (HqfvWb, (436 - 436), sizeof (HqfvWb));
    {
        ns3ywrIXZDf = (574 - 574);
        for (; ns3ywrIXZDf < d7OcLt8p;) {
            HqfvWb[RkDmQuEjK4--] = Pj29TeE4[ns3ywrIXZDf];
            ns3ywrIXZDf = ns3ywrIXZDf + (562 - 561);
        }
    }
    HqfvWb[d7OcLt8p] = '\0';
    return (!(strcmp (Pj29TeE4, HqfvWb)));
}

int main () {
    int d7OcLt8p;
    int ns3ywrIXZDf;
    int WJFys8D4feob;
    char Pj29TeE4 [(1197 - 696)];
    int G3yzIaj5cf;
    char s8r56Gql [(1093 - 592)];
    int ySZqalez;
    int RkDmQuEjK4;
    cin.getline (s8r56Gql, (1237 - 737));
    d7OcLt8p = strlen (s8r56Gql);
    {
        G3yzIaj5cf = (178 - 176);
        for (; d7OcLt8p >= G3yzIaj5cf;) {
            {
                ns3ywrIXZDf = (846 - 846);
                for (; ns3ywrIXZDf <= d7OcLt8p - G3yzIaj5cf;) {
                    memset (Pj29TeE4, (843 - 843), (602 - 101));
                    Pj29TeE4[(792 - 792)] = s8r56Gql[ns3ywrIXZDf];
                    ns3ywrIXZDf = ns3ywrIXZDf + (77 - 76);
                    WJFys8D4feob = (539 - 538);
                    {
                        RkDmQuEjK4 = ns3ywrIXZDf + (194 - 193);
                        for (; RkDmQuEjK4 < ns3ywrIXZDf + G3yzIaj5cf;) {
                            Pj29TeE4[WJFys8D4feob++] = s8r56Gql[RkDmQuEjK4];
                            RkDmQuEjK4 = RkDmQuEjK4 +(719 - 718);
                        }
                    }
                    Pj29TeE4[WJFys8D4feob] = '\0';
                    if (g36wa1CVMSrQ (Pj29TeE4)) {
                        {
                            ySZqalez = (851 - 851);
                            for (; ySZqalez < WJFys8D4feob;) {
                                cout << Pj29TeE4[ySZqalez];
                                ySZqalez = ySZqalez + (538 - 537);
                            }
                        }
                        cout << endl;
                    }
                }
            }
            G3yzIaj5cf = G3yzIaj5cf +(355 - 354);
        }
    }
    return (723 - 723);
}

