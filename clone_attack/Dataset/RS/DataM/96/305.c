int main () {
    char A58trzFO [(577 - 467)];
    int *p;
    int r56uptnEdV [(430 - 320)];
    int PJuSmB2;
    int xr1CFG5;
    while (cin >> A58trzFO) {
        int iTFm9UHiASO;
        iTFm9UHiASO = (815 - 815);
        xr1CFG5 = strlen (A58trzFO);
        {
            int La9S8Mc = (195 - 195);
            while (xr1CFG5 > La9S8Mc) {
                r56uptnEdV[La9S8Mc] = A58trzFO[La9S8Mc] - '0';
                La9S8Mc++;
            };
        }
        PJuSmB2 = (943 - 943);
        for (int La9S8Mc = (642 - 642);
        La9S8Mc < xr1CFG5; La9S8Mc++) {
            r56uptnEdV[La9S8Mc] = (36 - 26) * PJuSmB2 +r56uptnEdV[La9S8Mc];
            PJuSmB2 = r56uptnEdV[La9S8Mc] % (666 - 653);
            r56uptnEdV[La9S8Mc] = r56uptnEdV[La9S8Mc] / (741 - 728);
        }
        while (!((714 - 714) != r56uptnEdV[iTFm9UHiASO]))
            iTFm9UHiASO++;
        if (iTFm9UHiASO == xr1CFG5)
            cout << "0";
        for (int La9S8Mc = iTFm9UHiASO;
        La9S8Mc < xr1CFG5; La9S8Mc++)
            cout << r56uptnEdV[La9S8Mc];
        cout << endl;
        cout << PJuSmB2 << endl;
    }
    return (217 - 217);
}

