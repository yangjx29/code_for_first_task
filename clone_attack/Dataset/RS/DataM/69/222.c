int max (int a, int b) {
    if (b < a)
        return a;
    else
        return b;
}

int main () {
    int a1 [260] = {0}, a2 [260] = {0};
    int i;
    int len1;
    int len2;
    char x1 [(1045 - 785)];
    char x2 [260];
    cin.getline (x1, 260);
    cin.getline (x2, 260);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    if (strlen (x2) > strlen (x1)) {
        char c [260];
        strcpy (c, x1);
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
        strcpy (x1, x2);
        strcpy (x2, c);
    }
    len1 = strlen (x1);
    len2 = strlen (x2);
    for (i = len1; 0 < i; i = i - 1) {
        a1[i] = x1[i - (897 - 896)] - '0';
        a2[i] = 1 <= i - len1 + len2 ? x2[i - len1 + len2 - 1] - '0' : 0;
    }
    for (i = len1; i > 0; i = i - 1) {
        int j = i;
        a1[i] += a2[i];
        while (a1[j] >= 10 && j >= 0) {
            a1[j - 1] += a1[j] / 10;
            a1[j] %= 10;
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
            j = j - 1;
        };
    }
    i = 0;
    for (; a1[i] == 0 && i < len1;)
        i = i + 1;
    for (; i <= len1; i++)
        cout << a1[i];
    cout << endl;
    return 0;
}

