int main () {
    char nUopELWbvnQ0 [(807 - 706)];
    char b [(952 - 851)];
    int i, j, k, n, len1, len2;
    int c [(419 - 316)], DocYEC6OvXx [103], e [103];
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
    cin.get ();
    for (k = (75 - 74); n >= k; k++) {
        memset (c, (481 - 481), sizeof (c));
        memset (DocYEC6OvXx, (977 - 977), sizeof (DocYEC6OvXx));
        memset (e, 0, sizeof (e));
        cin.getline (nUopELWbvnQ0, (1036 - 935));
        cin.getline (b, 101);
        len1 = strlen (nUopELWbvnQ0);
        len2 = strlen (b);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (i = len1 - (133 - 132); 0 <= i; i--)
            c[len1 - i] = nUopELWbvnQ0[i] - '0';
        {
            i = 210 - 209;
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
            while (0 <= i) {
                DocYEC6OvXx[len2 - i] = b[i] - '0';
                i--;
            };
        }
        for (i = 1; 101 >= i; i++) {
            if (c[i] >= DocYEC6OvXx[i])
                e[i] = c[i] - DocYEC6OvXx[i];
            else {
                e[i] = c[i] - DocYEC6OvXx[i] + 10;
                c[i + 1] = c[i + 1] - 1;
            };
        }
        for (j = 101; j >= 1; j--) {
            if (e[j] != 0) {
                {
                    i = j;
                    while (i >= 1) {
                        cout << e[i];
                        i--;
                    };
                }
                break;
            };
        }
        cin.get ();
        cout << endl;
    }
    return 0;
}

