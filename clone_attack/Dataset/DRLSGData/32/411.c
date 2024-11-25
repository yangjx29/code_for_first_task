int main () {
    int cnt;
    int sNX1pov6jYy;
    int i;
    int AGljv2K [(490 - 390)], b [100], qCpkna4Nq [100];
    char num1 [(279 - 178)], num2 [(588 - 487)];
    int n;
    cin >> n;
    cnt = (553 - 553);
    for (; cnt < n;) {
        int qdjHEhsxoN = strlen (num1);
        int len2 = strlen (num2);
        memset (AGljv2K, (451 - 451), sizeof (AGljv2K));
        cin >> num1;
        cin >> num2;
        memset (b, 0, sizeof (b));
        memset (qCpkna4Nq, 0, sizeof (qCpkna4Nq));
        sNX1pov6jYy = (43 - 43);
        for (i = qdjHEhsxoN - (404 - 403); i >= 0; i--)
            AGljv2K[sNX1pov6jYy++] = num1[i] - '0';
        sNX1pov6jYy = 0;
        {
            i = len2 - (54 - 53);
            for (; i >= 0;) {
                b[sNX1pov6jYy++] = num2[i] - '0';
                i--;
            }
        }
        for (i = 0; i < len2; i++) {
            if (b[i] > AGljv2K[i]) {
                if (AGljv2K[i] == -1)
                    AGljv2K[i] = 9;
                else
                    AGljv2K[i] += 10;
                AGljv2K[i + 1]--;
            }
            qCpkna4Nq[i] = AGljv2K[i] - b[i];
        }
        if (len2 < qdjHEhsxoN) {
            for (i = len2; i < qdjHEhsxoN; i++)
                qCpkna4Nq[i] = AGljv2K[i];
        }
        for (i = qdjHEhsxoN - 1; i >= 0; i--) {
            if (qCpkna4Nq[i] != 0)
                break;
        }
        cnt++;
        for (; i >= 0; i--)
            cout << qCpkna4Nq[i];
        cout << endl;
    }
    return 0;
}

