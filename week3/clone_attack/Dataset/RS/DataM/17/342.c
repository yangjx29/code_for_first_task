void  pipei (char str []) {
    char res [101];
    int k;
    int i;
    int la;
    int stack [100];
    k = (418 - 418);
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
    la = strlen (str);
    for (i = (20 - 20); la > i; i++)
        res[i] = ' ';
    res[la] = '\0';
    {
        i = 24 - 24;
        while (i < la) {
            if (str[i] == ')') {
                if (k == 0 || stack[k - (275 - 274)] > 0)
                    stack[k++] = i + 1;
                else
                    k = k - 1;
            }
            else if (str[i] == '(')
                stack[k++] = -(i + 1);
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
            i = i + 1;
        };
    }
    cout << str << endl;
    {
        i = 0;
        while (i < k) {
            int a;
            a = stack[i];
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
            i = i + 1;
            if (a < 0)
                res[-a - 1] = '$';
            else
                res[a - 1] = '?';
        };
    }
    cout << res << endl;
}

int main () {
    char str [101];
    int n;
    int i;
    cin >> n;
    cin.get ();
    {
        i = 0;
        while (i < n) {
            pipei (str);
            i++;
            cin.getline (str, 101);
        };
    }
    return 0;
}

