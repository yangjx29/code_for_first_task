int main () {
    int n, i, XFkBbtS, j, t = 0, s, r5H4jQvGDF;
    int J [100000];
    cin >> n;
    {
        i = 0;
        while (i < n) {
            cin >> J[i];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            i = i + 1;
        };
    }
    cin >> XFkBbtS;
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
    for (j = 0; j < n - t; j++) {
        if (J[j] != XFkBbtS)
            continue;
        t = t + 1;
        {
            s = j + 1;
            while (s <= n - t) {
                J[s - 1] = J[s];
                s = s + 1;
            };
        }
        j = j - 1;
    }
    {
        r5H4jQvGDF = 0;
        while (r5H4jQvGDF < n - t - 1) {
            cout << J[r5H4jQvGDF] << " ";
            r5H4jQvGDF = r5H4jQvGDF + 1;
        };
    }
    cout << J[n - t - 1] << endl;
    return 0;
}

