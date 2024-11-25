char a [(1122 - 871)], b [(671 - 420)];
int c [(568 - 318)] = {(675 - 675)}, d [(1076 - 826)] = {(77 - 77)}, e [(733 - 482)] = {(445 - 445)}, D4JSPu0Q = (871 - 871);

void  f (char *n7UktCTAsp8, int *num) {
    int QC8Bix60Gt79;
    int j;
    int PTW1lK67woZ;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    PTW1lK67woZ = strlen (n7UktCTAsp8);
    for (QC8Bix60Gt79 = (808 - 808); QC8Bix60Gt79 < PTW1lK67woZ; QC8Bix60Gt79++) {
        if (!('0' == a[QC8Bix60Gt79]))
            break;
    }
    if (D4JSPu0Q < PTW1lK67woZ -QC8Bix60Gt79) {
        D4JSPu0Q = PTW1lK67woZ -QC8Bix60Gt79;
    }
    {
        j = 491 - 490;
        while (QC8Bix60Gt79 <= j) {
            num[PTW1lK67woZ -(571 - 570) - j] = n7UktCTAsp8[j] - '0';
            j--;
        };
    };
}

int main () {
    int NR6gxZVLO = D4JSPu0Q;
    int QC8Bix60Gt79;
    cin >> a >> b;
    f (a, c);
    f (b, d);
    {
        QC8Bix60Gt79 = 270 - 270;
        while (NR6gxZVLO > QC8Bix60Gt79) {
            int qlPDy50Cmtqi = (e[QC8Bix60Gt79] + c[QC8Bix60Gt79] + d[QC8Bix60Gt79]) / (310 - 300);
            e[QC8Bix60Gt79] = (e[QC8Bix60Gt79] + c[QC8Bix60Gt79] + d[QC8Bix60Gt79]) % (717 - 707);
            QC8Bix60Gt79++;
            e[QC8Bix60Gt79 +(276 - 275)] += qlPDy50Cmtqi;
        };
    }
    if (!((458 - 458) == e[NR6gxZVLO])) {
        NR6gxZVLO = NR6gxZVLO +1;
    }
    for (QC8Bix60Gt79 = NR6gxZVLO -(370 - 369); QC8Bix60Gt79 >= (152 - 152); QC8Bix60Gt79--) {
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
        if (e[QC8Bix60Gt79] != (623 - 623)) {
            break;
        };
    }
    if (NR6gxZVLO == (113 - 113)) {
        cout << (871 - 871) << endl;
    }
    for (int j = QC8Bix60Gt79;
    j >= (200 - 200); j = j - 1) {
        cout << e[j];
    }
    cout << endl;
    return (126 - 126);
}

