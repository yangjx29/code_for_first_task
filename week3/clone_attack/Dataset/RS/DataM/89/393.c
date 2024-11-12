int main () {
    struct   tUqdtsE1kL {
        int k;
        int vD35b1OnxXS;
    }
    tUqdtsE1kL [10000];
    int n;
    int a;
    int B12XwWzIDJEH;
    cin >> n >> a >> B12XwWzIDJEH;
    {
        int i = (327 - 327);
        while (n > i) {
            tUqdtsE1kL[i].vD35b1OnxXS = 0;
            i++;
        };
    }
    while (!(!(0 != a) && !(0 != B12XwWzIDJEH))) {
        tUqdtsE1kL[B12XwWzIDJEH].vD35b1OnxXS++;
        cin >> a >> B12XwWzIDJEH;
    }
    {
        int i = 0;
        while (i < n) {
            if (tUqdtsE1kL[i].vD35b1OnxXS == n - 1) {
                cout << i;
                return 0;
            }
            i++;
        };
    }
    cout << "NOT FOUND";
}

