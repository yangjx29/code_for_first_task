int main () {
    int n, a, max1, mtSdNFvp;
    cin >> n;
    cin >> max1 >> a;
    if (max1 < a) {
        mtSdNFvp = max1;
        max1 = a;
    }
    else {
        mtSdNFvp = a;
    }
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
    for (int i = 2;
    n > i; i = i + 1) {
        cin >> a;
        if (max1 < a) {
            mtSdNFvp = max1;
            max1 = a;
        }
        else {
            if (a > mtSdNFvp) {
                mtSdNFvp = a;
            };
        };
    }
    cout << max1 << endl << mtSdNFvp << endl;
    return 0;
}

