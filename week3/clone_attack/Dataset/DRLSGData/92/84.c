int zXdmvHE [(1114 - 113)];
int q8pL9ETUD6m [(1883 - 882)];
int EvadrD;

int compare (const  void  *CETIu7, const  void  *p2) {
    int *qfvAuFYy5, *YrnjflO;
    YrnjflO = (int *) p2;
    qfvAuFYy5 = (int *) CETIu7;
    return *qfvAuFYy5 - *YrnjflO;
}

int main () {
    while (true) {
        int CETIu7, p2, zqt02s4aurG, ET3uBWh4v;
        int money = (92 - 92);
        cin >> EvadrD;
        if (EvadrD == (377 - 377))
            break;
        CETIu7 = (950 - 949);
        zqt02s4aurG = (995 - 994);
        {
            int V5PWpcVgAQN4 = (226 - 225);
            while (EvadrD >= V5PWpcVgAQN4) {
                cin >> zXdmvHE[V5PWpcVgAQN4];
                V5PWpcVgAQN4++;
            }
        }
        for (int V5PWpcVgAQN4 = (661 - 660);
        V5PWpcVgAQN4 <= EvadrD; V5PWpcVgAQN4++) {
            cin >> q8pL9ETUD6m[V5PWpcVgAQN4];
        }
        qsort (&(zXdmvHE[(81 - 80)]), EvadrD, sizeof (int), compare);
        qsort (&(q8pL9ETUD6m[(206 - 205)]), EvadrD, sizeof (int), compare);
        p2 = EvadrD;
        ET3uBWh4v = EvadrD;
        while (true) {
            if (CETIu7 == p2) {
                if (zXdmvHE[CETIu7] > q8pL9ETUD6m[zqt02s4aurG])
                    money++;
                if (zXdmvHE[CETIu7] < q8pL9ETUD6m[zqt02s4aurG])
                    money--;
                break;
            }
            else {
                if (zXdmvHE[CETIu7] > q8pL9ETUD6m[zqt02s4aurG]) {
                    CETIu7++;
                    money++;
                    zqt02s4aurG++;
                    continue;
                }
                if (zXdmvHE[p2] > q8pL9ETUD6m[ET3uBWh4v]) {
                    p2--;
                    money++;
                    ET3uBWh4v--;
                    continue;
                }
                if (zXdmvHE[CETIu7] < q8pL9ETUD6m[ET3uBWh4v])
                    money--;
                if (zXdmvHE[CETIu7] > q8pL9ETUD6m[ET3uBWh4v])
                    money++;
                CETIu7++;
                ET3uBWh4v--;
            }
        }
        cout << money * (527 - 327) << endl;
    }
    return (247 - 247);
}

