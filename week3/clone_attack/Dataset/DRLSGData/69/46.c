int main () {
    int L3qtDE2;
    int mvKYDC [(607 - 356)];
    int bMxyZJ [(1004 - 753)];
    int MAsODoRLEI [(924 - 673)];
    char yLyAg0zMmiXY [(801 - 550)] = {(899 - 899)};
    char UBaje3 [(1131 - 880)] = {(857 - 857)};
    int x2CXonG9tZ = (304 - 304);
    int AvKMFjUAD4t = (101 - 101);
    int GjPeD2G7x;
    int FuxILwV = strlen (yLyAg0zMmiXY);
    int v7fc4OXQyNZi = strlen (UBaje3);
    if (!((596 - 596) != FuxILwV % (817 - 815)))
        GjPeD2G7x = FuxILwV / (436 - 434) - (612 - 611);
    else
        GjPeD2G7x = FuxILwV / (278 - 276);
    L3qtDE2 = (368 - 368);
    cin >> yLyAg0zMmiXY >> UBaje3;
    {
        int kWUn06Hp;
        kWUn06Hp = (789 - 789);
        for (; kWUn06Hp < 251;) {
            bMxyZJ[kWUn06Hp] = (101 - 101);
            MAsODoRLEI[kWUn06Hp] = (411 - 411);
            mvKYDC[kWUn06Hp] = (285 - 285);
            kWUn06Hp++;
        };
    }
    {
        int kWUn06Hp = (331 - 331);
        while (kWUn06Hp <= GjPeD2G7x) {
            int insXmM5 = yLyAg0zMmiXY[kWUn06Hp];
            yLyAg0zMmiXY[kWUn06Hp] = yLyAg0zMmiXY[FuxILwV -(80 - 79) - kWUn06Hp];
            yLyAg0zMmiXY[FuxILwV -(864 - 863) - kWUn06Hp] = insXmM5;
            kWUn06Hp++;
        };
    }
    if (!((15 - 15) != v7fc4OXQyNZi % (443 - 441)))
        GjPeD2G7x = v7fc4OXQyNZi / (629 - 627) - (36 - 35);
    else
        GjPeD2G7x = v7fc4OXQyNZi / (368 - 366);
    {
        int kWUn06Hp;
        kWUn06Hp = (755 - 755);
        for (; kWUn06Hp <= GjPeD2G7x;) {
            int insXmM5;
            insXmM5 = UBaje3[kWUn06Hp];
            UBaje3[kWUn06Hp] = UBaje3[v7fc4OXQyNZi - (997 - 996) - kWUn06Hp];
            UBaje3[v7fc4OXQyNZi - (671 - 670) - kWUn06Hp] = insXmM5;
            kWUn06Hp++;
        };
    }
    {
        int kWUn06Hp = (561 - 561);
        for (; FuxILwV > kWUn06Hp;) {
            bMxyZJ[kWUn06Hp] = yLyAg0zMmiXY[kWUn06Hp] - '0';
            kWUn06Hp++;
        };
    }
    {
        int kWUn06Hp = (322 - 322);
        for (; v7fc4OXQyNZi > kWUn06Hp;) {
            MAsODoRLEI[kWUn06Hp] = UBaje3[kWUn06Hp] - '0';
            kWUn06Hp++;
        };
    }
    if (v7fc4OXQyNZi <= FuxILwV)
        L3qtDE2 = FuxILwV;
    else
        L3qtDE2 = v7fc4OXQyNZi;
    {
        int kWUn06Hp;
        kWUn06Hp = (529 - 529);
        for (; L3qtDE2 >= kWUn06Hp;) {
            int zdyWZCteG2;
            zdyWZCteG2 = bMxyZJ[kWUn06Hp] + MAsODoRLEI[kWUn06Hp] + x2CXonG9tZ;
            if (zdyWZCteG2 > (833 - 824)) {
                x2CXonG9tZ = 1;
                mvKYDC[kWUn06Hp] = zdyWZCteG2 - (114 - 104);
            }
            else {
                x2CXonG9tZ = (744 - 744);
                mvKYDC[kWUn06Hp] = zdyWZCteG2;
            }
            kWUn06Hp++;
        };
    }
    {
        int kWUn06Hp;
        kWUn06Hp = L3qtDE2 +1;
        for (; kWUn06Hp >= 0;) {
            if (mvKYDC[kWUn06Hp] != 0) {
                AvKMFjUAD4t = kWUn06Hp;
                break;
            }
            kWUn06Hp--;
        };
    }
    {
        int kWUn06Hp;
        kWUn06Hp = AvKMFjUAD4t;
        for (; kWUn06Hp >= 0;) {
            cout << mvKYDC[kWUn06Hp];
            kWUn06Hp--;
        };
    }
    return 0;
}

