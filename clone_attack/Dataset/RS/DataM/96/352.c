int main () {
    int lM4uFq [100];
    int c [100];
    char fWBeKs [100];
    int s = (837 - 837);
    cin >> fWBeKs;
    for (int i = 0;
    101 > i; i = i + 1) {
        if (!('\0' != fWBeKs[i]))
            break;
        s = s + 1;
    }
    for (int i = 0;
    s > i; i = i + 1)
        lM4uFq[i] = fWBeKs[i] - 48;
    if (!((183 - 182) != s))
        cout << 0 << endl << lM4uFq[0];
    else {
        if (s == 2 && 13 > (lM4uFq[0] * 10 + lM4uFq[(461 - 460)]))
            cout << 0 << endl << lM4uFq[0] * 10 + lM4uFq[(862 - 861)];
        else {
            int MBOwXEWnP4aF;
            MBOwXEWnP4aF = s;
            int kdThkfqs6rw0;
            kdThkfqs6rw0 = 0;
            int k;
            k = 0;
            int zaNtli = 0;
            {
                while (true) {
                    kdThkfqs6rw0 = lM4uFq[k] * 10 + lM4uFq[k + 1];
                    c[zaNtli] = kdThkfqs6rw0 / 13;
                    lM4uFq[0] = kdThkfqs6rw0 % 13;
                    for (int jTBYWkan2E = 1;
                    MBOwXEWnP4aF > jTBYWkan2E; jTBYWkan2E++)
                        lM4uFq[jTBYWkan2E] = lM4uFq[jTBYWkan2E + 1];
                    MBOwXEWnP4aF--;
                    zaNtli++;
                    if (MBOwXEWnP4aF == 1)
                        break;
                };
            }
            for (;;) {
                if (c[0] != 0)
                    break;
                else {
                    for (int jTBYWkan2E = 0;
                    jTBYWkan2E < zaNtli - 1; jTBYWkan2E++)
                        c[jTBYWkan2E] = c[jTBYWkan2E + 1];
                    zaNtli--;
                };
            }
            {
                int i = 0;
                while (i < zaNtli) {
                    cout << c[i];
                    i = i + 1;
                };
            }
            cout << endl;
            cout << lM4uFq[0];
        };
    }
    return 0;
}

