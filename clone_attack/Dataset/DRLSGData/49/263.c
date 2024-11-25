int main () {
    int ol8MgzV1;
    char UgntiW [(1349 - 849)];
    int m;
    int m65B1g9;
    int BMb0562itun;
    int n;
    int OkH6iQ;
    cin >> UgntiW;
    n = strlen (UgntiW);
    for (ol8MgzV1 = (329 - 328); ol8MgzV1 < n; ol8MgzV1++) {
        OkH6iQ = n - ol8MgzV1 - (328 - 327);
        for (m = (639 - 639); OkH6iQ >= m; m++) {
            m65B1g9 = (98 - 98);
            for (BMb0562itun = (866 - 866); BMb0562itun <= ol8MgzV1; BMb0562itun++) {
                if (UgntiW[m + BMb0562itun] == UgntiW[m + ol8MgzV1 - BMb0562itun])
                    m65B1g9++;
            }
            if (m65B1g9 == ol8MgzV1 + (201 - 200)) {
                for (BMb0562itun = m; BMb0562itun <= m + ol8MgzV1; BMb0562itun++) {
                    cout << UgntiW[BMb0562itun];
                }
                cout << endl;
            }
        }
    }
    return (625 - 625);
}

