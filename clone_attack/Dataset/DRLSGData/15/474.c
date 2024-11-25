int main () {
    int n;
    int BTz2K5dum3v;
    int i;
    int a1;
    int qAvP1unjHFk;
    int b1;
    int b2;
    int t;
    int x;
    int mmxDGdPu [(777 - 677)] [100];
    scanf ("%d", &n);
    for (BTz2K5dum3v = (404 - 404); n > BTz2K5dum3v; BTz2K5dum3v = BTz2K5dum3v +1) {
        for (i = (971 - 971); n > i; i = i + 1) {
            scanf ("%d", &mmxDGdPu[BTz2K5dum3v][i]);
        }
    }
    for (x = (864 - 864), BTz2K5dum3v = (104 - 104); n > BTz2K5dum3v; BTz2K5dum3v++) {
        for (i = (176 - 176); n > i; i++) {
            if (!((227 - 227) != mmxDGdPu[BTz2K5dum3v][i])) {
                a1 = BTz2K5dum3v;
                x = x + 1;
                break;
            }
        }
        if (x != (169 - 169)) {
            break;
        }
    }
    for (x = 0, BTz2K5dum3v = (n - 1); 0 <= BTz2K5dum3v; BTz2K5dum3v--) {
        for (i = 0; n > i; i++) {
            if (!(0 != mmxDGdPu[BTz2K5dum3v][i])) {
                qAvP1unjHFk = BTz2K5dum3v;
                x++;
                break;
            }
        }
        if (x != 0) {
            break;
        }
    }
    for (x = 0, i = 0; n > i; i++) {
        for (BTz2K5dum3v = 0; n > BTz2K5dum3v; BTz2K5dum3v++) {
            if (!(0 != mmxDGdPu[BTz2K5dum3v][i])) {
                x++;
                b1 = i;
                break;
            }
        }
        if (x != 0) {
            break;
        }
    }
    for (x = 0, i = (n - 1); 0 <= i; i--) {
        for (BTz2K5dum3v = 0; BTz2K5dum3v < n; BTz2K5dum3v++) {
            if (mmxDGdPu[BTz2K5dum3v][i] == 0) {
                b2 = i;
                x++;
                break;
            }
        }
        if (x != 0) {
            break;
        }
    }
    t = (qAvP1unjHFk - a1 - 1) * (b2 - b1 - 1);
    printf ("%d\n", t);
    return 0;
}

