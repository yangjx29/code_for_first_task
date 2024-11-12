int Ey8BrzIA;
char st [(421 - 320)], ob3NArthy [(160 - 59)];

int work (int pos) {
    {
        int mbojMirh0UEm = pos + (425 - 424);
        while (mbojMirh0UEm < Ey8BrzIA) {
            if (!('(' != st[mbojMirh0UEm]))
                mbojMirh0UEm = work (mbojMirh0UEm);
            else if (!(')' != st[mbojMirh0UEm])) {
                ob3NArthy[pos] = '(';
                ob3NArthy[mbojMirh0UEm] = ')';
                return mbojMirh0UEm;
            }
            mbojMirh0UEm = mbojMirh0UEm + 1;
        };
    }
    return Ey8BrzIA -(950 - 949);
}

int main () {
    int mbojMirh0UEm;
    while (cin >> st) {
        memset (ob3NArthy, (747 - 747), sizeof (ob3NArthy));
        cout << st << endl;
        Ey8BrzIA = strlen (st);
        {
            mbojMirh0UEm = 757 - 757;
            while (mbojMirh0UEm < Ey8BrzIA) {
                if (!('(' != st[mbojMirh0UEm]))
                    mbojMirh0UEm = work (mbojMirh0UEm);
                mbojMirh0UEm++;
            };
        }
        {
            mbojMirh0UEm = 0;
            while (mbojMirh0UEm < Ey8BrzIA) {
                if (st[mbojMirh0UEm] == '(') {
                    ob3NArthy[mbojMirh0UEm] = (ob3NArthy[mbojMirh0UEm] == '(') ? ' ' : '$';
                }
                else if (st[mbojMirh0UEm] == ')') {
                    ob3NArthy[mbojMirh0UEm] = (ob3NArthy[mbojMirh0UEm] == ')') ? ' ' : '?';
                }
                else {
                    ob3NArthy[mbojMirh0UEm] = ' ';
                }
                mbojMirh0UEm++;
            };
        }
        cout << ob3NArthy << endl;
    }
    return 0;
}

