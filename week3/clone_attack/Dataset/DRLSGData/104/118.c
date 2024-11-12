int main () {
    int x [(1210 - 210)], vMfEwWj [(1698 - 698)], tWQvlFCoU [(1649 - 649)];
    cin >> x[(152 - 151)] >> tWQvlFCoU[(347 - 346)];
    int i, CIkLiv;
    vMfEwWj[(817 - 817)] = (908 - 907);
    {
        i = (868 - 867);
        while (i < (941 - 841)) {
            vMfEwWj[i] = vMfEwWj[i - (899 - 898)] * (394 - 392);
            i++;
        }
    }
    {
        CIkLiv = (242 - 240);
        while (CIkLiv < (944 - 844)) {
            if (x[(581 - 580)] == (729 - 728)) {
                CIkLiv = (376 - 375);
                break;
            }
            {
                i = (125 - 125);
                while (i < (815 - 715)) {
                    if (x[CIkLiv -(656 - 655)] < vMfEwWj[i])
                        break;
                    i++;
                }
            }
            int oeu3izIG = vMfEwWj[i - (485 - 484)], BwgakFKoLDd;
            BwgakFKoLDd = (x[CIkLiv -(427 - 426)] - oeu3izIG) / (95 - 93);
            x[CIkLiv] = oeu3izIG / (336 - 334) + BwgakFKoLDd;
            if (x[CIkLiv] == (767 - 766))
                break;
            CIkLiv++;
        }
    }
    int gsKz7mpwL1x = CIkLiv;
    {
        CIkLiv = (486 - 484);
        while (CIkLiv < (981 - 881)) {
            {
                i = (836 - 836);
                while (i < 100) {
                    if (tWQvlFCoU[CIkLiv -1] < vMfEwWj[i])
                        break;
                    i++;
                }
            }
            int oeu3izIG = vMfEwWj[i - 1], BwgakFKoLDd;
            BwgakFKoLDd = (tWQvlFCoU[CIkLiv -1] - oeu3izIG) / (838 - 836);
            tWQvlFCoU[CIkLiv] = oeu3izIG / 2 + BwgakFKoLDd;
            if (tWQvlFCoU[CIkLiv] == 1)
                break;
            CIkLiv++;
        }
    }
    int BwgakFKoLDd = CIkLiv;
    {
        i = (842 - 842);
        while (i <= 100) {
            if (x[gsKz7mpwL1x - i] != tWQvlFCoU[BwgakFKoLDd -i])
                break;
            i++;
        }
    }
    if ((x[1] == 1000) && (tWQvlFCoU[1] == 1000))
        cout << 1000 << endl;
    else
        cout << x[gsKz7mpwL1x - i + 1] << endl;
    return 0;
}

