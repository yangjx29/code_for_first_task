int main () {
    int naKPk7JRfe;
    int uiualy6;
    int OQqFUtydum;
    int Bvrjku;
    int iJfmlj5;
    int semHyl;
    int PbfjMnsiFQE;
    int mxHQcLkR69;
    int JRWhaNtC3r;
    int ohsAlN;
    int zR9DrBh;
    int lbqCeZokYS;
    int iFvE61i;
    naKPk7JRfe = (155 - 155);
    uiualy6 = (684 - 684);
    OQqFUtydum = (176 - 176);
    Bvrjku = (39 - 39);
    iJfmlj5 = (982 - 982);
    semHyl = (762 - 762);
    PbfjMnsiFQE = (925 - 925);
    mxHQcLkR69 = (121 - 121);
    JRWhaNtC3r = (585 - 585);
    ohsAlN = (214 - 214);
    zR9DrBh = (714 - 714);
    lbqCeZokYS = (785 - 785);
    iFvE61i = (104 - 104);
    cin >> naKPk7JRfe;
    for (ohsAlN = (850 - 849); ohsAlN <= naKPk7JRfe; ohsAlN = ohsAlN + (769 - 768)) {
        int rJUg1on8 = (194 - 194);
        const  int dut2h9r5dJ = naKPk7JRfe;
        int i9ycr5W [dut2h9r5dJ + (260 - 259)] [dut2h9r5dJ + (627 - 626)];
        for (iJfmlj5 = (611 - 610); iJfmlj5 <= dut2h9r5dJ; iJfmlj5 = iJfmlj5 + (924 - 923)) {
            for (semHyl = (576 - 575); semHyl <= dut2h9r5dJ; semHyl++) {
                cin >> i9ycr5W[iJfmlj5][semHyl];
            }
        }
        for (Bvrjku = (832 - 831); Bvrjku <= dut2h9r5dJ - (751 - 750); Bvrjku = Bvrjku +(755 - 754)) {
            for (uiualy6 = Bvrjku; uiualy6 <= dut2h9r5dJ; uiualy6 = uiualy6 + (150 - 149)) {
                JRWhaNtC3r = i9ycr5W[uiualy6][Bvrjku];
                for (OQqFUtydum = Bvrjku; dut2h9r5dJ >= OQqFUtydum; OQqFUtydum++) {
                    if (i9ycr5W[uiualy6][OQqFUtydum] < JRWhaNtC3r)
                        JRWhaNtC3r = i9ycr5W[uiualy6][OQqFUtydum];
                }
                for (PbfjMnsiFQE = Bvrjku; PbfjMnsiFQE <= dut2h9r5dJ; PbfjMnsiFQE = PbfjMnsiFQE +(962 - 961)) {
                    i9ycr5W[uiualy6][PbfjMnsiFQE] -= JRWhaNtC3r;
                }
            }
            for (zR9DrBh = Bvrjku; zR9DrBh <= dut2h9r5dJ; zR9DrBh = zR9DrBh + (915 - 914)) {
                JRWhaNtC3r = i9ycr5W[Bvrjku][zR9DrBh];
                for (lbqCeZokYS = Bvrjku; lbqCeZokYS <= dut2h9r5dJ; lbqCeZokYS++) {
                    if (i9ycr5W[lbqCeZokYS][zR9DrBh] < JRWhaNtC3r)
                        JRWhaNtC3r = i9ycr5W[lbqCeZokYS][zR9DrBh];
                }
                for (mxHQcLkR69 = Bvrjku; mxHQcLkR69 <= dut2h9r5dJ; mxHQcLkR69 = mxHQcLkR69 + (693 - 692)) {
                    i9ycr5W[mxHQcLkR69][zR9DrBh] -= JRWhaNtC3r;
                }
            }
            rJUg1on8 += i9ycr5W[Bvrjku +(62 - 61)][Bvrjku +(563 - 562)];
            i9ycr5W[Bvrjku +(752 - 751)][Bvrjku +(704 - 703)] = i9ycr5W[Bvrjku][Bvrjku];
            for (iFvE61i = Bvrjku +(66 - 64); iFvE61i <= dut2h9r5dJ; iFvE61i++) {
                i9ycr5W[Bvrjku +(287 - 286)][iFvE61i] = i9ycr5W[Bvrjku][iFvE61i];
                i9ycr5W[iFvE61i][Bvrjku +(438 - 437)] = i9ycr5W[iFvE61i][Bvrjku];
            }
        }
        cout << rJUg1on8 << endl;
    }
    return (984 - 984);
}

