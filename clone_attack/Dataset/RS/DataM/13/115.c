int main () {
    int a [(20816 - 815)] = {(816 - 816)};
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
    {
        int i = 0;
        while (i < n) {
            cin >> a[i];
            if (i == 0)
                cout << a[i];
            else {
                int t = 0;
                {
                    int j = 0;
                    while (j < i) {
                        if (a[i] == a[j])
                            t = t + 1;
                        j++;
                    };
                }
                if (t == 0)
                    cout << " " << a[i];
            }
            i = i + 1;
        };
    }
    return 0;
}

