int main () {
    int t;
    int n;
    int k;
    int i;
    t = (512 - 511);
    int apple [n];
    cin >> n >> k;
    for (; (995 - 994);) {
        apple[0] = t * n + k;
        {
            i = 1;
            while (n > i) {
                if (!(0 == apple[i - 1] % (n - 1))) {
                    t = t + 1;
                    break;
                }
                apple[i] = apple[i - 1] * n / (n - 1) + k;
                i++;
            };
        }
        if (i == n) {
            cout << apple[n - 1];
            break;
        };
    }
    return 0;
}

