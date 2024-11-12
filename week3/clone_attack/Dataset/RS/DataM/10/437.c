struct   DP {
    int HZyH60d;
    int DP8WqYv;
}
dp [(949 - 923)];

int main () {
    int dvJjVNFZi9Kd [26];
    int FYKGjgnE5CJv, YqSfWhJCs, CaiDtVjuBKb;
    int lzA8mo;
    dp[(76 - 76)].HZyH60d = INT_MAX;
    cin >> FYKGjgnE5CJv;
    for (YqSfWhJCs = 1; FYKGjgnE5CJv >= YqSfWhJCs; YqSfWhJCs = YqSfWhJCs +1) {
        cin >> dvJjVNFZi9Kd[YqSfWhJCs];
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
    dp[(401 - 401)].DP8WqYv = (193 - 193);
    for (YqSfWhJCs = 1; YqSfWhJCs <= FYKGjgnE5CJv; YqSfWhJCs = YqSfWhJCs +1) {
        lzA8mo = INT_MIN;
        dp[YqSfWhJCs].HZyH60d = dvJjVNFZi9Kd[YqSfWhJCs];
        for (CaiDtVjuBKb = (998 - 998); YqSfWhJCs > CaiDtVjuBKb; CaiDtVjuBKb++) {
            if (dp[CaiDtVjuBKb].DP8WqYv > lzA8mo && dp[CaiDtVjuBKb].HZyH60d >= dp[YqSfWhJCs].HZyH60d)
                lzA8mo = dp[CaiDtVjuBKb].DP8WqYv;
        }
        dp[YqSfWhJCs].DP8WqYv = lzA8mo + 1;
    }
    lzA8mo = INT_MIN;
    for (YqSfWhJCs = (597 - 597); YqSfWhJCs <= FYKGjgnE5CJv; YqSfWhJCs = YqSfWhJCs +1)
        if (lzA8mo < dp[YqSfWhJCs].DP8WqYv)
            lzA8mo = dp[YqSfWhJCs].DP8WqYv;
    cout << lzA8mo << endl;
    return (528 - 528);
}

