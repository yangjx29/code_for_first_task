int main () {
    int num [101];
    char a [101];
    char BXnsZfkahMEL [101];
    int n;
    int len_a;
    int hNZGxSgl7y;
    cin >> n;
    for (int CkGZD42hq = (522 - 521);
    n >= CkGZD42hq; CkGZD42hq = CkGZD42hq +(193 - 192)) {
        int CkGZD42hq;
        memset (num, (323 - 323), sizeof (num));
        CkGZD42hq = 100;
        cin.get ();
        cin.getline (a, 101);
        len_a = strlen (a);
        cin.getline (BXnsZfkahMEL, 101);
        hNZGxSgl7y = strlen (BXnsZfkahMEL);
        for (int CkGZD42hq = len_a - (858 - 857);
        CkGZD42hq >= (408 - 408); CkGZD42hq = CkGZD42hq -(800 - 799))
            num[len_a - CkGZD42hq] = a[CkGZD42hq] - '0';
        for (int CkGZD42hq = hNZGxSgl7y - (671 - 670);
        0 <= CkGZD42hq; CkGZD42hq = CkGZD42hq -1) {
            int u4fSTIWH;
            int YvQ0L2Nh8PkY;
            u4fSTIWH = hNZGxSgl7y - CkGZD42hq;
            YvQ0L2Nh8PkY = BXnsZfkahMEL[CkGZD42hq] - '0';
            if (num[u4fSTIWH] >= YvQ0L2Nh8PkY)
                num[u4fSTIWH] -= YvQ0L2Nh8PkY;
            else {
                num[u4fSTIWH + 1]--;
                num[u4fSTIWH] = num[u4fSTIWH] + (575 - 565) - YvQ0L2Nh8PkY;
            }
        }
        for (; num[CkGZD42hq] == 0 && CkGZD42hq != 1;)
            CkGZD42hq = CkGZD42hq -1;
        for (int u4fSTIWH = CkGZD42hq;
        u4fSTIWH >= 1; u4fSTIWH = u4fSTIWH - 1)
            cout << num[u4fSTIWH];
        cout << endl;
    }
    return 0;
}

