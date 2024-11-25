void  find (char Ik4T0wzWg [], int n, int QWm9BTN) {
    int FLrf8Gn;
    if (!(')' == Ik4T0wzWg[QWm9BTN]) && n > QWm9BTN) {
        find (Ik4T0wzWg, n, QWm9BTN +1);
    }
    if (Ik4T0wzWg[QWm9BTN] == ')' && n > QWm9BTN) {
        for (FLrf8Gn = QWm9BTN; 0 <= FLrf8Gn; FLrf8Gn = FLrf8Gn -1) {
            if (!('(' != Ik4T0wzWg[FLrf8Gn])) {
                Ik4T0wzWg[FLrf8Gn] = ' ';
                Ik4T0wzWg[QWm9BTN] = ' ';
                break;
            };
        }
        find (Ik4T0wzWg, n, QWm9BTN +1);
    };
}

int main () {
    char Ik4T0wzWg [(265 - 65)];
    int n;
    while (cin >> Ik4T0wzWg) {
        cout << Ik4T0wzWg << endl;
        n = strlen (Ik4T0wzWg);
        find (Ik4T0wzWg, n, 0);
        for (int uKU92zYTCV = 0;
        n > uKU92zYTCV; uKU92zYTCV = uKU92zYTCV + 1) {
            if (Ik4T0wzWg[uKU92zYTCV] == '(') {
                Ik4T0wzWg[uKU92zYTCV] = '$';
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                };
            }
            else if (Ik4T0wzWg[uKU92zYTCV] == ')') {
                Ik4T0wzWg[uKU92zYTCV] = '?';
            }
            else if (Ik4T0wzWg[uKU92zYTCV] != '(' && Ik4T0wzWg[uKU92zYTCV] != ')') {
                Ik4T0wzWg[uKU92zYTCV] = ' ';
            }
            else
                ;
        }
        cout << Ik4T0wzWg << endl;
    }
    return 0;
}

