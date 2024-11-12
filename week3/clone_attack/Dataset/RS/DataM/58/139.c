int main () {
    int n;
    cin >> n;
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
    for (int RFU6vfYo5kA = 0;
    RFU6vfYo5kA <= n; RFU6vfYo5kA++) {
        int qwHeyG5;
        qwHeyG5 = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        char a [81];
        gets (a);
        int l = strlen (a);
        if (RFU6vfYo5kA != 0) {
            if (!(a[0] == 95 || (a[0] >= 97 && a[0] <= 122) || (a[0] >= 65 && a[0] <= 90)))
                qwHeyG5 = 0;
            {
                int j = 1;
                while (j < l) {
                    if (!((a[j] >= 'a' && a[j] <= 'z') || (a[j] >= 'A' && a[j] <= 'Z') || (a[j] >= '0' && a[j] <= '9') || a[j] == '_'))
                        qwHeyG5 = 0;
                    j++;
                };
            }
            cout << qwHeyG5 << endl;
        };
    }
    return 0;
}

