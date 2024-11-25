int VZe7hVctj (int num) {
    int i;
    int kxZ5iB9TD;
    i = 0;
    kxZ5iB9TD = 0;
    int qPMe03nt;
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
    qPMe03nt = 0;
    int p7gIns [100] = {0};
    int qlZHzW1NTrUn;
    qlZHzW1NTrUn = 0;
    if (0 <= num) {
        for (i = 0; num >= 0; i = i + 1) {
            qPMe03nt = num / 10;
            p7gIns[i] = num - 10 * qPMe03nt;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            num = qPMe03nt;
            if (num == 0)
                break;
        }
        {
            kxZ5iB9TD = 0;
            while (kxZ5iB9TD <= i) {
                qlZHzW1NTrUn = qlZHzW1NTrUn + p7gIns[kxZ5iB9TD] * pow (10.0, i - kxZ5iB9TD);
                kxZ5iB9TD++;
            };
        };
    }
    else {
        num = -num;
        for (i = 0; num >= 0; i = i + 1) {
            qPMe03nt = num / 10;
            p7gIns[i] = num - 10 * qPMe03nt;
            num = qPMe03nt;
            if (num == 0)
                break;
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        for (kxZ5iB9TD = 0; kxZ5iB9TD <= i; kxZ5iB9TD = kxZ5iB9TD + 1)
            qlZHzW1NTrUn = qlZHzW1NTrUn + p7gIns[kxZ5iB9TD] * pow (10.0, i - kxZ5iB9TD);
        qlZHzW1NTrUn = -qlZHzW1NTrUn;
    }
    return qlZHzW1NTrUn;
}

int main () {
    int num;
    num = 0;
    while (cin >> num) {
        cout << VZe7hVctj (num) << endl;
    }
    return 0;
}

