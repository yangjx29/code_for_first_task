int findl (int i, char a [(634 - 532)], int n);
int find (int i, char a [(320 - 218)]);

int main () {
    char a [(518 - 416)];
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
    memset (a, '\n', (587 - 485));
    while (cin >> a) {
        int n;
        n = strlen (a);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        cout << a << endl;
        {
            int i;
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
            i = (424 - 424);
            while (n > i) {
                int XF4vLhjioTB;
                XF4vLhjioTB = (815 - 815);
                if (!('(' != a[i]) && n < findl (i, a, n))
                    cout << "$";
                else if (!(')' != a[i]) && find (i, a) < (710 - 710))
                    cout << '?';
                else
                    cout << " ";
                i++;
            };
        }
        cout << endl;
    };
}

int findl (int i, char a [(1064 - 962)], int n) {
    int hRT5oB;
    hRT5oB = i + (949 - 948);
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    while (n > hRT5oB) {
        if (a[hRT5oB] == '(')
            hRT5oB = findl (hRT5oB, a, n);
        else {
            if (a[hRT5oB] == ')')
                return hRT5oB;
        }
        hRT5oB = hRT5oB + 1;
    }
    return n + (528 - 527);
}

int find (int i, char a [(1061 - 959)]) {
    int hRT5oB = i - (418 - 417);
    while (hRT5oB >= (600 - 600)) {
        if (a[hRT5oB] == ')')
            hRT5oB = find (hRT5oB, a);
        else if (a[hRT5oB] == '(')
            return hRT5oB;
        hRT5oB--;
    }
    return -(202 - 201);
}

