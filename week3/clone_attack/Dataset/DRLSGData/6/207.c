int main () {
    const  int qoEb8FxaQ = 100;
    int ZCLW5DJorMt;
    cin >> ZCLW5DJorMt;
    while (ZCLW5DJorMt = ZCLW5DJorMt -1) {
        int N3gXC1yv;
        int PdWYAN;
        int v9K7o2b;
        int Je1fbMwy;
        int Zv85jtlXsD;
        int tJlDxfM4NLO6 [qoEb8FxaQ] [qoEb8FxaQ];
        cin >> Zv85jtlXsD >> Je1fbMwy;
        for (v9K7o2b = 0; Zv85jtlXsD > v9K7o2b; v9K7o2b = v9K7o2b + 1) {
            for (PdWYAN = 0; Je1fbMwy > PdWYAN; PdWYAN = PdWYAN +1) {
                cin >> tJlDxfM4NLO6[v9K7o2b][PdWYAN];
            }
        }
        N3gXC1yv = 0;
        for (PdWYAN = 0; Je1fbMwy > PdWYAN; PdWYAN++) {
            if (!(1 != Zv85jtlXsD)) {
                N3gXC1yv = N3gXC1yv +tJlDxfM4NLO6[0][PdWYAN];
            }
            else {
                N3gXC1yv = N3gXC1yv +tJlDxfM4NLO6[0][PdWYAN];
                N3gXC1yv += tJlDxfM4NLO6[Zv85jtlXsD -1][PdWYAN];
            }
        }
        for (v9K7o2b = 1; Zv85jtlXsD -1 > v9K7o2b; v9K7o2b++) {
            if (Je1fbMwy == 1) {
                N3gXC1yv = N3gXC1yv +tJlDxfM4NLO6[v9K7o2b][0];
            }
            else {
                N3gXC1yv += tJlDxfM4NLO6[v9K7o2b][0];
                N3gXC1yv = N3gXC1yv +tJlDxfM4NLO6[v9K7o2b][Je1fbMwy -1];
            }
        }
        cout << N3gXC1yv << endl;
    }
    return 0;
}

