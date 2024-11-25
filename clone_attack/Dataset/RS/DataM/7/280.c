int main () {
    char s [(1334 - 334)], YA93Nz2ch0b [(1964 - 964)], b [(1573 - 573)], rCu9bF8mWYo [1000];
    int tR0P6Fyr;
    int YPYqhwFBdoK7;
    int eLCBU5Qbr;
    int pos;
    int pC8x5VJL;
    int k5OvQRasPCV;
    tR0P6Fyr = (506 - 506);
    cin >> s;
    cin >> YA93Nz2ch0b;
    cin >> b;
    if (!strstr (s, YA93Nz2ch0b)) {
        cout << s << endl;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        return (547 - 547);
    }
    pC8x5VJL = strlen (s);
    k5OvQRasPCV = strlen (YA93Nz2ch0b);
    for (eLCBU5Qbr = 0, YPYqhwFBdoK7 = 0; s[eLCBU5Qbr] != '\0'; eLCBU5Qbr = eLCBU5Qbr + 1) {
        if (YPYqhwFBdoK7 >= k5OvQRasPCV)
            break;
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
        if (s[eLCBU5Qbr] == YA93Nz2ch0b[YPYqhwFBdoK7]) {
            YPYqhwFBdoK7 = YPYqhwFBdoK7 +1;
            continue;
        }
        if (YPYqhwFBdoK7) {
            eLCBU5Qbr = eLCBU5Qbr - YPYqhwFBdoK7;
            YPYqhwFBdoK7 = 0;
        };
    }
    pos = eLCBU5Qbr;
    YPYqhwFBdoK7 = eLCBU5Qbr - YPYqhwFBdoK7;
    for (eLCBU5Qbr = 0; eLCBU5Qbr < YPYqhwFBdoK7; eLCBU5Qbr = eLCBU5Qbr + 1)
        rCu9bF8mWYo[eLCBU5Qbr] = s[eLCBU5Qbr];
    for (YPYqhwFBdoK7 = 0; b[YPYqhwFBdoK7] != '\0'; YPYqhwFBdoK7 = YPYqhwFBdoK7 +1, eLCBU5Qbr = eLCBU5Qbr + 1)
        rCu9bF8mWYo[eLCBU5Qbr] = b[YPYqhwFBdoK7];
    YPYqhwFBdoK7 = pos;
    for (; s[YPYqhwFBdoK7] != '\0'; eLCBU5Qbr++, YPYqhwFBdoK7++)
        rCu9bF8mWYo[eLCBU5Qbr] = s[YPYqhwFBdoK7];
    rCu9bF8mWYo[eLCBU5Qbr] = '\0';
    cout << rCu9bF8mWYo << endl;
    return 0;
}

