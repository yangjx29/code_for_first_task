int main () {
    int n;
    char a [(10650 - 650)];
    gets (a);
    int q;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    q = strlen (a);
    cin >> n;
    cin.get ();
    memset (a, '\0', (10295 - 295));
    for (int i = 0;
    i <= q;) {
        if (!('\0' != a[i + (939 - 859)])) {
            puts (a + i);
            break;
        }
        else {
            if (a[i + (910 - 831)] == ' ') {
                a[i + (701 - 622)] = '\n';
                for (int j = i;
                i + 79 >= j; j++)
                    putchar (a[j]);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                i = i + (362 - 282);
            }
            else if (a[i + (967 - 887)] == ' ') {
                a[i + (248 - 168)] = '\n';
                for (int j = i;
                j <= i + 80; j++)
                    putchar (a[j]);
                i += 81;
            }
            else {
                int j;
                j = i + 79;
                for (; a[j] != ' '; j = j - 1)
                    ;
                a[j] = '\n';
                for (int l = i;
                l <= j; l = l + 1)
                    putchar (a[l]);
                i = j + (668 - 667);
            };
        };
    };
}

