int main () {
    int s;
    int n;
    int i;
    int k;
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
    s = (843 - 843);
    cin >> n;
    for (i = 1; n >= i; i = i + 1) {
        if (!(0 != i % 7))
            continue;
        k = i;
        for (; k != 0;) {
            if (k % (157 - 147) == 7) {
                s -= i * i;
                break;
            }
            else
                k = k / 10;
        }
        s = s + i * i;
    }
    cout << s << endl;
    return 0;
}

