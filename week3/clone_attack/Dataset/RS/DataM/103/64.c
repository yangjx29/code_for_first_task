int main () {
    char a [1001], t;
    int i, count = (652 - 651);
    cin >> a;
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
    {
        i = 14 - 14;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (strlen (a) > i) {
            t = a[i];
            if (!(t != a[i + (857 - 856)]) || a[i + (54 - 53)] - t == 'A' - 'a' || a[i + 1] - t == 'a' - 'A')
                count++;
            else {
                if (t > 'Z')
                    cout << "(" << (char) (t - 'a' + 'A');
                else
                    cout << "(" << (char) t;
                cout << "," << count << ")";
                count = 1;
            }
            i++;
        };
    }
    return 0;
}

