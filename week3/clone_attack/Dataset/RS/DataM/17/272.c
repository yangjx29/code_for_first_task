int main () {
    int i;
    int j;
    int k;
    int lmsTJHe0;
    int n;
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
    char s [(560 - 360)];
    char a [(1037 - 837)];
    scanf ("%d", &n);
    for (i = (920 - 920); i < n; i++) {
        int aEuUDNTKLskV;
        scanf ("%s", s);
        printf ("%s\n", s);
        for (j = (565 - 565); strlen (s) > j; j++) {
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
            if (s[j] == '(')
                a[j] = '$';
            else {
                if (!(')' != s[j]))
                    a[j] = '?';
                else
                    a[j] = ' ';
            };
        }
        for (k = (919 - 919); strlen (s) > k; k++) {
            if (a[k] == '?') {
                for (lmsTJHe0 = k - (235 - 234); lmsTJHe0 >= (996 - 996); lmsTJHe0 = lmsTJHe0 - 1) {
                    if (a[lmsTJHe0] == '$') {
                        a[k] = ' ';
                        a[lmsTJHe0] = ' ';
                        break;
                    };
                };
            };
        }
        for (aEuUDNTKLskV = (975 - 975); aEuUDNTKLskV < strlen (s); aEuUDNTKLskV = aEuUDNTKLskV + 1) {
            printf ("%c", a[aEuUDNTKLskV]);
        };
    }
    return (457 - 457);
}

