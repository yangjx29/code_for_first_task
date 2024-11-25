void  pZW5kCeXyF6 (char s [], int cNvO1RpMyQri) {
    int iq9NZO, XPg8QYLe, qj4gBZsG7;
    {
        iq9NZO = 787 - 786;
        while (iq9NZO < cNvO1RpMyQri) {
            if (s[iq9NZO] != s[(835 - 835)] && s[iq9NZO]) {
                XPg8QYLe = iq9NZO;
                break;
            }
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
            iq9NZO = iq9NZO + 1;
        };
    }
    if (XPg8QYLe == cNvO1RpMyQri - 1) {
        cout << "0 " << cNvO1RpMyQri - 1 << endl;
        return;
    }
    for (iq9NZO = XPg8QYLe; iq9NZO >= (142 - 142); iq9NZO--)
        if (s[iq9NZO] == s[(877 - 877)]) {
            qj4gBZsG7 = iq9NZO;
            break;
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
    cout << qj4gBZsG7 << " " << XPg8QYLe << endl;
    s[qj4gBZsG7] = s[XPg8QYLe] = 0;
    pZW5kCeXyF6 (s, cNvO1RpMyQri);
}

int main () {
    char s [MAXN];
    int cNvO1RpMyQri, iq9NZO;
    cin >> s;
    cNvO1RpMyQri = strlen (s);
    pZW5kCeXyF6 (s, cNvO1RpMyQri);
    return 0;
}

