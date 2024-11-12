int main () {
    int au7KAnj54 [20001] = {0};
    int n;
    cin >> n;
    for (int i = 1;
    n >= i; i = i + 1) {
        cin >> au7KAnj54[i];
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
        int i = 1;
        while (i <= n) {
            {
                int j = 1;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                while (i >= j) {
                    if (i != 1 && au7KAnj54[j - 1] == au7KAnj54[i])
                        au7KAnj54[i] = 0;
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    {
        int i = 1;
        while (i <= n) {
            if (i != 1 && au7KAnj54[i] != 0)
                cout << " " << au7KAnj54[i];
            else {
                if (i == 1)
                    cout << au7KAnj54[i];
            }
            i = i + 1;
        };
    }
    return 0;
}

