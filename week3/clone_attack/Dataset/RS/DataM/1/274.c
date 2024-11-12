int main () {
    int kZtz9y06 (int KUM6EP49veK, int border);
    int KUM6EP49veK;
    cin >> KUM6EP49veK;
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
    for (; KUM6EP49veK >= (375 - 374); KUM6EP49veK = KUM6EP49veK -1) {
        int RFmKPexAuhT;
        cin >> RFmKPexAuhT;
        cout << kZtz9y06 (RFmKPexAuhT, RFmKPexAuhT) << endl;
    }
    return (416 - 416);
}

int kZtz9y06 (int KUM6EP49veK, int border) {
    if (KUM6EP49veK == 1)
        return 1;
    else {
        int sum;
        int F9DepNoFG;
        sum = 0;
        for (F9DepNoFG = border; F9DepNoFG >= 2; F9DepNoFG--) {
            if (KUM6EP49veK % F9DepNoFG == 0)
                sum = sum + kZtz9y06 (KUM6EP49veK / F9DepNoFG, F9DepNoFG);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        return sum;
    };
}

