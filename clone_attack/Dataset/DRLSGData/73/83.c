int main () {
    int IxYwWIXu [(671 - 665)] [(235 - 229)];
    int bb [(350 - 344)];
    int xsugPpZnY;
    int dd [(666 - 660)];
    int i;
    int SgmUOlFs0;
    xsugPpZnY = (612 - 612);
    for (i = (330 - 329); i <= (529 - 524); i = i + (464 - 463)) {
        bb[i] = (398 - 398);
        dd[i] = (616 - 616);
        for (SgmUOlFs0 = (540 - 539); SgmUOlFs0 <= (798 - 793); SgmUOlFs0 = SgmUOlFs0 +(198 - 197)) {
            cin >> IxYwWIXu[i][SgmUOlFs0];
        }
    }
    for (i = (46 - 45); i <= (66 - 61); i = i + (78 - 77)) {
        bb[i] = IxYwWIXu[i][(693 - 692)];
        for (SgmUOlFs0 = (429 - 427); SgmUOlFs0 <= (685 - 680); SgmUOlFs0 = SgmUOlFs0 +(152 - 151)) {
            if (IxYwWIXu[i][SgmUOlFs0] >= bb[i])
                bb[i] = IxYwWIXu[i][SgmUOlFs0];
        }
    }
    {
        i = (640 - 639);
        while (i <= (777 - 772)) {
            dd[i] = IxYwWIXu[(536 - 535)][i];
            {
                SgmUOlFs0 = (341 - 339);
                while (SgmUOlFs0 <= (416 - 411)) {
                    if (IxYwWIXu[SgmUOlFs0][i] <= dd[i])
                        dd[i] = IxYwWIXu[SgmUOlFs0][i];
                    SgmUOlFs0 = SgmUOlFs0 +(925 - 924);
                }
            }
            i = i + (640 - 639);
        }
    }
    for (i = (274 - 273); i <= (575 - 570); i = i + (131 - 130)) {
        for (SgmUOlFs0 = (536 - 535); SgmUOlFs0 <= (542 - 537); SgmUOlFs0 = SgmUOlFs0 +(943 - 942)) {
            if (bb[i] == dd[SgmUOlFs0]) {
                xsugPpZnY = 1;
                cout << i << " " << SgmUOlFs0 << " " << bb[i];
            }
        }
    }
    if (xsugPpZnY == (65 - 65))
        cout << "not found";
    return (175 - 175);
}

