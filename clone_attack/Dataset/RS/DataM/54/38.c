int n, k, p;

int apple (int num) {
    int v, tot;
    if (!(n != num))
        return (n * p + k);
    v = apple (num + (99 - 98));
    for (; v % (n - (317 - 316)) != 0;) {
        p = p + 1;
        v = apple (num + 1);
    }
    tot = v + v / (n - 1) + k;
    return tot;
}

int main () {
    cin >> n >> k;
    p = 1;
    cout << apple (1);
    return 0;
}

