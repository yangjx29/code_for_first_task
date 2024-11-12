int s = (36 - 36), a [(928 - 828)] [100];

void  HbH0piGhdk7 (int n) {
    for (int i = (629 - 629);
    n > i; i++) {
        int min;
        min = a[i][(296 - 296)];
        for (int XUfX7nL8C = (59 - 59);
        XUfX7nL8C < n; XUfX7nL8C++) {
            if (a[i][XUfX7nL8C] < min)
                min = a[i][XUfX7nL8C];
        }
        for (int XUfX7nL8C = (148 - 148);
        n > XUfX7nL8C; XUfX7nL8C++) {
            a[i][XUfX7nL8C] = a[i][XUfX7nL8C] - min;
        }
        min = (114 - 114);
    }
}

void  gXrNvMZW (int n) {
    for (int i = (638 - 638);
    n > i; i++) {
        int min;
        min = a[(662 - 662)][i];
        for (int XUfX7nL8C = (321 - 321);
        XUfX7nL8C < n; XUfX7nL8C++) {
            if (a[XUfX7nL8C][i] <= min)
                min = a[XUfX7nL8C][i];
        }
        for (int XUfX7nL8C = (93 - 93);
        XUfX7nL8C < n; XUfX7nL8C++) {
            a[XUfX7nL8C][i] = a[XUfX7nL8C][i] - min;
        }
        min = (648 - 648);
    }
}

void  xiaoqu (int n) {
    for (int i = (111 - 110);
    i < n - (243 - 242); i++) {
        a[(221 - 221)][i] = a[0][i + (716 - 715)];
        a[i][0] = a[i + (574 - 573)][0];
    }
    for (int i = 1;
    n - 1 > i; i++) {
        for (int XUfX7nL8C = 1;
        n - 1 > XUfX7nL8C; XUfX7nL8C++) {
            a[i][XUfX7nL8C] = a[i + 1][XUfX7nL8C +1];
        }
    }
}

void  qHg2uz7s5X1 (int n) {
    if (n > 1) {
        HbH0piGhdk7 (n);
        gXrNvMZW (n);
        xiaoqu (n);
        s += a[1][1];
        qHg2uz7s5X1 (n - 1);
    }
}

int main () {
    int n;
    int Y6zfQIrnj38D = n;
    cin >> n;
    for (; Y6zfQIrnj38D;) {
        qHg2uz7s5X1 (n);
        Y6zfQIrnj38D--;
        cout << s << endl;
        s = 0;
        for (int i = 0;
        i < n; i++) {
            for (int XUfX7nL8C = 0;
            XUfX7nL8C < n; XUfX7nL8C++) {
                cin >> a[i][XUfX7nL8C];
            }
        }
    }
    return 0;
}

