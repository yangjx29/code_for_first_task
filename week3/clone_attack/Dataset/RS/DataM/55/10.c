char x [N];

int xhwYM1ns (int SxBWitr1ZYVD, char shu []) {
    int i, s = 0;
    int mlJ3OUnaB;
    mlJ3OUnaB = strlen (shu);
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
    {
        i = 0;
        while (mlJ3OUnaB > i) {
            if ('A' <= shu[i] && 'Z' >= shu[i] || 'a' <= shu[i] && shu[i] <= 'z')
                (shu[i] |= 0x20) -= 0x57;
            if (shu[i] >= '0' && shu[i] <= '9')
                shu[i] = shu[i] - '0';
            i = i + 1;
        };
    }
    {
        i = 0;
        while (mlJ3OUnaB > i) {
            s = s * SxBWitr1ZYVD +shu[i];
            i++;
        };
    }
    return s;
}

void  shiR (int c, int SxBWitr1ZYVD) {
    int i, mlJ3OUnaB, temp;
    {
        i = 0;
        while (c) {
            if ((x[i] = c % SxBWitr1ZYVD +'0') > '9')
                x[i] += 7;
            c = c / SxBWitr1ZYVD;
            i++;
        };
    }
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
    x[i] = '\0';
    mlJ3OUnaB = strlen (x);
    {
        i = 0;
        while (i < mlJ3OUnaB / 2) {
            temp = x[i];
            x[i] = x[mlJ3OUnaB - i - 1];
            x[mlJ3OUnaB - i - 1] = temp;
            i++;
        };
    };
}

int main (void ) {
    int a, b, i, c;
    int count;
    count = 0;
    char shu [N];
    cin >> a;
    cin >> shu;
    {
        i = 0;
        while (i < strlen (shu)) {
            if (shu[i] == '0')
                count++;
            i++;
        };
    }
    cin >> b;
    if (count == strlen (shu))
        cout << "0" << endl;
    else {
        int mlJ3OUnaB = strlen (x);
        c = xhwYM1ns (a, shu);
        shiR (c, b);
        {
            i = 0;
            while (i < mlJ3OUnaB) {
                cout << x[i];
                i++;
            };
        }
        cout << endl;
    }
    return 0;
}

