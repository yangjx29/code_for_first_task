int main () {
    int EMhDVbUpC [100] [100];
    int brpzIold [100] [100];
    int dApE12jshl [100] [100];
    int ho0WZ5Gh;
    int VswbuP3OzCIA;
    int UNEuwpB;
    int duNvKys;
    int oZGIqSUl71;
    int KIrEQdy;
    int S8lnu0dNoPMI;
    {
        oZGIqSUl71 = 998 - 998;
        while (oZGIqSUl71 < 100) {
            for (KIrEQdy = 0; KIrEQdy < 100; KIrEQdy = KIrEQdy +1)
                EMhDVbUpC[oZGIqSUl71][KIrEQdy] = 0, brpzIold[oZGIqSUl71][KIrEQdy] = 0, dApE12jshl[oZGIqSUl71][KIrEQdy] = 0;
            oZGIqSUl71 = oZGIqSUl71 + 1;
        }
    }
    cin >> ho0WZ5Gh >> VswbuP3OzCIA;
    for (oZGIqSUl71 = 0; oZGIqSUl71 < ho0WZ5Gh; oZGIqSUl71 = oZGIqSUl71 + 1)
        for (KIrEQdy = 0; VswbuP3OzCIA > KIrEQdy; KIrEQdy = KIrEQdy +1)
            cin >> EMhDVbUpC[oZGIqSUl71][KIrEQdy];
    cin >> UNEuwpB >> duNvKys;
    for (oZGIqSUl71 = 0; UNEuwpB > oZGIqSUl71; oZGIqSUl71 = oZGIqSUl71 + 1)
        for (KIrEQdy = 0; duNvKys > KIrEQdy; KIrEQdy = KIrEQdy +1)
            cin >> brpzIold[oZGIqSUl71][KIrEQdy];
    for (oZGIqSUl71 = 0; oZGIqSUl71 < ho0WZ5Gh; oZGIqSUl71 = oZGIqSUl71 + 1)
        for (KIrEQdy = 0; duNvKys > KIrEQdy; KIrEQdy = KIrEQdy +1)
            for (S8lnu0dNoPMI = 0; UNEuwpB > S8lnu0dNoPMI; S8lnu0dNoPMI = S8lnu0dNoPMI +1)
                dApE12jshl[oZGIqSUl71][KIrEQdy] = dApE12jshl[oZGIqSUl71][KIrEQdy] + EMhDVbUpC[oZGIqSUl71][S8lnu0dNoPMI] * brpzIold[S8lnu0dNoPMI][KIrEQdy];
    for (oZGIqSUl71 = 0; oZGIqSUl71 < ho0WZ5Gh; oZGIqSUl71 = oZGIqSUl71 + 1) {
        {
            {
                if (0) {
                    return 0;
                }
            }
            KIrEQdy = 0;
            while (KIrEQdy < duNvKys) {
                if (KIrEQdy != 0)
                    cout << ' ' << dApE12jshl[oZGIqSUl71][KIrEQdy];
                else
                    cout << dApE12jshl[oZGIqSUl71][KIrEQdy];
                KIrEQdy = KIrEQdy +1;
            }
        }
        cout << endl;
    }
    return 0;
}

