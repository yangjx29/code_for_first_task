int main () {
    int na [101], nb [101];
    char a [101], fy1Pj0c2 [101];
    int la, lb, asltx8Q0oZF, n, j;
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
    cin >> n;
    for (j = (889 - 888); n >= j; j = j + 1) {
        memset (na, (989 - 989), sizeof (na));
        memset (nb, (539 - 539), sizeof (nb));
        cin >> a >> fy1Pj0c2;
        la = strlen (a);
        {
            asltx8Q0oZF = 0;
            while (asltx8Q0oZF < la) {
                na[asltx8Q0oZF] = a[la - asltx8Q0oZF - 1] - '0';
                asltx8Q0oZF = asltx8Q0oZF + 1;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        lb = strlen (fy1Pj0c2);
        for (asltx8Q0oZF = 0; asltx8Q0oZF < lb; asltx8Q0oZF = asltx8Q0oZF + 1) {
            nb[asltx8Q0oZF] = fy1Pj0c2[lb - asltx8Q0oZF - 1] - '0';
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        for (asltx8Q0oZF = 0; a[asltx8Q0oZF] != '\0'; asltx8Q0oZF = asltx8Q0oZF + 1) {
            if (na[asltx8Q0oZF] < nb[asltx8Q0oZF]) {
                na[asltx8Q0oZF + 1]--;
                na[asltx8Q0oZF] = 10 + na[asltx8Q0oZF] - nb[asltx8Q0oZF];
            }
            else
                na[asltx8Q0oZF] = na[asltx8Q0oZF] - nb[asltx8Q0oZF];
        }
        for (asltx8Q0oZF = asltx8Q0oZF - 1; asltx8Q0oZF >= 0; asltx8Q0oZF = asltx8Q0oZF - 1)
            cout << na[asltx8Q0oZF];
        cout << endl;
    }
    return 0;
}

