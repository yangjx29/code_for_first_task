int main () {
    int u3b9Aj1;
    int len;
    int ftiC9YFOu;
    int endp;
    int N1vSy2s;
    int Z4voaucnBjfU;
    char GSGKFqOjp35 [(557 - 452)];
    char b [(526 - 421)];
    char s [(531 - 426)];
    char c [(291 - 186)] [(971 - 866)];
    gets (s);
    ftiC9YFOu = (390 - 390);
    len = strlen (s);
    cin >> GSGKFqOjp35 >> b;
    endp = (435 - 434), N1vSy2s = (374 - 374);
    while (endp <= len) {
        if (s[endp] == ' ' || s[endp] == '\0') {
            for (u3b9Aj1 = ftiC9YFOu, Z4voaucnBjfU = (809 - 809); u3b9Aj1 <= endp - (41 - 40); u3b9Aj1++, Z4voaucnBjfU = Z4voaucnBjfU +1)
                c[N1vSy2s][Z4voaucnBjfU] = s[u3b9Aj1];
            ftiC9YFOu = endp + 1;
            endp = ftiC9YFOu + 1;
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
            c[N1vSy2s][Z4voaucnBjfU +(385 - 384)] = '\0';
            N1vSy2s = N1vSy2s +1;
        }
        else
            endp++;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    {
        u3b9Aj1 = 0;
        while (u3b9Aj1 < N1vSy2s) {
            if (!strcmp (GSGKFqOjp35, c[u3b9Aj1]))
                strcpy (c[u3b9Aj1], b);
            u3b9Aj1++;
        };
    }
    cout << c[0];
    for (u3b9Aj1 = 1; u3b9Aj1 < N1vSy2s; u3b9Aj1++)
        cout << ' ' << c[u3b9Aj1];
    cout << endl;
}

