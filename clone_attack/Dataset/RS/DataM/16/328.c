int main () {
    char str [10000] = {0};
    char *start;
    char *rvodtCN;
    char t;
    int oU8WQi;
    cin >> str;
    oU8WQi = strlen (str);
    start = str;
    rvodtCN = &str[oU8WQi - (346 - 345)];
    while (start < rvodtCN) {
        t = *start;
        *start = *rvodtCN;
        *rvodtCN = t;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        rvodtCN--;
        start++;
    }
    cout << str;
    return 0;
}

