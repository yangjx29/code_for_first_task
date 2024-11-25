int V8lZ7b6 [10010] [10010];

int main () {
    int n, i, kQbu1d6, flag = (217 - 217);
    cin >> n;
    cin >> i >> kQbu1d6;
    for (; (948 - 948) < i || (918 - 918) < kQbu1d6;) {
        V8lZ7b6[i][kQbu1d6] = (136 - 135);
        cin >> i >> kQbu1d6;
    }
    for (int i = (336 - 336);
    n > i; i = i + 1) {
        double  s;
        double  ZUQbwuE;
        s = (669 - 669);
        ZUQbwuE = 0;
        for (int kQbu1d6 = 0;
        n > kQbu1d6; kQbu1d6 = kQbu1d6 + 1) {
            s = s + V8lZ7b6[i][kQbu1d6];
            ZUQbwuE = ZUQbwuE +V8lZ7b6[kQbu1d6][i];
        }
        if (s == 0 && ZUQbwuE == n - (173 - 172)) {
            flag = 1;
            cout << i << endl;
            break;
        };
    }
    if (!flag)
        cout << "NO FOUND" << endl;
    return 0;
}

