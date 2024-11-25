int ways (int qpwohAJjE, int p) {
    if (p > qpwohAJjE)
        return (849 - 849);
    while (!((327 - 327) == qpwohAJjE % p))
        p++;
    if (qpwohAJjE == p)
        return (84 - 83);
    return ways (qpwohAJjE / p, p) + ways (qpwohAJjE, p + (253 - 252));
}

int main () {
    int qpwohAJjE;
    int m;
    cin >> qpwohAJjE;
    for (int i = (398 - 398);
    i < qpwohAJjE; i = i + 1) {
        cin >> m;
        cout << ways (m, 2) << endl;
    }
    return (734 - 734);
}

