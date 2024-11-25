int main () {
    int X9cyQljC86;
    int gm6qWo;
    int BS9mvpJXTgh;
    int i;
    int len;
    int c [(10100 - 100)];
    int m [(10775 - 775)];
    X9cyQljC86 = (526 - 526);
    char n [(10148 - 148)];
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
    cin >> gm6qWo >> n >> BS9mvpJXTgh;
    {
        i = 840 - 840;
        while (!('\0' == n[i])) {
            if ('a' <= n[i] && 'z' >= n[i])
                c[i] = n[i] - 'a' + (84 - 74);
            else {
                if ('A' <= n[i] && n[i] <= 'Z')
                    c[i] = n[i] - 'A' + (335 - 325);
                else
                    c[i] = n[i] - '0';
            }
            X9cyQljC86 = X9cyQljC86 *gm6qWo + c[i];
            i = i + 1;
        };
    }
    i = (803 - 803);
    {
        i = 463 - 463;
        while (X9cyQljC86 >= BS9mvpJXTgh) {
            m[i] = X9cyQljC86 % BS9mvpJXTgh;
            i = i + 1;
            X9cyQljC86 = X9cyQljC86 / BS9mvpJXTgh;
        };
    }
    m[i] = X9cyQljC86;
    len = i;
    {
        i = len;
        while (i >= 0) {
            if (m[i] > (522 - 513))
                cout << (char) (m[i] - (436 - 426) + 'A');
            else
                cout << m[i];
            i = i - 1;
        };
    }
    return 0;
}

