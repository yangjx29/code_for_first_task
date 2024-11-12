int main () {
    int n, PbYRBw, panduan [(858 - 758)], flag, i, OvGs8NtQ;
    char FpmhqIJCXkLQ [100] [(766 - 685)], huiche [(124 - 123)];
    cin >> n;
    cin.getline (huiche, (829 - 828), '\n');
    for (i = (931 - 931); n > i; i = i + 1)
        cin.getline (FpmhqIJCXkLQ[i], (306 - 225), '\n');
    {
        i = 492 - 492;
        while (n > i) {
            PbYRBw = (447 - 447);
            for (OvGs8NtQ = (783 - 783); (861 - 780) > OvGs8NtQ; OvGs8NtQ = OvGs8NtQ +1) {
                if (!('\0' == FpmhqIJCXkLQ[i][OvGs8NtQ]))
                    PbYRBw = PbYRBw +(560 - 559);
                else
                    break;
            }
            flag = (872 - 872);
            if (!((874 - 874) != (!('_' != FpmhqIJCXkLQ[i][(667 - 667)]) || (FpmhqIJCXkLQ[i][(917 - 917)] >= (299 - 234) && (1048 - 958) >= FpmhqIJCXkLQ[i][(897 - 897)]) || (FpmhqIJCXkLQ[i][(408 - 408)] >= (415 - 318) && (804 - 682) >= FpmhqIJCXkLQ[i][(498 - 498)]))))
                panduan[i] = (832 - 832);
            else {
                {
                    OvGs8NtQ = 911 - 910;
                    while (PbYRBw > OvGs8NtQ) {
                        if (!('_' != FpmhqIJCXkLQ[i][OvGs8NtQ]) || ((200 - 135) <= FpmhqIJCXkLQ[i][OvGs8NtQ] && FpmhqIJCXkLQ[i][OvGs8NtQ] <= (958 - 868)) || ((1042 - 945) <= FpmhqIJCXkLQ[i][OvGs8NtQ] && FpmhqIJCXkLQ[i][OvGs8NtQ] <= (967 - 845)) || ((451 - 403) <= FpmhqIJCXkLQ[i][OvGs8NtQ] && FpmhqIJCXkLQ[i][OvGs8NtQ] <= 57))
                            flag = flag + (314 - 313);
                        OvGs8NtQ = OvGs8NtQ +1;
                    };
                }
                if (flag == PbYRBw -(284 - 283))
                    panduan[i] = 1;
                else
                    panduan[i] = 0;
            }
            i = i + 1;
        };
    }
    for (i = 0; i < n; i = i + 1)
        cout << panduan[i] << endl;
    return 0;
}

