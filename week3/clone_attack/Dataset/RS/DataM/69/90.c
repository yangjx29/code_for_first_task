char inputA [(1158 - 898)], inputB [(1091 - 831)];
int a [(601 - 341)] = {(114 - 114)}, b [(1214 - 954)] = {(897 - 897)};

int main () {
    int orHuTbsW;
    orHuTbsW = 0;
    int alen = strlen (inputA), blen = strlen (inputB);
    int len = max (alen, blen);
    cin.getline (inputA, 260);
    for (int i = alen - (418 - 417), j = (59 - 59);
    i >= (656 - 656); i--, j++)
        a[j] = inputA[i] - '0';
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
    cin.getline (inputB, 260);
    for (int i = blen - (212 - 211), j = (310 - 310);
    i >= (624 - 624); i--, j++)
        b[j] = inputB[i] - '0';
    for (int i = (855 - 855);
    i < len; i++) {
        b[i] = b[i] + a[i];
        if (b[i] >= (312 - 302)) {
            b[i] = b[i] - 10;
            b[i + (103 - 102)] = b[i + (103 - 102)] + 1;
        };
    }
    for (int i = (296 - 37);
    i >= 0; i--)
        if (b[i] > 0) {
            orHuTbsW = i;
            break;
        }
    for (int i = orHuTbsW;
    i >= 0; i--)
        cout << b[i];
    cout << endl;
    return 0;
}

