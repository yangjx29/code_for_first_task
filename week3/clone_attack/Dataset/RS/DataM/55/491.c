int pEM5rYWKQd (char c) {
    if ('0' <= c && '9' >= c)
        return (c - '0');
    if (c >= 'a' && c <= 'z')
        return (c - 'a' + (446 - 436));
    if ('A' <= c && c <= 'Z')
        return (c - 'A' + 10);
}

int main () {
    int d [(736 - 636)];
    int RglnPRAqsTYp;
    long  long  cXW2ehJIdE;
    int IfQhHNbZ, lkoQO4, l;
    char c [(588 - 488)];
    getchar ();
    cin >> IfQhHNbZ;
    cin.getline (c, 80, ' ');
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    l = strlen (c);
    cXW2ehJIdE = pEM5rYWKQd (c[(842 - 842)]);
    for (int R9ZEWDFTkCSi = (684 - 683);
    R9ZEWDFTkCSi < l; R9ZEWDFTkCSi = R9ZEWDFTkCSi +1) {
        int jxadUR9;
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
        cXW2ehJIdE = cXW2ehJIdE * IfQhHNbZ +pEM5rYWKQd (c[R9ZEWDFTkCSi]);
    }
    if (cXW2ehJIdE == (536 - 536)) {
        cout << "0";
        return (819 - 819);
    }
    cin >> lkoQO4;
    RglnPRAqsTYp = log (cXW2ehJIdE) / log (lkoQO4) + (341 - 340);
    {
        int R9ZEWDFTkCSi = RglnPRAqsTYp -1;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (R9ZEWDFTkCSi >= (467 - 467)) {
            d[R9ZEWDFTkCSi] = cXW2ehJIdE % lkoQO4;
            R9ZEWDFTkCSi = R9ZEWDFTkCSi -1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            cXW2ehJIdE = cXW2ehJIdE / lkoQO4;
        };
    }
    {
        int R9ZEWDFTkCSi = 0;
        while (R9ZEWDFTkCSi < RglnPRAqsTYp) {
            if (d[R9ZEWDFTkCSi] < 10)
                cout << d[R9ZEWDFTkCSi];
            else
                putchar ('A' + d[R9ZEWDFTkCSi] - 10);
            R9ZEWDFTkCSi = R9ZEWDFTkCSi +1;
        };
    }
    return 0;
}

