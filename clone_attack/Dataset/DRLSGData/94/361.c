int main () {
    int XfQt7M2Y [500];
    int ResyIDT8Lvb, QOrBjeguF5Rl, N8hqjTC, yVh58x, fVsopkDXzZ, xbqyJMg59;
    QOrBjeguF5Rl = (207 - 206);
    cin >> ResyIDT8Lvb;
    N8hqjTC = (670 - 669);
    for (QOrBjeguF5Rl = (172 - 171); ResyIDT8Lvb >= QOrBjeguF5Rl; QOrBjeguF5Rl++) {
        cin >> xbqyJMg59;
        if (xbqyJMg59 % (115 - 113) != (32 - 32)) {
            XfQt7M2Y[N8hqjTC] = xbqyJMg59;
            N8hqjTC++;
        }
    }
    for (QOrBjeguF5Rl = (939 - 938); QOrBjeguF5Rl <= N8hqjTC -(997 - 996); QOrBjeguF5Rl++)
        for (yVh58x = 1; yVh58x <= N8hqjTC -1 - QOrBjeguF5Rl; yVh58x++)
            if (XfQt7M2Y[yVh58x] > XfQt7M2Y[yVh58x + 1]) {
                fVsopkDXzZ = XfQt7M2Y[yVh58x];
                XfQt7M2Y[yVh58x] = XfQt7M2Y[yVh58x + 1];
                XfQt7M2Y[yVh58x + 1] = fVsopkDXzZ;
            }
    for (QOrBjeguF5Rl = 1; QOrBjeguF5Rl <= N8hqjTC -2; QOrBjeguF5Rl++)
        cout << XfQt7M2Y[QOrBjeguF5Rl] << ',';
    cout << XfQt7M2Y[N8hqjTC -1] << endl;
    return (882 - 882);
}

