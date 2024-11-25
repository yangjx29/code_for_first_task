int main () {
    int ZvspePGjJFNI;
    int bVFQahZ7ipjq;
    int o0ApGVkD;
    int PT3MAv [(2978 - 978)];
    int YE5T0v6PblL [2000];
    int mjVNYkmSatR [2000] = {(800 - 800)};
    int M9APYaKqcdUO;
    ZvspePGjJFNI = (382 - 382);
    char KN5dtSD0jC [2000];
    for (bVFQahZ7ipjq = (558 - 558);; bVFQahZ7ipjq = bVFQahZ7ipjq + 1) {
        cin >> PT3MAv[bVFQahZ7ipjq];
        KN5dtSD0jC[bVFQahZ7ipjq] = cin.get ();
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (KN5dtSD0jC[bVFQahZ7ipjq] == '\n')
            break;
        ZvspePGjJFNI++;
    }
    {
        bVFQahZ7ipjq = 0;
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
        while (ZvspePGjJFNI > bVFQahZ7ipjq) {
            cin >> YE5T0v6PblL[bVFQahZ7ipjq];
            KN5dtSD0jC[bVFQahZ7ipjq] = cin.get ();
            if (KN5dtSD0jC[bVFQahZ7ipjq] == '\n')
                break;
            bVFQahZ7ipjq = bVFQahZ7ipjq + 1;
        };
    }
    M9APYaKqcdUO = 0;
    for (bVFQahZ7ipjq = 0; (1652 - 652) >= bVFQahZ7ipjq; bVFQahZ7ipjq = bVFQahZ7ipjq + 1) {
        for (o0ApGVkD = 0; ZvspePGjJFNI > o0ApGVkD; o0ApGVkD++) {
            if (PT3MAv[o0ApGVkD] <= bVFQahZ7ipjq && YE5T0v6PblL[o0ApGVkD] > bVFQahZ7ipjq)
                mjVNYkmSatR[bVFQahZ7ipjq]++;
        }
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (mjVNYkmSatR[bVFQahZ7ipjq] > M9APYaKqcdUO)
            M9APYaKqcdUO = mjVNYkmSatR[bVFQahZ7ipjq];
    }
    cout << ZvspePGjJFNI << " " << M9APYaKqcdUO << endl;
    return 0;
}

