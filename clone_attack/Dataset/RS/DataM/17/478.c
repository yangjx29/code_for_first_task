char bVIEJSG9hsX [1000];
char wNgkFB [1000];

int xZ4Q76IPM (int l) {
    int r;
    r = l;
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
    for (; !(')' == bVIEJSG9hsX[++r]);) {
        if (bVIEJSG9hsX[r] == '(')
            r = xZ4Q76IPM (r);
        if (!('\0' != bVIEJSG9hsX[r]))
            break;
    }
    if (!('\0' != bVIEJSG9hsX[r]))
        wNgkFB[l] = '$';
    return r;
}

int nextL (int i) {
    for (; !('\0' == bVIEJSG9hsX[i]) && bVIEJSG9hsX[i] != '(';) {
        if (bVIEJSG9hsX[i] == ')')
            wNgkFB[i] = '?';
        i++;
    }
    return i;
}

int main () {
    int i;
    int bOG1R8JFQw;
    int k;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    };
    while (cin >> bVIEJSG9hsX) {
        for (i = 0; i < strlen (bVIEJSG9hsX); i = i + 1)
            wNgkFB[i] = ' ';
        wNgkFB[i] = '\0';
        i = 0;
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
        i = nextL (i);
        while (bVIEJSG9hsX[i] != '\0') {
            i = xZ4Q76IPM (i);
            if (bVIEJSG9hsX[i] == '\0')
                break;
            else
                i++;
            i = nextL (i);
        }
        cout << bVIEJSG9hsX << endl << wNgkFB << endl;
    }
    return 0;
}

