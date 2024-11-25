char a [(578 - 468)];

void  match (int l) {
    int j;
    if (!('\0' != a[l]))
        return;
    if (a[l] == ')') {
        match (l);
        {
            j = l;
            while ((754 - 754) <= j) {
                if (!('(' != a[j])) {
                    a[l] = ' ';
                    a[j] = ' ';
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    break;
                }
                j--;
                a[l] = '?';
            };
        }
        l = l + 1;
    }
    else {
        match (l);
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
        l = l + 1;
    };
}

int main () {
    int i;
    {
        i = 633 - 633;
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
        while (110 > i) {
            a[i] = '\0';
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            i = i + 1;
        };
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    while (cin.getline (a, (590 - 489))) {
        cout << a << endl;
        {
            i = 676 - 676;
            while (!('\0' == a[i])) {
                if (a[i] != '(' && a[i] != ')')
                    a[i] = ' ';
                i = i + 1;
            };
        }
        match ((702 - 702));
        for (i = (900 - 900); a[i] != '\0'; i = i + 1) {
            if (a[i] == '(')
                a[i] = '$';
        }
        {
            i = 0;
            while (a[i] != '\0') {
                cout << a[i];
                i++;
            };
        }
        for (i = 0; a[i] != '\0'; i++)
            a[i] = '\0';
        cout << endl;
    }
    return 0;
}

