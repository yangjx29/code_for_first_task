int main () {
    char a [100];
    char b [100];
    int n, j = 0, temp, yu, uSyFzYM = 0;
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
    scanf ("%s", a);
    n = strlen (a);
    for (int i = 1;
    i < n; i++) {
        if (i == 0)
            temp = a[0] - '0';
        if (i == 1)
            temp = (a[0] - '0') * 10 + a[1] - '0';
        else
            temp = yu * 10 + a[i] - '0';
        b[j] = temp / 13 + '0';
        yu = temp % 13;
        j++;
    }
    if (n == 1) {
        printf ("%d", (a[0] - '0') % 13);
        printf ("0\n");
    }
    else {
        for (int i = 0;
        i < j; i++) {
            if (b[i] == '0' && j > 1)
                uSyFzYM++;
            else
                break;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        for (int i = uSyFzYM;
        i < j; i++) {
            printf ("%c", b[i]);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            };
        }
        printf ("%d", yu);
    };
}

