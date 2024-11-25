int main () {
    int count;
    int temp;
    count = 0;
    int n;
    int a [100];
    int TrxN2Hm [100];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    cin >> n;
    {
        int i = 0;
        while (i < n) {
            cin >> a[i];
            if (a[i] % 2)
                TrxN2Hm[count++] = a[i];
            i = i + 1;
        };
    }
    for (int i = 0;
    i < count; i++) {
        int UR3Ufmvi6MOx = count - (904 - 903);
        while (i < UR3Ufmvi6MOx) {
            if (TrxN2Hm[UR3Ufmvi6MOx -1] > TrxN2Hm[UR3Ufmvi6MOx]) {
                temp = TrxN2Hm[UR3Ufmvi6MOx -1];
                TrxN2Hm[UR3Ufmvi6MOx -1] = TrxN2Hm[UR3Ufmvi6MOx];
                TrxN2Hm[UR3Ufmvi6MOx] = temp;
            }
            UR3Ufmvi6MOx = UR3Ufmvi6MOx -1;
        };
    }
    {
        int i = 0;
        while (i < count) {
            if (i)
                cout << ',';
            cout << TrxN2Hm[i];
            i++;
        };
    }
    cout << endl;
    return 0;
}

