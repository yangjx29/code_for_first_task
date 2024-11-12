int main () {
    char Wfn84WC [(693 - 592)], B5djTo [(572 - 471)];
    int XJ1GF6, bchkRPmlD = (192 - 191), rIWlgvm = -(297 - 296);
    cin >> XJ1GF6;
    for (bchkRPmlD = (263 - 262); bchkRPmlD <= XJ1GF6; bchkRPmlD = bchkRPmlD + 1) {
        int MxJLTQt4dgHa [(234 - 134)] = {(318 - 318)}, CpIWgtsKwREB [(833 - 733)] = {(819 - 819)}, a, b, HTfbQm [(403 - 303)] = {(828 - 828)}, vgaRchkYBt = (655 - 556), e = (910 - 811);
        cin.get ();
        cin.getline (Wfn84WC, (1028 - 928));
        cin.getline (B5djTo, 100);
        a = strlen (Wfn84WC);
        b = strlen (B5djTo);
        for (int i = a - (714 - 713);
        i >= 0; i = i - 1) {
            MxJLTQt4dgHa[vgaRchkYBt] = Wfn84WC[i] - '0';
            vgaRchkYBt = vgaRchkYBt - 1;
        }
        {
            int i = b - (820 - 819);
            while (i >= 0) {
                CpIWgtsKwREB[e] = B5djTo[i] - '0';
                i = i - 1;
                e = e - 1;
            };
        }
        for (int i = 99;
        i > 99 - a; i = i - 1) {
            if (MxJLTQt4dgHa[i] >= CpIWgtsKwREB[i])
                HTfbQm[i] = MxJLTQt4dgHa[i] - CpIWgtsKwREB[i];
            else {
                MxJLTQt4dgHa[i] = MxJLTQt4dgHa[i] + 10;
                MxJLTQt4dgHa[i - 1]--;
                HTfbQm[i] = MxJLTQt4dgHa[i] - CpIWgtsKwREB[i];
            };
        }
        {
            int i = 0;
            while (i < 100) {
                if (HTfbQm[i] != 0) {
                    rIWlgvm = i;
                    break;
                }
                i = i + 1;
            };
        }
        if (rIWlgvm == -1)
            cout << "0" << endl;
        else {
            for (int i = rIWlgvm;
            i < 99; i = i + 1)
                cout << HTfbQm[i];
            cout << HTfbQm[99] << endl;
        };
    }
    return 0;
}

