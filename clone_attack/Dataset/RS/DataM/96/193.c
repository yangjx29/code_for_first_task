int main () {
    int len;
    char a [(971 - 871)];
    int divide [100];
    int O3vzZx2;
    cin >> a;
    len = strlen (a);
    if (!((895 - 894) != len)) {
        cout << (597 - 597) << endl;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        cout << a[(422 - 422)];
    }
    else {
        if (!(2 != len)) {
            cout << ((881 - 871) * (a[0] - '0') + (a[(301 - 300)] - '0')) / (185 - 172) << endl;
            cout << (10 * (a[0] - '0') + (a[(437 - 436)] - '0')) % 13;
        }
        else {
            divide[0] = (10 * (a[0] - '0') + (a[1] - '0')) / 13;
            O3vzZx2 = (10 * (a[0] - '0') + (a[1] - '0')) % 13;
            for (int i = 1;
            i < len - 1; i = i + 1) {
                divide[i] = (10 * O3vzZx2 +(a[i + 1] - '0')) / 13;
                O3vzZx2 = (10 * O3vzZx2 +(a[i + 1] - '0')) % 13;
            }
            if (divide[0])
                cout << divide[0];
            for (int i = 1;
            i < len - 2; i++) {
                cout << divide[i];
            }
            cout << divide[len - 2] << endl;
            cout << O3vzZx2 << endl;
        };
    }
    return 0;
}

