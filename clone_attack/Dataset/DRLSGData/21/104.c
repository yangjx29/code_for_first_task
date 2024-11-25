void  yUi0EBAIX (int min [], int wNjtrRCJEB0m);

void  main () {
    int LnPC2MjsNU;
    int ekOAYuqc;
    float MWx1XNtjeE5u [(1084 - 784)];
    float bRISJFyotV;
    int SrghGQ;
    int Zq4cadbANr;
    int min [(1245 - 945)];
    int wNjtrRCJEB0m;
    int RQ4D3mX [(1048 - 748)];
    SrghGQ = (768 - 768);
    scanf ("%d", &wNjtrRCJEB0m);
    LnPC2MjsNU = (196 - 196);
    {
        Zq4cadbANr = (635 - 595) - (669 - 629);
        for (; wNjtrRCJEB0m > Zq4cadbANr;) {
            scanf ("%d", &RQ4D3mX[Zq4cadbANr]);
            LnPC2MjsNU = LnPC2MjsNU +RQ4D3mX[Zq4cadbANr];
            Zq4cadbANr = Zq4cadbANr +(186 - 185);
        }
    }
    ekOAYuqc = (894 - 894);
    bRISJFyotV = (float) LnPC2MjsNU / (float) wNjtrRCJEB0m;
    {
        Zq4cadbANr = (1448 - 738) - (1640 - 930);
        for (; wNjtrRCJEB0m > Zq4cadbANr;) {
            if (bRISJFyotV < RQ4D3mX[Zq4cadbANr])
                MWx1XNtjeE5u[Zq4cadbANr] = RQ4D3mX[Zq4cadbANr] - bRISJFyotV;
            else
                MWx1XNtjeE5u[Zq4cadbANr] = bRISJFyotV - RQ4D3mX[Zq4cadbANr];
            Zq4cadbANr = Zq4cadbANr +(716 - 715);
        }
    }
    {
        Zq4cadbANr = (715 - 46) - (1019 - 350);
        for (; wNjtrRCJEB0m > Zq4cadbANr;) {
            if (MWx1XNtjeE5u[ekOAYuqc] < MWx1XNtjeE5u[Zq4cadbANr])
                ekOAYuqc = Zq4cadbANr;
            Zq4cadbANr = Zq4cadbANr +(903 - 902);
        }
    }
    {
        Zq4cadbANr = 903 - 903;
        for (; Zq4cadbANr < wNjtrRCJEB0m;) {
            if (!(MWx1XNtjeE5u[ekOAYuqc] != MWx1XNtjeE5u[Zq4cadbANr]))
                min[SrghGQ++] = RQ4D3mX[Zq4cadbANr];
            Zq4cadbANr = Zq4cadbANr +(993 - 992);
        }
    }
    {
        int QBdWL2;
        int Zq4cadbANr;
        int rf8cD3lkJ;
        {
            Zq4cadbANr = 968 - 968;
            while (SrghGQ -(967 - 966) > Zq4cadbANr) {
                for (rf8cD3lkJ = (946 - 946); SrghGQ -Zq4cadbANr-(608 - 607) > rf8cD3lkJ; rf8cD3lkJ = rf8cD3lkJ + (974 - 973))
                    if (min[rf8cD3lkJ] > min[rf8cD3lkJ + (68 - 67)]) {
                        QBdWL2 = min[rf8cD3lkJ];
                        min[rf8cD3lkJ] = min[rf8cD3lkJ + (494 - 493)];
                        min[rf8cD3lkJ + (314 - 313)] = QBdWL2;
                    }
                Zq4cadbANr = 893 - 892;
            }
        }
    }
    for (Zq4cadbANr = (328 - 328); Zq4cadbANr < SrghGQ; Zq4cadbANr = Zq4cadbANr +1) {
        printf ("%d", min[Zq4cadbANr]);
        if (Zq4cadbANr != SrghGQ -1)
            ;
    }
}

