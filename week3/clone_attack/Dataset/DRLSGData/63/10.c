int main () {
    int WqkVJ1h [105] [105];
    int FWqhoVErQfFl [105] [105];
    int Vw7ysezrPDIl [105] [105];
    int dzbyYXH;
    int K0ySXmG;
    int lFE0ZDU28gA;
    int BmqvGbgSH3sj;
    int mwfgDbtY6;
    int iSdJso;
    int QRmWO5owL0cV;
    cin >> BmqvGbgSH3sj >> mwfgDbtY6;
    {
        dzbyYXH = (635 - 634);
        while (dzbyYXH <= BmqvGbgSH3sj) {
            {
                K0ySXmG = 1;
                while (K0ySXmG <= mwfgDbtY6) {
                    cin >> WqkVJ1h[dzbyYXH][K0ySXmG];
                    K0ySXmG++;
                }
            }
            dzbyYXH++;
        }
    }
    cin >> iSdJso >> QRmWO5owL0cV;
    for (dzbyYXH = 1; dzbyYXH <= iSdJso; dzbyYXH++) {
        for (K0ySXmG = 1; K0ySXmG <= QRmWO5owL0cV; K0ySXmG++) {
            cin >> FWqhoVErQfFl[dzbyYXH][K0ySXmG];
        }
    }
    for (dzbyYXH = 1; dzbyYXH <= BmqvGbgSH3sj; dzbyYXH++) {
        for (K0ySXmG = 1; K0ySXmG <= QRmWO5owL0cV; K0ySXmG++) {
            Vw7ysezrPDIl[dzbyYXH][K0ySXmG] = 0;
            for (lFE0ZDU28gA = 1; lFE0ZDU28gA <= mwfgDbtY6; lFE0ZDU28gA++) {
                Vw7ysezrPDIl[dzbyYXH][K0ySXmG] = Vw7ysezrPDIl[dzbyYXH][K0ySXmG] + WqkVJ1h[dzbyYXH][lFE0ZDU28gA] * FWqhoVErQfFl[lFE0ZDU28gA][K0ySXmG];
            }
        }
    }
    for (dzbyYXH = 1; dzbyYXH <= BmqvGbgSH3sj; dzbyYXH++) {
        for (K0ySXmG = 1; K0ySXmG <= QRmWO5owL0cV; K0ySXmG++) {
            if (K0ySXmG != QRmWO5owL0cV)
                cout << Vw7ysezrPDIl[dzbyYXH][K0ySXmG] << " ";
            else
                cout << Vw7ysezrPDIl[dzbyYXH][K0ySXmG] << endl;
        }
    }
    return 0;
}

