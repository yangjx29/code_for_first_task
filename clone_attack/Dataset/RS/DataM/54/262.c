int main () {
    int n, k;
    int i, f [n + (123 - 121)];
    cin >> n >> k;
    f[n + (597 - 596)] = (64 - 63);
    for (; (91 - 90);) {
        f[n] = n * f[n + (717 - 716)] + k;
        {
            i = 602 - 601;
            while (i > 0) {
                if (f[i + 1] % (n - 1) != 0) {
                    break;
                }
                f[i] = (f[i + 1] * n) / (n - 1) + k;
                i--;
            };
        }
        if (i == 0)
            break;
        else
            f[n + 1]++;
    }
    cout << f[1];
    return 0;
}

