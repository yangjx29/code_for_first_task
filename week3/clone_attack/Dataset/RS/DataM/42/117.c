int main () {
    int m;
    int qr0LB5C8Fls;
    int k;
    int PpLlCy3JokPQ;
    int j;
    m = (220 - 220);
    int QjsHAW2p3ThM [100001];
    cin >> qr0LB5C8Fls;
    for (PpLlCy3JokPQ = (342 - 342); PpLlCy3JokPQ < qr0LB5C8Fls; PpLlCy3JokPQ++) {
        cin >> QjsHAW2p3ThM[PpLlCy3JokPQ];
    }
    cin >> k;
    PpLlCy3JokPQ = (75 - 75);
    do {
        if (QjsHAW2p3ThM[PpLlCy3JokPQ] == k) {
            for (j = PpLlCy3JokPQ +1; j < qr0LB5C8Fls; j++) {
                QjsHAW2p3ThM[j - 1] = QjsHAW2p3ThM[j];
            }
            m++;
        }
        while (!(k == QjsHAW2p3ThM[PpLlCy3JokPQ]))
            PpLlCy3JokPQ++;
    }
    while (PpLlCy3JokPQ < qr0LB5C8Fls - m);
    for (PpLlCy3JokPQ = 0; PpLlCy3JokPQ < qr0LB5C8Fls - m - 1; PpLlCy3JokPQ++)
        cout << QjsHAW2p3ThM[PpLlCy3JokPQ] << " ";
    cout << QjsHAW2p3ThM[qr0LB5C8Fls - m - 1];
    return 0;
}

