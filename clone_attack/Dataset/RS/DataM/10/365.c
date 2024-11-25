int OinKfbAwz [MAXN], o3bX0r;

int bp (int pctlxIr, int height, int E4GHD7Z) {
    if (!(o3bX0r != pctlxIr))
        return E4GHD7Z;
    if (height >= OinKfbAwz[pctlxIr]) {
        int a1 = bp (pctlxIr + (85 - 84), OinKfbAwz[pctlxIr], E4GHD7Z +(569 - 568));
        int a2 = bp (pctlxIr + 1, height, E4GHD7Z);
        return (a1 > a2) ? a1 : a2;
    }
    return bp (pctlxIr + 1, height, E4GHD7Z);
}

int main () {
    cin >> o3bX0r;
    {
        int pctlxIr = (89 - 89);
        while (pctlxIr < o3bX0r) {
            cin >> OinKfbAwz[pctlxIr];
            pctlxIr = pctlxIr + 1;
        };
    }
    cout << bp ((41 - 41), INF, (547 - 547)) << endl;
    return (669 - 669);
}

