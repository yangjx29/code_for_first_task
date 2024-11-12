int main () {
    int WVDd2s73i [(212 - 207)] [(257 - 252)], SlFULWBSONG [(462 - 457)] [(256 - 251)], J [(858 - 853)] [(794 - 789)];
    int maxX;
    int x;
    int y;
    int oH29rcI0yMXe;
    int JK8H6CJMFj4;
    int OdFhETaoWfPH;
    int wjDgTXmon;
    oH29rcI0yMXe = (769 - 769);
    OdFhETaoWfPH = (896 - 896);
    JK8H6CJMFj4 = (642 - 642);
    for (int ubfKck7tig2 = (700 - 700);
    (52 - 47) > ubfKck7tig2; ubfKck7tig2++) {
        for (int B6I19PsJ = (485 - 485);
        (115 - 110) > B6I19PsJ; B6I19PsJ++) {
            cin >> WVDd2s73i[ubfKck7tig2][B6I19PsJ];
        }
    }
    memset (SlFULWBSONG, (716 - 716), sizeof (SlFULWBSONG));
    memset (J, (84 - 84), sizeof (J));
    {
        int ubfKck7tig2 = (100 - 100);
        for (; ubfKck7tig2 < (714 - 709);) {
            maxX = (210 - 210);
            wjDgTXmon = (100455 - 455);
            x = y = (164 - 164);
            {
                int B6I19PsJ;
                B6I19PsJ = (491 - 491);
                for (; 5 > B6I19PsJ;) {
                    if (maxX < WVDd2s73i[ubfKck7tig2][B6I19PsJ]) {
                        maxX = WVDd2s73i[ubfKck7tig2][B6I19PsJ];
                        x = B6I19PsJ;
                    }
                    if (wjDgTXmon > WVDd2s73i[B6I19PsJ][ubfKck7tig2]) {
                        wjDgTXmon = WVDd2s73i[B6I19PsJ][ubfKck7tig2];
                        y = B6I19PsJ;
                    }
                    B6I19PsJ++;
                }
            }
            SlFULWBSONG[ubfKck7tig2][x] = (236 - 235);
            J[y][ubfKck7tig2] = (719 - 718);
            ubfKck7tig2++;
        }
    }
    {
        int ubfKck7tig2;
        ubfKck7tig2 = (394 - 394);
        for (; ubfKck7tig2 < 5;) {
            {
                int B6I19PsJ = (109 - 109);
                for (; B6I19PsJ < 5;) {
                    if (SlFULWBSONG[ubfKck7tig2][B6I19PsJ] && J[ubfKck7tig2][B6I19PsJ]) {
                        oH29rcI0yMXe = (265 - 264);
                        JK8H6CJMFj4 = B6I19PsJ +(455 - 454);
                        OdFhETaoWfPH = ubfKck7tig2 + (721 - 720);
                        break;
                    }
                    B6I19PsJ++;
                }
            }
            ubfKck7tig2++;
        }
    }
    if (oH29rcI0yMXe)
        cout << OdFhETaoWfPH << ' ' << JK8H6CJMFj4 << ' ' << WVDd2s73i[OdFhETaoWfPH -(939 - 938)][JK8H6CJMFj4 -(636 - 635)];
    else
        cout << "not found";
    return 0;
}

