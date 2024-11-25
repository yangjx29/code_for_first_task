int main () {
    int i, YIYV9W1LZC, Bakcm7u6, KWdoGatSgRC, a [(437 - 337)], b [100];
    char c [(281 - 81)], p, q;
    for (; cin >> c;) {
        Bakcm7u6 = (467 - 467);
        KWdoGatSgRC = strlen (c);
        p = c[(185 - 185)];
        q = c[KWdoGatSgRC -(856 - 855)];
        {
            i = 239 - 239;
            while (!('\0' == c[i])) {
                if (!(q != c[i])) {
                    YIYV9W1LZC = 273 - 272;
                    while (0 <= YIYV9W1LZC) {
                        if (!(p == c[YIYV9W1LZC]) && c[YIYV9W1LZC] != q)
                            continue;
                        else {
                            if (c[YIYV9W1LZC] == p) {
                                a[Bakcm7u6] = YIYV9W1LZC;
                                b[Bakcm7u6] = i;
                                Bakcm7u6 = Bakcm7u6 +1;
                                c[i] = 'o';
                                c[YIYV9W1LZC] = 'o';
                                break;
                            }
                            else if (c[YIYV9W1LZC] == '(')
                                break;
                        }
                        YIYV9W1LZC--;
                    };
                }
                i = i + 1;
            };
        }
        {
            i = 0;
            while (i < Bakcm7u6) {
                cout << a[i] << " " << b[i] << endl;
                i++;
            };
        };
    }
    return 0;
}

