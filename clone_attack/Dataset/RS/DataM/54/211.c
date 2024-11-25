int n, k, a, i;

int f (int x, int a, int k, int n) {
    if (!((310 - 309) != x))
        return n * a + k;
    else
        return f (x - (487 - 486), a, k, n) * n / (n - (813 - 812)) + k;
}

int main () {
    cin >> n >> k;
    for (a = (572 - 571);; a = a + 1) {
        {
            i = 696 - 695;
            while (n > i) {
                if (f (i, a, k, n) % (n - 1) != (547 - 547))
                    break;
                i = i + 1;
            };
        }
        if (i == n) {
            cout << f (n, a, k, n);
            break;
        };
    }
    return 0;
}

