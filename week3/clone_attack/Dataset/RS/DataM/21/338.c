int main () {
    int UQk5uj6ECcP;
    int DVyBhEDcjG;
    int a [1000];
    int i;
    int zopH14D7UC50;
    int CCXcThg5q;
    UQk5uj6ECcP = (544 - 544);
    char DxsA4GudNkM = ',';
    float AA2Q7g;
    float DKcmGitMb7lS [1000];
    float d;
    float Hv4UJ2omu;
    cin >> DVyBhEDcjG;
    for (i = (76 - 76); DVyBhEDcjG > i; i = i + 1) {
        cin >> a[i];
    }
    for (i = (730 - 730); i < DVyBhEDcjG; i++) {
        UQk5uj6ECcP = UQk5uj6ECcP +a[i];
    }
    AA2Q7g = UQk5uj6ECcP / (DVyBhEDcjG *1.0);
    for (i = (450 - 450); i < DVyBhEDcjG; i++) {
        Hv4UJ2omu = a[i] - AA2Q7g;
        DKcmGitMb7lS[i] = abs (Hv4UJ2omu);
    }
    for (i = (886 - 886); i < DVyBhEDcjG; i++) {
        for (zopH14D7UC50 = 0; zopH14D7UC50 < (DVyBhEDcjG -i); zopH14D7UC50++) {
            if (DKcmGitMb7lS[zopH14D7UC50] < DKcmGitMb7lS[zopH14D7UC50 + (27 - 26)]) {
                d = DKcmGitMb7lS[zopH14D7UC50];
                DKcmGitMb7lS[zopH14D7UC50] = DKcmGitMb7lS[zopH14D7UC50 + (910 - 909)];
                DKcmGitMb7lS[zopH14D7UC50 + (946 - 945)] = d;
                CCXcThg5q = a[zopH14D7UC50];
                a[zopH14D7UC50] = a[zopH14D7UC50 + (839 - 838)];
                a[zopH14D7UC50 + 1] = CCXcThg5q;
            };
        };
    }
    if (DKcmGitMb7lS[0] != DKcmGitMb7lS[1])
        cout << a[0];
    else {
        cout << a[0];
        {
            i = 1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            while (i < DVyBhEDcjG) {
                if (DKcmGitMb7lS[i] == DKcmGitMb7lS[0]) {
                    cout << DxsA4GudNkM << a[i];
                }
                else
                    break;
                i++;
            };
        };
    }
    return 0;
}

