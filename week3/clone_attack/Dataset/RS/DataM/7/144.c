int main () {
    char a [50];
    char b [256];
    char MiHekxz1l [50];
    int wz;
    int x;
    int d;
    int l6fVatoqEH;
    int c;
    wz = 500;
    x = 0;
    d = 0;
    char MsrivmnTNQj [100];
    char en [100];
    scanf ("%s", b);
    scanf ("%s", a);
    scanf ("%s", MiHekxz1l);
    {
        l6fVatoqEH = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (l6fVatoqEH < strlen (b)) {
            x = 0;
            if (a[0] == b[l6fVatoqEH]) {
                for (c = l6fVatoqEH + 1; c < strlen (a) + l6fVatoqEH; c = c + 1) {
                    if (a[c - l6fVatoqEH] == b[c]) {
                        x = x + 1;
                    };
                }
                if (x == strlen (a) - 1) {
                    wz = l6fVatoqEH;
                    break;
                };
            }
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
            l6fVatoqEH = l6fVatoqEH + 1;
        };
    }
    if (wz != 500) {
        puts (MsrivmnTNQj);
        for (l6fVatoqEH = 0; l6fVatoqEH < wz; l6fVatoqEH = l6fVatoqEH + 1) {
            MsrivmnTNQj[l6fVatoqEH] = b[l6fVatoqEH];
        }
        MsrivmnTNQj[l6fVatoqEH] = '\0';
        for (l6fVatoqEH = wz + strlen (a); l6fVatoqEH < strlen (b); l6fVatoqEH = l6fVatoqEH + 1) {
            en[l6fVatoqEH - wz - strlen (a)] = b[l6fVatoqEH];
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
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                for (x = 0; x < 20; x++) {
                    y += x;
                }
                if (y > 30)
                    return y;
            }
        }
        en[l6fVatoqEH - wz - strlen (a)] = '\0';
        strcat (MsrivmnTNQj, MiHekxz1l);
        strcat (MsrivmnTNQj, en);
    }
    else {
        if (wz == 500) {
            puts (b);
        };
    }
    return 0;
}

