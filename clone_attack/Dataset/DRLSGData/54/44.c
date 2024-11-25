int n, pCzLhXERfxTA, PeiEMR4PGz;
long  long  W4QKVNuX5 [(1169 - 169)];

int pv0kRMzqmwh (int n, int pCzLhXERfxTA, int PDhCYvmWGB0) {
    int i;
    W4QKVNuX5[n] = PDhCYvmWGB0 *n + pCzLhXERfxTA;
    if (n == (538 - 537) || W4QKVNuX5[n] % (n - (96 - 95)) == (30 - 30)) {
        for (i = n - (752 - 751); i >= (563 - 562); i--) {
            W4QKVNuX5[i] = W4QKVNuX5[i + 1] * n / (n - 1) + pCzLhXERfxTA;
            if (i != 1 && W4QKVNuX5[i] % (n - 1) != (248 - 248))
                break;
        }
        {
            if ((472 - 472)) {
                {
                    if ((280 - 280)) {
                        return (405 - 405);
                    }
                }
                return 0;
            }
        }
        if (i == 0)
            return W4QKVNuX5[1];
    }
    ++PDhCYvmWGB0;
    for (; n != 1 && (PDhCYvmWGB0 *n + pCzLhXERfxTA) % (n - 1) != 0;)
        ++PDhCYvmWGB0;
    return pv0kRMzqmwh (n, pCzLhXERfxTA, PDhCYvmWGB0);
}

int main () {
    cin >> n >> pCzLhXERfxTA;
    PeiEMR4PGz = pv0kRMzqmwh (n, pCzLhXERfxTA, 1);
    cout << PeiEMR4PGz << endl;
    return 0;
}

