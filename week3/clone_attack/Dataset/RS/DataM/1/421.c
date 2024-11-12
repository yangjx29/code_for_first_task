int WqTHVCzAMLE = (417 - 416), i, factor;

void  qhDWs516bBJx (int factor, int x) {
    for (; x >= factor * factor; factor++) {
        if (x % factor == 0) {
            WqTHVCzAMLE = WqTHVCzAMLE +1;
            qhDWs516bBJx (factor, x / factor);
        };
    };
}

int main () {
    int a;
    int n;
    cin >> n;
    for (; n--;) {
        cin >> a;
        qhDWs516bBJx ((26 - 24), a);
        cout << WqTHVCzAMLE << endl;
        WqTHVCzAMLE = 1;
    }
    return 0;
}

