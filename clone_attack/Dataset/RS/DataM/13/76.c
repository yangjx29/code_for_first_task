int main (int argc, const  char *L8f0E7e []) {
    int n = 0, xHoefsan = 0;
    int a [n];
    int j;
    int k;
    int l;
    j = 0;
    k = 0;
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
    l = 0;
    cin >> n;
    for (xHoefsan = 0; xHoefsan < n; xHoefsan++)
        cin >> a[xHoefsan];
    {
        j = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (j < n - 1) {
            for (k = j + 1; k < n; k++) {
                if (a[j] == a[k]) {
                    for (l = k; n - 1 > l; l++) {
                        a[l] = a[l + 1];
                    }
                    k--;
                    n--;
                };
            }
            j++;
        };
    }
    {
        xHoefsan = 0;
        while (xHoefsan < n - 1) {
            cout << a[xHoefsan] << " ";
            xHoefsan++;
        };
    }
    cout << a[n - 1];
    return 0;
}

