int main () {
    int flag;
    int j;
    int i;
    int pos;
    int len1;
    int zWN8x0;
    flag = 0;
    char s [1000];
    char a [1000];
    char D6wcBR3J0 [1000];
    char n [1000];
    cin >> s;
    cin >> a;
    if (!strstr (s, a)) {
        cout << s << endl;
        return 0;
    }
    len1 = strlen (s);
    cin >> D6wcBR3J0;
    zWN8x0 = strlen (a);
    {
        j = 0;
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
        i = 0;
        while (s[i] != '\0') {
            if (s[i] == a[j]) {
                j++;
                continue;
            }
            if (j >= zWN8x0)
                break;
            if (j)
                j = 0;
            i++;
        };
    }
    pos = i;
    j = i - j;
    {
        i = 0;
        while (i < j) {
            n[i] = s[i];
            i++;
        };
    }
    {
        j = 0;
        while (D6wcBR3J0[j] != '\0') {
            n[i] = D6wcBR3J0[j];
            j++;
            i++;
        };
    }
    j = pos;
    for (; s[j] != '\0'; i++, j++)
        n[i] = s[j];
    n[i] = '\0';
    cout << n << endl;
    return 0;
}

