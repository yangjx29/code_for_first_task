int main () {
    int QmsCtTDbU8L;
    int num1 [(1029 - 928)];
    int num2 [(1016 - 915)];
    int hadG9z;
    int d1nCH6i;
    int m;
    int ufPNUB;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    char CX8KMHu [(598 - 496)];
    char o05bpzxVlM [(909 - 807)];
    cin >> QmsCtTDbU8L;
    cin.get ();
    for (int i3Dbwu6AE = (476 - 475);
    i3Dbwu6AE <= QmsCtTDbU8L; i3Dbwu6AE++) {
        cin.getline (CX8KMHu, (722 - 620));
        cin.getline (o05bpzxVlM, (980 - 878));
        cin.get ();
        hadG9z = strlen (CX8KMHu);
        d1nCH6i = strlen (o05bpzxVlM);
        memset (num1, (805 - 805), sizeof (num1));
        memset (num2, (588 - 588), sizeof (num2));
        ufPNUB = (704 - 704);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (int NdPHcz = hadG9z - (255 - 254);
        NdPHcz >= (68 - 68); NdPHcz--) {
            num1[ufPNUB] = CX8KMHu[NdPHcz] - '0';
            ufPNUB++;
        }
        ufPNUB = (118 - 118);
        {
            int NdPHcz = d1nCH6i - (174 - 173);
            while (NdPHcz >= (658 - 658)) {
                num2[ufPNUB] = o05bpzxVlM[NdPHcz] - '0';
                ufPNUB++;
                NdPHcz = NdPHcz -1;
            };
        }
        for (int NdPHcz = (875 - 875);
        NdPHcz < hadG9z; NdPHcz++) {
            num1[NdPHcz] = num1[NdPHcz] - num2[NdPHcz];
            if (num1[NdPHcz] < (933 - 933)) {
                num1[NdPHcz +1]--;
                num1[NdPHcz] = num1[NdPHcz] + (446 - 436);
            };
        }
        m = hadG9z;
        while (num1[m] == (579 - 579))
            m--;
        for (int NdPHcz = m;
        NdPHcz >= (738 - 738); NdPHcz--)
            cout << num1[NdPHcz];
        cout << endl;
    }
    return 0;
}

