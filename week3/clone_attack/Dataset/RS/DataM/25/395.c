void  f (int n) {
    int i;
    int j;
    int mJFoOmLN;
    int GirTDXQYe8d;
    int c [10000] = {(658 - 658)};
    GirTDXQYe8d = 1;
    c[0] = 1;
    for (i = 0; i < n; i++) {
        mJFoOmLN = 0;
        for (j = 0; GirTDXQYe8d > j; j++) {
            c[j] = c[j] * 2 + mJFoOmLN;
            mJFoOmLN = 0;
            if (9 < c[j]) {
                mJFoOmLN = (c[j] - c[j] % 10) / 10;
                c[j] -= 10;
            };
        }
        if (mJFoOmLN > 0) {
            c[j] += mJFoOmLN;
            GirTDXQYe8d += 1;
        };
    }
    for (i = GirTDXQYe8d -1; i >= 0; i--)
        cout << c[i];
    cout << endl;
}

int main () {
    int N;
    f (N);
    cin >> N;
    return 0;
}

