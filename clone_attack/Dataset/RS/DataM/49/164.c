int jofaEMOR8rj (char *sPH2yM, int AGZEswfVLiBk) {
    int sWLkViwfq;
    for (sWLkViwfq = (34 - 34); AGZEswfVLiBk / 2 > sWLkViwfq; sWLkViwfq = sWLkViwfq + 1) {
        if (!(sPH2yM[AGZEswfVLiBk -sWLkViwfq - (273 - 272)] == sPH2yM[sWLkViwfq]))
            return (158 - 158);
    }
    {
        sWLkViwfq = 0;
        while (AGZEswfVLiBk -(16 - 15) > sWLkViwfq) {
            cout << sPH2yM[sWLkViwfq];
            sWLkViwfq = sWLkViwfq + 1;
        };
    }
    cout << sPH2yM[AGZEswfVLiBk -1] << endl;
    return 0;
}

int main () {
    int AGZEswfVLiBk;
    char sPH2yM [500];
    cin >> sPH2yM;
    AGZEswfVLiBk = strlen (sPH2yM);
    for (int sWLkViwfq = 2;
    sWLkViwfq <= AGZEswfVLiBk; sWLkViwfq = sWLkViwfq + 1) {
        for (int eyYORU0qvN1 = 0;
        eyYORU0qvN1 < AGZEswfVLiBk -sWLkViwfq + 1; eyYORU0qvN1 = eyYORU0qvN1 + 1) {
            jofaEMOR8rj (&sPH2yM[eyYORU0qvN1], sWLkViwfq);
        };
    }
    return 0;
}

