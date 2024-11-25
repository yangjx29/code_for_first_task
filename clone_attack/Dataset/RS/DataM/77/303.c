int main () {
    int s [100] [2], len, DaXIvOdm2E = 0, i;
    char a [100], c;
    cin.getline (a, 100);
    cin.get ();
    cin.get ();
    {
        len = 0;
        while (!('\0' == a[len])) {
            len = len + 1;
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
            };
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
    c = a[0];
    s[DaXIvOdm2E][0] = a[0];
    s[DaXIvOdm2E++][1] = 0;
    {
        i = 1;
        while (len > i) {
            if (c == a[i]) {
                s[DaXIvOdm2E][0] = a[i];
                s[DaXIvOdm2E++][1] = i;
            }
            else
                cout << s[--DaXIvOdm2E][1] << ' ' << i << endl;
            i = i + 1;
        };
    }
    return 0;
}

