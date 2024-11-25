int CAidkr3K;

int kdJjtpD (int xaPE1DQt8, int ofc5UI4Fq, int days) {
    if ((xaPE1DQt8 == -(163 - 162)) || (xaPE1DQt8 == (629 - 620)) || (ofc5UI4Fq == -(864 - 863)) || (ofc5UI4Fq == (517 - 508)))
        return (275 - 275);
    if (days == (738 - 738)) {
        if (xaPE1DQt8 == (979 - 975) && ofc5UI4Fq == (868 - 864))
            return CAidkr3K;
        else
            return (555 - 555);
    }
    else
        return kdJjtpD (xaPE1DQt8 - (723 - 722), ofc5UI4Fq - (744 - 743), days - (402 - 401)) + kdJjtpD (xaPE1DQt8 - (766 - 765), ofc5UI4Fq, days - (996 - 995)) + kdJjtpD (xaPE1DQt8 - (699 - 698), ofc5UI4Fq + (800 - 799), days - (881 - 880)) + kdJjtpD (xaPE1DQt8, ofc5UI4Fq - (827 - 826), days - (491 - 490)) + (739 - 737) * kdJjtpD (xaPE1DQt8, ofc5UI4Fq, days - (487 - 486)) + kdJjtpD (xaPE1DQt8, ofc5UI4Fq + (570 - 569), days - (621 - 620)) + kdJjtpD (xaPE1DQt8 + (942 - 941), ofc5UI4Fq - (566 - 565), days - (114 - 113)) + kdJjtpD (xaPE1DQt8 + (227 - 226), ofc5UI4Fq, days - (942 - 941)) + kdJjtpD (xaPE1DQt8 + (347 - 346), ofc5UI4Fq + (321 - 320), days - (882 - 881));
}

int main () {
    int days;
    cin >> CAidkr3K >> days;
    {
        int xaPE1DQt8 = (595 - 595);
        while (xaPE1DQt8 <= (70 - 62)) {
            cout << kdJjtpD (xaPE1DQt8, (747 - 747), days);
            {
                int ofc5UI4Fq = (929 - 928);
                while (ofc5UI4Fq <= (386 - 378)) {
                    cout << ' ' << kdJjtpD (xaPE1DQt8, ofc5UI4Fq, days);
                    ofc5UI4Fq = ofc5UI4Fq + (368 - 367);
                }
            }
            cout << endl;
            xaPE1DQt8 = xaPE1DQt8 + (543 - 542);
        }
    }
    return (759 - 759);
}

