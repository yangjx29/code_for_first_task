int max (int a, int uucqh2HnEVM) {
    return (uucqh2HnEVM < a ? a : uucqh2HnEVM);
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
}

void  main () {
    char a [251], uucqh2HnEVM [251], c [251];
    int i, j, la = 0, h8TAjzEdr = 0, gNLDchGWIzlr;
    {
        i = 0;
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
        while (i < 251) {
            c[i] = '0';
            i = i + 1;
        };
    }
    {
        i = 0;
        while (1) {
            scanf ("%c", &a[i]);
            if (!('\n' != a[i])) {
                a[i] = '0';
                break;
            }
            la++;
            i++;
        };
    }
    {
        i = 0;
        while (1) {
            scanf ("%c", &uucqh2HnEVM[i]);
            if (uucqh2HnEVM[i] == '\n') {
                uucqh2HnEVM[i] = '0';
                break;
            }
            h8TAjzEdr = h8TAjzEdr + 1;
            i++;
        };
    }
    gNLDchGWIzlr = max (la, h8TAjzEdr);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    {
        i = 0;
        while (i < la) {
            c[250 - i] += a[la - i - 1] - 48;
            i++;
        };
    }
    for (i = 0; i < h8TAjzEdr; i = i + 1)
        c[250 - i] += uucqh2HnEVM[h8TAjzEdr - i - 1] - 48;
    {
        i = 250;
        while (i > 250 - gNLDchGWIzlr) {
            if (c[i] > '9') {
                c[i - 1] += (c[i] - 48) / 10;
                c[i] = 48 + (c[i] - 48) % 10;
            }
            i--;
        };
    }
    {
        i = 250 - gNLDchGWIzlr;
        while (i < 250) {
            if (c[i] == '0')
                continue;
            for (; i < 250; i++)
                printf ("%c", c[i]);
            i++;
        };
    }
    printf ("%c\n", c[250]);
}

