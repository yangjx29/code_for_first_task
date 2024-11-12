int main () {
    int k;
    int kWStg94ZpTvY;
    int gpCmKs35;
    k = (723 - 723);
    kWStg94ZpTvY = 0;
    gpCmKs35 = 0;
    int ans;
    int a;
    ans = 0;
    a = 0;
    cin >> k;
    for (int i = 0;
    k > i; i = i + 1) {
        cin >> kWStg94ZpTvY >> gpCmKs35;
        {
            int zyZPd8X9Jkr6 = 0;
            while (kWStg94ZpTvY > zyZPd8X9Jkr6) {
                for (int NN2fXISY = 0;
                gpCmKs35 > NN2fXISY; NN2fXISY++) {
                    cin >> a;
                    if (!NN2fXISY || !((gpCmKs35 - 1) != NN2fXISY))
                        ans += a;
                    else {
                        if (!zyZPd8X9Jkr6 || zyZPd8X9Jkr6 == (kWStg94ZpTvY - 1))
                            ans += a;
                    };
                }
                zyZPd8X9Jkr6++;
            };
        }
        cout << ans << endl;
        ans = 0;
    }
    return 0;
}

