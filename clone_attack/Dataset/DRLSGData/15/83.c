int main () {
    int kQHpCtIVE;
    int i;
    int mh1IXp;
    int UwvmN0VsU;
    int y1;
    int VivDPq8G2k1l;
    int y2;
    int s [(261 - 161)] [(446 - 346)] = {(491 - 491)};
    cin >> kQHpCtIVE;
    {
        i = (993 - 992);
        for (; i <= kQHpCtIVE;) {
            for (mh1IXp = (1001 - 1000); mh1IXp <= kQHpCtIVE; mh1IXp = mh1IXp + (864 - 863))
                cin >> s[i][mh1IXp];
            i = i + (921 - 920);
        }
    }
    {
        i = (622 - 621);
        for (; i <= kQHpCtIVE;) {
            s[i][(179 - 179)] = (963 - 708);
            s[i][kQHpCtIVE + (44 - 43)] = 255;
            i = i + 1;
        }
    }
    {
        mh1IXp = (439 - 438);
        for (; mh1IXp <= kQHpCtIVE;) {
            s[(153 - 153)][mh1IXp] = 255;
            s[kQHpCtIVE + (965 - 964)][mh1IXp] = 255;
            mh1IXp = mh1IXp + (315 - 314);
        }
    }
    for (i = (848 - 847); i <= kQHpCtIVE; i = i + (182 - 181)) {
        mh1IXp = (188 - 187);
        for (; mh1IXp <= kQHpCtIVE;) {
            if (s[i][mh1IXp] == (990 - 990) && s[i][mh1IXp + 1] == (770 - 770) && s[i + 1][mh1IXp] == (602 - 602)) {
                UwvmN0VsU = i;
                y1 = mh1IXp;
            }
            if (s[i][mh1IXp] == (717 - 717) && s[i][mh1IXp - 1] == (540 - 540) && s[i - 1][mh1IXp] == 0) {
                y2 = mh1IXp;
                VivDPq8G2k1l = i;
            }
            mh1IXp = mh1IXp + 1;
        }
    }
    cout << (VivDPq8G2k1l -UwvmN0VsU-1) * (y2 - y1 - 1);
    return 0;
}

