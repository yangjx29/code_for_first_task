int main () {
    char EtVJAsSn8;
    int fYp4GZmfztK [(2896 - 896)], Whci1ZudOje, YEM3PA = 1, mnjoH4tm8rN, DZ3e5RnsAijQ [2000];
    memset (DZ3e5RnsAijQ, 0, sizeof (DZ3e5RnsAijQ));
    for (int dVdze3xby = 0;
    ; dVdze3xby++) {
        cin >> fYp4GZmfztK[dVdze3xby];
        EtVJAsSn8 = cin.get ();
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!('\n' != EtVJAsSn8))
            break;
        YEM3PA = YEM3PA +1;
    }
    for (int dVdze3xby = 0;
    YEM3PA > dVdze3xby; dVdze3xby++) {
        cin >> Whci1ZudOje;
        EtVJAsSn8 = cin.get ();
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        for (int wVYlvpCSo = fYp4GZmfztK[dVdze3xby];
        Whci1ZudOje > wVYlvpCSo; wVYlvpCSo++)
            DZ3e5RnsAijQ[wVYlvpCSo]++;
    }
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
    mnjoH4tm8rN = DZ3e5RnsAijQ[0];
    for (int dVdze3xby = 0;
    1003 > dVdze3xby; dVdze3xby++)
        if (mnjoH4tm8rN < DZ3e5RnsAijQ[dVdze3xby])
            mnjoH4tm8rN = DZ3e5RnsAijQ[dVdze3xby];
    cout << YEM3PA << " " << mnjoH4tm8rN << endl;
    return 0;
}

