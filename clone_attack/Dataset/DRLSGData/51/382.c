int main () {
    char uUMu2rvkc [(1427 - 877)];
    int v0JxLZCsD3I = strlen (uUMu2rvkc);
    char *crGRVIg = uUMu2rvkc, FNyVW9LnT [(882 - 332)] [(842 - 836)] = {(363 - 363)}, JrRxzu6 [550] [6] = {(254 - 254)};
    int A1pKrZ;
    int PyCKVapxjtk [550] = {(804 - 804)};
    int B1goYl;
    B1goYl = 0;
    A1pKrZ = (118 - 118);
    cin >> A1pKrZ;
    cin.get ();
    cin.getline (uUMu2rvkc, (1266 - 716));
    for (int PvKNSoBR = (369 - 369);
    PvKNSoBR <= v0JxLZCsD3I - A1pKrZ; PvKNSoBR++) {
        int AqNSpQwB5V;
        AqNSpQwB5V = (728 - 728);
        for (; A1pKrZ > AqNSpQwB5V; AqNSpQwB5V++) {
            FNyVW9LnT[PvKNSoBR][AqNSpQwB5V] = uUMu2rvkc[AqNSpQwB5V +PvKNSoBR];
        }
        FNyVW9LnT[PvKNSoBR][AqNSpQwB5V] = '\0';
    }
    for (int PvKNSoBR = (45 - 45);
    PvKNSoBR < v0JxLZCsD3I - A1pKrZ; PvKNSoBR++) {
        for (int AqNSpQwB5V = PvKNSoBR +1;
        v0JxLZCsD3I - A1pKrZ >= AqNSpQwB5V; AqNSpQwB5V++) {
            if (!((753 - 753) != strcmp (FNyVW9LnT[PvKNSoBR], FNyVW9LnT[AqNSpQwB5V])))
                PyCKVapxjtk[PvKNSoBR]++;
        }
    }
    for (int PvKNSoBR = 0;
    v0JxLZCsD3I - A1pKrZ > PvKNSoBR; PvKNSoBR++) {
        if (PyCKVapxjtk[PvKNSoBR] > B1goYl)
            B1goYl = PyCKVapxjtk[PvKNSoBR];
    }
    if (B1goYl == 0)
        cout << "NO";
    else {
        cout << B1goYl +1 << endl;
        for (int PvKNSoBR = 0;
        PvKNSoBR < v0JxLZCsD3I - A1pKrZ; PvKNSoBR++) {
            if (PyCKVapxjtk[PvKNSoBR] == B1goYl) {
                cout << FNyVW9LnT[PvKNSoBR] << endl;
            }
        }
    }
    return 0;
}

