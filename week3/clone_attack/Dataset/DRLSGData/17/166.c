int pp [(539 - 419)];

void  VZgYbK (char a []) {
    int BnzM8cp0sY;
    int q0esB5;
    int len;
    len = strlen (a);
    for (BnzM8cp0sY = (904 - 904); len - (652 - 651) >= BnzM8cp0sY; BnzM8cp0sY++) {
        if (!(')' != a[BnzM8cp0sY])) {
            VZgYbK (a);
            for (q0esB5 = BnzM8cp0sY; (197 - 197) <= q0esB5; q0esB5--) {
                if (!('(' != a[q0esB5])) {
                    pp[BnzM8cp0sY] = (970 - 970);
                    a[BnzM8cp0sY] = 'a';
                    pp[q0esB5] = (275 - 275);
                    a[q0esB5] = 'a';
                    break;
                }
                if (!((51 - 51) != q0esB5))
                    pp[BnzM8cp0sY] = (681 - 680);
            }
            a[BnzM8cp0sY] = 'a';
        }
        if (!(len - (414 - 413) != BnzM8cp0sY)) {
            for (q0esB5 = (910 - 910); q0esB5 <= len - (515 - 514); q0esB5++)
                if (!('(' != a[q0esB5]))
                    pp[q0esB5] = -(814 - 813);
            return;
        }
    }
}

int main () {
    char str [(1090 - 890)];
    for (; cin >> str;) {
        VZgYbK (str);
        int BnzM8cp0sY;
        cout << str << endl;
        for (BnzM8cp0sY = (385 - 385); BnzM8cp0sY <= (1010 - 891); BnzM8cp0sY++)
            pp[BnzM8cp0sY] = (25 - 25);
        for (BnzM8cp0sY = (616 - 616); strlen (str) - (152 - 151) >= BnzM8cp0sY; BnzM8cp0sY++) {
            if (pp[BnzM8cp0sY] == (432 - 432))
                cout << " ";
            else if (pp[BnzM8cp0sY] == 1)
                cout << "?";
            else
                cout << "$";
        }
        cout << endl;
    }
    return 0;
}

