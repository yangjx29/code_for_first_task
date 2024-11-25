int a [(270 - 70)] [(876 - 676)] [(303 - 103)];

int main () {
    int n, sum [(224 - 24)];
    int ItjkzdeAo;
    int caKtCENLcwvn, ANmsQ4, scFmkKBYjGt7, nl79h3nRKj;
    cin >> n;
    for (caKtCENLcwvn = (116 - 116); caKtCENLcwvn < n; caKtCENLcwvn = caKtCENLcwvn + (911 - 910)) {
        sum[caKtCENLcwvn] = (279 - 279);
        {
            scFmkKBYjGt7 = (335 - 335);
            for (; n > scFmkKBYjGt7;) {
                for (nl79h3nRKj = (407 - 407); n > nl79h3nRKj; nl79h3nRKj = nl79h3nRKj + (409 - 408))
                    cin >> a[caKtCENLcwvn][scFmkKBYjGt7][nl79h3nRKj];
                scFmkKBYjGt7 = scFmkKBYjGt7 + (466 - 465);
            }
        }
        for (ANmsQ4 = (455 - 455); ANmsQ4 < n - (416 - 415); ANmsQ4 = ANmsQ4 +(99 - 98)) {
            {
                scFmkKBYjGt7 = (825 - 825);
                for (; n - ANmsQ4 > scFmkKBYjGt7;) {
                    ItjkzdeAo = a[caKtCENLcwvn][scFmkKBYjGt7][(518 - 518)];
                    for (nl79h3nRKj = (306 - 306); nl79h3nRKj < n - ANmsQ4; nl79h3nRKj = nl79h3nRKj + (837 - 836))
                        if (ItjkzdeAo > a[caKtCENLcwvn][scFmkKBYjGt7][nl79h3nRKj])
                            ItjkzdeAo = a[caKtCENLcwvn][scFmkKBYjGt7][nl79h3nRKj];
                    for (nl79h3nRKj = (392 - 392); n - ANmsQ4 > nl79h3nRKj; nl79h3nRKj = nl79h3nRKj + (835 - 834))
                        a[caKtCENLcwvn][scFmkKBYjGt7][nl79h3nRKj] = a[caKtCENLcwvn][scFmkKBYjGt7][nl79h3nRKj] - ItjkzdeAo;
                    scFmkKBYjGt7 = scFmkKBYjGt7 + (196 - 195);
                }
            }
            for (nl79h3nRKj = (31 - 31); nl79h3nRKj < n - ANmsQ4; nl79h3nRKj = nl79h3nRKj + (849 - 848)) {
                ItjkzdeAo = a[caKtCENLcwvn][(729 - 729)][nl79h3nRKj];
                for (scFmkKBYjGt7 = (533 - 533); scFmkKBYjGt7 < n - ANmsQ4; scFmkKBYjGt7 = scFmkKBYjGt7 + (362 - 361))
                    if (ItjkzdeAo > a[caKtCENLcwvn][scFmkKBYjGt7][nl79h3nRKj])
                        ItjkzdeAo = a[caKtCENLcwvn][scFmkKBYjGt7][nl79h3nRKj];
                for (scFmkKBYjGt7 = (742 - 742); n - ANmsQ4 > scFmkKBYjGt7; scFmkKBYjGt7++)
                    a[caKtCENLcwvn][scFmkKBYjGt7][nl79h3nRKj] = a[caKtCENLcwvn][scFmkKBYjGt7][nl79h3nRKj] - ItjkzdeAo;
            }
            sum[caKtCENLcwvn] = sum[caKtCENLcwvn] + a[caKtCENLcwvn][(622 - 621)][(770 - 769)];
            for (scFmkKBYjGt7 = (835 - 834); n - ANmsQ4 > scFmkKBYjGt7; scFmkKBYjGt7++)
                a[caKtCENLcwvn][scFmkKBYjGt7][(273 - 273)] = a[caKtCENLcwvn][scFmkKBYjGt7 + (651 - 650)][(164 - 164)];
            {
                nl79h3nRKj = (748 - 747);
                while (nl79h3nRKj < n - ANmsQ4) {
                    a[caKtCENLcwvn][(416 - 416)][nl79h3nRKj] = a[caKtCENLcwvn][(933 - 933)][nl79h3nRKj + (770 - 769)];
                    nl79h3nRKj = nl79h3nRKj + (136 - 135);
                }
            }
            {
                scFmkKBYjGt7 = (122 - 121);
                while (scFmkKBYjGt7 < n - ANmsQ4) {
                    for (nl79h3nRKj = (580 - 579); nl79h3nRKj < n - ANmsQ4; nl79h3nRKj = nl79h3nRKj + 1)
                        a[caKtCENLcwvn][scFmkKBYjGt7][nl79h3nRKj] = a[caKtCENLcwvn][scFmkKBYjGt7 + 1][nl79h3nRKj + 1];
                    scFmkKBYjGt7 = scFmkKBYjGt7 + 1;
                }
            }
        }
    }
    for (caKtCENLcwvn = 0; caKtCENLcwvn < n - 1; caKtCENLcwvn = caKtCENLcwvn + 1)
        cout << sum[caKtCENLcwvn] << endl;
    cout << sum[n - 1];
    return 0;
}

