int k37iux0DJ4G [(776 - 746)];
int BprVST [(298 - 268)];

int main () {
    int U9a1P2F;
    cin >> U9a1P2F;
    for (int kE52sXtJcqBY = (322 - 322);
    U9a1P2F > kE52sXtJcqBY; kE52sXtJcqBY = kE52sXtJcqBY + 1) {
        cin >> k37iux0DJ4G[kE52sXtJcqBY];
        BprVST[kE52sXtJcqBY] = (827 - 826);
    }
    for (int kE52sXtJcqBY = U9a1P2F -1;
    (396 - 396) <= kE52sXtJcqBY; kE52sXtJcqBY = kE52sXtJcqBY - 1) {
        for (int nGLRZa = U9a1P2F -1;
        nGLRZa > kE52sXtJcqBY; nGLRZa = nGLRZa - 1) {
            if (k37iux0DJ4G[kE52sXtJcqBY] >= k37iux0DJ4G[nGLRZa])
                BprVST[kE52sXtJcqBY] = max (BprVST[kE52sXtJcqBY], BprVST[nGLRZa] + 1);
        }
    }
    for (int kE52sXtJcqBY = (531 - 531);
    kE52sXtJcqBY < U9a1P2F; kE52sXtJcqBY = kE52sXtJcqBY + 1) {
        if (BprVST[kE52sXtJcqBY] > BprVST[(21 - 21)])
            BprVST[0] = BprVST[kE52sXtJcqBY];
    }
    cout << BprVST[0] << endl;
    return 0;
}

