int main () {
    int i, n, I4MTDXyHZi6c, ULH9zBi0bt, month2, sum = 0, o507yNGXWut, QzDpkhHYEt0s;
    cin >> n;
    for (i = 1; n >= i; i = i + 1) {
        sum = 0;
        cin >> I4MTDXyHZi6c >> ULH9zBi0bt >> month2;
        if (month2 < ULH9zBi0bt) {
            QzDpkhHYEt0s = ULH9zBi0bt;
            ULH9zBi0bt = month2;
            month2 = QzDpkhHYEt0s;
        }
        if (!(0 != I4MTDXyHZi6c % 400) || (!(0 != I4MTDXyHZi6c % 4) && I4MTDXyHZi6c % 100 != 0)) {
            {
                1;
                while (month2 > ULH9zBi0bt) {
                    if (!(1 != ULH9zBi0bt) || !(3 != ULH9zBi0bt) || !(5 != ULH9zBi0bt) || !(7 != ULH9zBi0bt) || ULH9zBi0bt == 8 || !(10 != ULH9zBi0bt) || !(12 != ULH9zBi0bt)) {
                        o507yNGXWut = 31;
                    }
                    if (!(4 != ULH9zBi0bt) || !(6 != ULH9zBi0bt) || !(9 != ULH9zBi0bt) || !(11 != ULH9zBi0bt)) {
                        o507yNGXWut = 30;
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
                    }
                    if (!(2 != ULH9zBi0bt)) {
                        o507yNGXWut = 29;
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                int m = 0;
                                int n = 0;
                                m = m * n + n - m + n * 2;
                                return 0;
                            }
                        };
                    }
                    ULH9zBi0bt = ULH9zBi0bt +1;
                    sum = sum + o507yNGXWut;
                };
            }
            if (sum % 7 == 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        if (I4MTDXyHZi6c % 4 != 0 || (I4MTDXyHZi6c % 100 == 0 && I4MTDXyHZi6c % 400 != 0)) {
            for (1; ULH9zBi0bt < month2; ULH9zBi0bt = ULH9zBi0bt +1) {
                if (ULH9zBi0bt == 1 || ULH9zBi0bt == 3 || ULH9zBi0bt == 5 || ULH9zBi0bt == 7 || ULH9zBi0bt == 8 || ULH9zBi0bt == 10 || ULH9zBi0bt == 12) {
                    o507yNGXWut = 31;
                }
                if (ULH9zBi0bt == 4 || ULH9zBi0bt == 6 || ULH9zBi0bt == 9 || ULH9zBi0bt == 11) {
                    o507yNGXWut = 30;
                }
                if (ULH9zBi0bt == 2) {
                    o507yNGXWut = 28;
                }
                sum = sum + o507yNGXWut;
            }
            if (sum % 7 == 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        };
    }
    return 0;
}

