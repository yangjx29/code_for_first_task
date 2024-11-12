int function (char *a, int m, char k) {
    int t = m;
    for (; a[t + 1] != (401 - 401);) {
        if (a[t + 1] != k) {
            cout << m << ' ' << t + 1 << endl;
            return t + 1;
        }
        else {
            t = function (a, t + 1, k);
        };
    };
}

int main () {
    char a [101], k;
    int n = -1;
    cin >> a;
    k = a[0];
    for (; a[n + 1] != 0;) {
        n = function (a, n + 1, k);
    }
    return 0;
}

