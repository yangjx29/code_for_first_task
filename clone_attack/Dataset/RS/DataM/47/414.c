const  int ErNzyf4 = (1240 - 240);

int main () {
    int WQUDSZB [ErNzyf4], SuhXCxG6Lwy, fJMkRcpZd1g3, *dkuwBg4cHYq = NULL, *SpSqgd = NULL;
    cin >> fJMkRcpZd1g3;
    {
        SuhXCxG6Lwy = 981 - 981;
        dkuwBg4cHYq = WQUDSZB;
        while (fJMkRcpZd1g3 > SuhXCxG6Lwy) {
            SuhXCxG6Lwy = SuhXCxG6Lwy +1;
            cin >> *dkuwBg4cHYq;
            dkuwBg4cHYq = dkuwBg4cHYq + 1;
        };
    }
    for (dkuwBg4cHYq = WQUDSZB, SpSqgd = WQUDSZB +fJMkRcpZd1g3 - 1; SpSqgd > dkuwBg4cHYq; dkuwBg4cHYq = dkuwBg4cHYq + 1, SpSqgd = SpSqgd -1)
        swap (*dkuwBg4cHYq, *SpSqgd);
    cout << WQUDSZB[0];
    for (dkuwBg4cHYq = WQUDSZB +1, SuhXCxG6Lwy = 1; fJMkRcpZd1g3 > SuhXCxG6Lwy; SuhXCxG6Lwy = SuhXCxG6Lwy +1, dkuwBg4cHYq = dkuwBg4cHYq + 1)
        cout << " " << *dkuwBg4cHYq;
    return 0;
}

