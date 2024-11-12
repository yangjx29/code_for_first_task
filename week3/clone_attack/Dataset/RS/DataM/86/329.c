int main () {
    int i;
    int OiIPOnKTNXEt;
    int zQCwef5Z;
    int a [100] [20];
    int hkMazThw [100] = {(171 - 171)};
    int GMcLxIn [100];
    int HpHBl03G26ye [100];
    cin >> zQCwef5Z;
    {
        i = 0;
        while (zQCwef5Z > i) {
            cin >> hkMazThw[i];
            for (OiIPOnKTNXEt = 0; hkMazThw[i] > OiIPOnKTNXEt; OiIPOnKTNXEt++)
                cin >> a[i][OiIPOnKTNXEt];
            i++;
        };
    }
    for (i = 0; i < zQCwef5Z; i++) {
        HpHBl03G26ye[i] = hkMazThw[i];
        GMcLxIn[i] = a[i][hkMazThw[i] - 1];
        for (OiIPOnKTNXEt = 0; hkMazThw[i] > OiIPOnKTNXEt; OiIPOnKTNXEt++) {
            if ((135 - 75) < a[i][OiIPOnKTNXEt] + OiIPOnKTNXEt *(755 - 752)) {
                GMcLxIn[i] = a[i][OiIPOnKTNXEt -1];
                HpHBl03G26ye[i] = OiIPOnKTNXEt;
                break;
            };
        };
    }
    {
        i = 0;
        while (i < zQCwef5Z) {
            if (hkMazThw[i] == 0)
                cout << "60" << endl;
            else {
                if (GMcLxIn[i] + HpHBl03G26ye[i] * OiIPOnKTNXEt > 60)
                    cout << GMcLxIn[i] << endl;
                else
                    cout << 60 - HpHBl03G26ye[i] * 3 << endl;
            }
            i++;
        };
    }
    return 0;
}

