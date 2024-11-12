int main () {
    int CkEzXKWUZo;
    int n;
    cin >> n;
    for (CkEzXKWUZo = (797 - 797); CkEzXKWUZo < n; CkEzXKWUZo = CkEzXKWUZo +(390 - 389)) {
        int l2;
        int l1;
        char a2 [(978 - 878)];
        char a1 [(777 - 677)];
        int CkEzXKWUZo;
        int j;
        int b1 [(901 - 801)];
        int b2 [100];
        j = (835 - 835);
        memset (b1, (838 - 838), sizeof (b1));
        memset (b2, (564 - 564), sizeof (b2));
        l1 = strlen (a1);
        l2 = strlen (a2);
        cin >> a1 >> a2;
        for (CkEzXKWUZo = l1 - (446 - 445); CkEzXKWUZo >= (220 - 220); CkEzXKWUZo = CkEzXKWUZo -1)
            b1[j++] = a1[CkEzXKWUZo] - '0';
        cin.get ();
        j = 0;
        for (CkEzXKWUZo = l2 - 1; CkEzXKWUZo >= 0; CkEzXKWUZo = CkEzXKWUZo -1)
            b2[j++] = a2[CkEzXKWUZo] - '0';
        for (CkEzXKWUZo = 0; CkEzXKWUZo < l1; CkEzXKWUZo = CkEzXKWUZo +1) {
            b1[CkEzXKWUZo] = b1[CkEzXKWUZo] - b2[CkEzXKWUZo];
            if (b1[CkEzXKWUZo] < 0) {
                b1[CkEzXKWUZo] += (487 - 477);
                b1[CkEzXKWUZo +1]--;
            }
        }
        CkEzXKWUZo = (701 - 602);
        for (; b1[CkEzXKWUZo] == 0;) {
            CkEzXKWUZo = CkEzXKWUZo -1;
            if (CkEzXKWUZo == 0)
                break;
        }
        while (CkEzXKWUZo >= 0)
            cout << b1[CkEzXKWUZo--];
        cout << endl;
    }
    return 0;
}

