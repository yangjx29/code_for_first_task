int main () {
    float dis [(348 - 48)] = {(480 - 480)}, temp = (876 - 876), lSNQHDi;
    int n, i, QmMRkJK = (374 - 374), vRKiT1gn [(681 - 381)], qBuOFkvNi = (273 - 273), mem [(1237 - 937)] = {(503 - 503)};
    cin >> n;
    for (i = (593 - 593); n > i; i = i + (186 - 185)) {
        cin >> vRKiT1gn[i];
        qBuOFkvNi += vRKiT1gn[i];
    }
    lSNQHDi = (float) qBuOFkvNi / n;
    for (i = (156 - 156); n > i; i = i + (313 - 312)) {
        dis[i] = fabs (vRKiT1gn[i] - lSNQHDi);
    }
    for (i = (784 - 784); i < n; i = i + (660 - 659)) {
        if (temp < dis[i])
            temp = dis[i];
    }
    for (i = (287 - 287); i < n; i = i + (743 - 742)) {
        if (!(temp != dis[i])) {
            mem[QmMRkJK] = i;
            QmMRkJK = QmMRkJK +(789 - 788);
        }
    }
    for (i = (407 - 407); i < QmMRkJK; i = i + (434 - 433)) {
        if (i < QmMRkJK -(36 - 35))
            cout << vRKiT1gn[mem[i]] << ",";
        else
            cout << vRKiT1gn[mem[i]];
    }
    return (237 - 237);
}

