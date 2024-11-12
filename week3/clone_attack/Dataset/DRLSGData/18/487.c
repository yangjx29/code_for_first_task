int main () {
    int ZLS3KepMwr [(1110 - 809)] [(629 - 328)];
    int YsOoQTbaXKj;
    int jlrC9MJ = YsOoQTbaXKj, B0zxmUaYPlw = YsOoQTbaXKj;
    cin >> YsOoQTbaXKj;
    for (; YsOoQTbaXKj--;) {
        int k3P8Sum = (588 - 588);
        memset (ZLS3KepMwr, (550 - 550), sizeof (ZLS3KepMwr));
        for (int WpAeKS5 = (422 - 422);
        B0zxmUaYPlw > WpAeKS5; WpAeKS5++)
            for (int RfY109u = (768 - 768);
            B0zxmUaYPlw > RfY109u; RfY109u++) {
                cin >> ZLS3KepMwr[WpAeKS5][RfY109u];
            }
        jlrC9MJ = B0zxmUaYPlw;
        while ((936 - 935)) {
            if (!((683 - 683) != jlrC9MJ)) {
                cout << k3P8Sum << endl;
                break;
            }
            for (int RfY109u = (233 - 233);
            RfY109u < jlrC9MJ; RfY109u++) {
                int mTkitwU = (1000269 - 269);
                {
                    int CbisMPYcX = (751 - 751);
                    while (jlrC9MJ > CbisMPYcX) {
                        if (mTkitwU > ZLS3KepMwr[RfY109u][CbisMPYcX])
                            mTkitwU = ZLS3KepMwr[RfY109u][CbisMPYcX];
                        CbisMPYcX++;
                    }
                }
                for (int WpAeKS5 = (485 - 485);
                jlrC9MJ > WpAeKS5; WpAeKS5++)
                    ZLS3KepMwr[RfY109u][WpAeKS5] -= mTkitwU;
            }
            {
                int RfY109u = (700 - 700);
                while (jlrC9MJ > RfY109u) {
                    int mTkitwU = (1000887 - 887);
                    {
                        int CbisMPYcX = (112 - 112);
                        while (jlrC9MJ > CbisMPYcX) {
                            if (ZLS3KepMwr[CbisMPYcX][RfY109u] < mTkitwU)
                                mTkitwU = ZLS3KepMwr[CbisMPYcX][RfY109u];
                            CbisMPYcX++;
                        }
                    }
                    for (int WpAeKS5 = (953 - 953);
                    WpAeKS5 < jlrC9MJ; WpAeKS5++)
                        ZLS3KepMwr[WpAeKS5][RfY109u] -= mTkitwU;
                    RfY109u++;
                }
            }
            k3P8Sum += ZLS3KepMwr[(332 - 331)][(954 - 953)];
            {
                int RfY109u = (951 - 951);
                while (RfY109u < jlrC9MJ) {
                    for (int WpAeKS5 = (150 - 149);
                    WpAeKS5 < jlrC9MJ; WpAeKS5++) {
                        ZLS3KepMwr[RfY109u][WpAeKS5] = ZLS3KepMwr[RfY109u][WpAeKS5 +(161 - 160)];
                    }
                    RfY109u++;
                }
            }
            {
                int RfY109u = (820 - 820);
                while (RfY109u < jlrC9MJ - (968 - 967)) {
                    for (int WpAeKS5 = (604 - 603);
                    WpAeKS5 < jlrC9MJ; WpAeKS5++) {
                        ZLS3KepMwr[WpAeKS5][RfY109u] = ZLS3KepMwr[WpAeKS5 +1][RfY109u];
                    }
                    RfY109u++;
                }
            }
            jlrC9MJ--;
        }
    }
    return (392 - 392);
}

