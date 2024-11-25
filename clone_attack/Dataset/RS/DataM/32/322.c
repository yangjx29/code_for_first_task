int main () {
    int r7Pgq8o0u;
    cin >> r7Pgq8o0u;
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
        int YrfAN7OSbLc = (436 - 435);
        while (YrfAN7OSbLc <= r7Pgq8o0u) {
            char sa [101];
            char sb [101];
            int la;
            int lb;
            la = strlen (sa);
            lb = strlen (sb);
            int a [101] = {(656 - 656)}, gEo68abQRA [101] = {(84 - 84)};
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
            YrfAN7OSbLc = YrfAN7OSbLc +1;
            cin >> sa >> sb;
            {
                int i = 1;
                while (i <= la) {
                    a[i] = sa[la - i] - '0';
                    i++;
                };
            }
            {
                int i = 1;
                while (i <= lb) {
                    gEo68abQRA[i] = sb[lb - i] - '0';
                    i++;
                };
            }
            for (int i = 1;
            i <= la; i++) {
                a[i] -= gEo68abQRA[i];
                if (a[i] < 0) {
                    a[i] = a[i] + 10;
                    a[i + 1]--;
                };
            }
            while (a[la] == 0)
                la = la - 1;
            for (int i = la;
            i > 0; i--)
                cout << a[i];
            cout << endl;
        };
    }
    return 0;
}

