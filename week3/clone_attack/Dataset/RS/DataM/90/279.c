int hmBQKJE6VGTX (int z1Hol2xrvL3, int zXMuJsconz) {
    if (z1Hol2xrvL3 == 1 || zXMuJsconz == 1 || z1Hol2xrvL3 == 0)
        return (1);
    else {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (0 > z1Hol2xrvL3)
            return (0);
        else {
            if (z1Hol2xrvL3 > 1 && zXMuJsconz > 1)
                return (hmBQKJE6VGTX (z1Hol2xrvL3, zXMuJsconz - 1) + hmBQKJE6VGTX (z1Hol2xrvL3 - zXMuJsconz, zXMuJsconz));
        };
    };
}

int main () {
    int pEtup13brD, g098I4c2, t;
    cin >> t;
    for (int JOpmeNR1s = 1;
    JOpmeNR1s <= t; JOpmeNR1s++) {
        cin >> pEtup13brD >> g098I4c2;
        cout << hmBQKJE6VGTX (pEtup13brD, g098I4c2) << endl;
    }
    return 0;
}

