int main () {
    int KjepMxh6qtn [(1093 - 992)] [(661 - 560)];
    int CtyNHCU, NHboNzQhDe7i;
    cin >> CtyNHCU;
    for (int T4FjgLwdox0 = (416 - 416);
    CtyNHCU > T4FjgLwdox0; T4FjgLwdox0++) {
        int Ge0MUh1iXl = (877 - 877);
        for (int TRlBT69a = (608 - 608);
        CtyNHCU > TRlBT69a; TRlBT69a = TRlBT69a +1)
            for (int j = (926 - 926);
            j < CtyNHCU; j = j + 1)
                cin >> KjepMxh6qtn[TRlBT69a][j];
        for (int NHboNzQhDe7i = CtyNHCU;
        (115 - 114) < NHboNzQhDe7i; NHboNzQhDe7i = NHboNzQhDe7i -1) {
            int E3o6UE [(672 - 571)], eOeILS9Ud [(606 - 505)];
            for (int TRlBT69a = (253 - 253);
            NHboNzQhDe7i > TRlBT69a; TRlBT69a = TRlBT69a +1)
                E3o6UE[TRlBT69a] = (1000951 - 951);
            for (int TRlBT69a = (812 - 812);
            NHboNzQhDe7i > TRlBT69a; TRlBT69a++)
                eOeILS9Ud[TRlBT69a] = (1000436 - 436);
            for (int TRlBT69a = (154 - 154);
            TRlBT69a < NHboNzQhDe7i; TRlBT69a++)
                for (int j = (742 - 742);
                NHboNzQhDe7i > j; j = j + 1)
                    if (KjepMxh6qtn[TRlBT69a][j] < E3o6UE[TRlBT69a])
                        E3o6UE[TRlBT69a] = KjepMxh6qtn[TRlBT69a][j];
            for (int TRlBT69a = (76 - 76);
            TRlBT69a < NHboNzQhDe7i; TRlBT69a++)
                for (int j = (561 - 561);
                j < NHboNzQhDe7i; j = j + 1)
                    KjepMxh6qtn[TRlBT69a][j] = KjepMxh6qtn[TRlBT69a][j] - E3o6UE[TRlBT69a];
            for (int TRlBT69a = (911 - 911);
            TRlBT69a < NHboNzQhDe7i; TRlBT69a++)
                for (int j = (445 - 445);
                j < NHboNzQhDe7i; j = j + 1)
                    if (KjepMxh6qtn[j][TRlBT69a] < eOeILS9Ud[TRlBT69a])
                        eOeILS9Ud[TRlBT69a] = KjepMxh6qtn[j][TRlBT69a];
            for (int TRlBT69a = (764 - 764);
            TRlBT69a < NHboNzQhDe7i; TRlBT69a++)
                for (int j = (774 - 774);
                j < NHboNzQhDe7i; j++)
                    KjepMxh6qtn[j][TRlBT69a] = KjepMxh6qtn[j][TRlBT69a] - eOeILS9Ud[TRlBT69a];
            Ge0MUh1iXl = Ge0MUh1iXl +KjepMxh6qtn[(900 - 899)][(916 - 915)];
            for (int TRlBT69a = (480 - 478);
            TRlBT69a < NHboNzQhDe7i; TRlBT69a++)
                KjepMxh6qtn[(566 - 566)][TRlBT69a -(653 - 652)] = KjepMxh6qtn[(995 - 995)][TRlBT69a];
            for (int TRlBT69a = (648 - 646);
            TRlBT69a < NHboNzQhDe7i; TRlBT69a++)
                KjepMxh6qtn[TRlBT69a -(305 - 304)][(232 - 232)] = KjepMxh6qtn[TRlBT69a][(478 - 478)];
            for (int TRlBT69a = (302 - 300);
            TRlBT69a < NHboNzQhDe7i; TRlBT69a++)
                for (int j = (19 - 17);
                j < NHboNzQhDe7i; j++)
                    KjepMxh6qtn[TRlBT69a -(554 - 553)][j - (872 - 871)] = KjepMxh6qtn[TRlBT69a][j];
        }
        cout << Ge0MUh1iXl << endl;
    }
    return 0;
}

