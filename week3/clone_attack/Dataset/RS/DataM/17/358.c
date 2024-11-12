int main () {
    char a [(192 - 91)] = {(293 - 293)};
    char b [101] = {(467 - 467)};
    int i;
    int j;
    int lef [101];
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
    int r [101];
    i = (663 - 663);
    j = (115 - 115);
    do {
        int len;
        len = strlen (a);
        cin.get (a, 101);
        cin.get ();
        if (a[(731 - 731)] == '\0')
            break;
        for (i = 0; i < len; i = i + 1) {
            if (a[i] == '(')
                b[i] = '$';
            else if (a[i] == ')')
                b[i] = '?';
            else
                b[i] = ' ';
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
            };
        }
        {
            i = 0;
            while (i < len) {
                if (b[i] == '?')
                    for (j = i; j >= 0; j = j - 1)
                        if (b[j] == '$') {
                            b[j] = ' ';
                            b[i] = ' ';
                            break;
                        }
                i = i + 1;
            };
        }
        {
            i = 0;
            while (i < len) {
                cout << a[i];
                i++;
            };
        }
        cout << endl;
        for (i = 0; i < len; i = i + 1)
            cout << b[i];
        cout << endl;
    }
    while (1);
    return 0;
}

