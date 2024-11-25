int main () {
    int s;
    s = 0;
    int n;
    int k;
    int w1m9Dd [(100281 - 281)];
    int i;
    int hjx8TIw;
    int l;
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
    int m;
    cin >> n;
    {
        i = 0;
        while (i < n) {
            cin >> w1m9Dd[i];
            i++;
        };
    }
    cin >> k;
    for (l = 0; l < n; l++) {
        if (w1m9Dd[l] == k) {
            for (hjx8TIw = l; hjx8TIw < n; hjx8TIw++) {
                w1m9Dd[hjx8TIw] = w1m9Dd[hjx8TIw + 1];
            }
            n--;
            s++;
            l--;
        };
    }
    {
        m = 0;
        while (m < n - 1) {
            cout << w1m9Dd[m] << " ";
            m++;
        };
    }
    cout << w1m9Dd[n - 1] << endl;
    return 0;
}

