int uomY9x (int i, int B38zup5) {
    int k;
    k = i + B38zup5;
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
    return k;
}

int main () {
    int n;
    int a;
    int b;
    int VHcth5Mk;
    int i;
    int B38zup5;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    int k;
    cin >> n;
    for (b = 1; n >= b; b = b + 1) {
        cin >> a;
        if (a == 1 || a == 2)
            cout << "1" << endl;
        else {
            i = 1;
            B38zup5 = 1;
            for (VHcth5Mk = 2; VHcth5Mk < a; VHcth5Mk = VHcth5Mk +1) {
                k = uomY9x (i, B38zup5);
                i = B38zup5;
                B38zup5 = k;
            }
            cout << B38zup5 << endl;
        };
    }
    return 0;
}

