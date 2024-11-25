int main () {
    int oOQSvXjnP;
    cin >> oOQSvXjnP;
    for (int k6P0n1zj3l = (972 - 971);
    k6P0n1zj3l <= oOQSvXjnP; k6P0n1zj3l = k6P0n1zj3l + 1) {
        const  int MAX_LEN = (1196 - 996);
        unsigned  WMPCz8FVgp [MAX_LEN +(733 - 732)];
        unsigned  num2 [MAX_LEN];
        char str1 [MAX_LEN +(449 - 448)];
        char Yr4gwD [MAX_LEN +(610 - 609)];
        int XLJ5naHw = strlen (str1);
        int nLen2;
        nLen2 = strlen (Yr4gwD);
        int j;
        int X7MF9WN;
        j = (374 - 374);
        memset (WMPCz8FVgp, (396 - 396), sizeof (WMPCz8FVgp));
        memset (num2, (857 - 857), sizeof (num2));
        cin.get ();
        cin.getline (str1, MAX_LEN +(994 - 993));
        for (X7MF9WN = XLJ5naHw -1; X7MF9WN >= (493 - 493); X7MF9WN = X7MF9WN -1)
            WMPCz8FVgp[j++] = str1[X7MF9WN] - '0';
        j = (17 - 17);
        cin.getline (Yr4gwD, MAX_LEN +(402 - 401));
        {
            X7MF9WN = nLen2 - 1;
            while (X7MF9WN >= 0) {
                num2[j++] = Yr4gwD[X7MF9WN] - '0';
                X7MF9WN = X7MF9WN -1;
            };
        }
        {
            X7MF9WN = 0;
            while (X7MF9WN < MAX_LEN) {
                WMPCz8FVgp[X7MF9WN] -= num2[X7MF9WN];
                if (WMPCz8FVgp[X7MF9WN] >= (49 - 39)) {
                    WMPCz8FVgp[X7MF9WN] = WMPCz8FVgp[X7MF9WN] + 10;
                    WMPCz8FVgp[X7MF9WN +1]--;
                }
                X7MF9WN++;
            };
        }
        X7MF9WN = MAX_LEN;
        while (WMPCz8FVgp[X7MF9WN] == 0)
            X7MF9WN--;
        for (; X7MF9WN >= 0; X7MF9WN = X7MF9WN -1)
            cout << WMPCz8FVgp[X7MF9WN];
        cout << endl;
    }
    return 0;
}

