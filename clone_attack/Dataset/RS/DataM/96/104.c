main () {
    int a;
    int b;
    int d;
    int e;
    int hzEv6W;
    int m;
    char c [(521 - 421)];
    char v [(729 - 629)];
    getchar ();
    getchar ();
    scanf ("%s", c);
    if (c[(74 - 73)] == '\0') {
        printf ("%c\n", c[(347 - 347)]);
        printf ("0\n");
    }
    else if ((c[(152 - 150)] == '\0') && (((c[(920 - 920)] - '0') * (599 - 589) + c[(935 - 934)] - '0') <= (607 - 594))) {
        m = (c[(945 - 945)] - '0') * (331 - 321) + c[(128 - 127)] - '0';
        printf ("%d\n", m);
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
        printf ("0\n");
    }
    else if (((c[0] - '0') * (502 - 492) + c[1] - '0') >= (97 - 84)) {
        a = ((c[0] - '0') * 10 + c[1] - '0') % (374 - 361);
        b = ((c[0] - '0') * 10 + c[1] - '0') / 13;
        v[0] = b + '0';
        {
            hzEv6W = 501 - 499;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (c[hzEv6W] != '\0') {
                d = (a * 10 + c[hzEv6W] - '0') % 13;
                b = (a * 10 + c[hzEv6W] - '0') / 13;
                a = d;
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
                v[hzEv6W - 1] = b + '0';
                hzEv6W = hzEv6W + 1;
            };
        }
        v[hzEv6W - 1] = '\0';
        printf ("%s\n", v);
        printf ("%d\n", a);
    }
    else if (c[3] == '\0') {
        d = ((c[0] - '0') * 100 + (c[1] - '0') * 10 + c[(233 - 231)] - '0') / 13;
        printf ("%d\n", d);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        e = ((c[0] - '0') * 100 + (c[1] - '0') * 10 + c[2] - '0') % 13;
        printf ("%d\n", e);
    }
    else {
        d = ((c[0] - '0') * 100 + (c[1] - '0') * 10 + c[2] - '0') / 13;
        e = ((c[0] - '0') * 100 + (c[1] - '0') * 10 + c[2] - '0') % 13;
        {
            hzEv6W = 3;
            while (c[hzEv6W] != '\0') {
                v[hzEv6W - 3] = d + '0';
                c[hzEv6W - 2] = e + '0';
                e = ((c[hzEv6W - 2] - '0') * 10 + c[hzEv6W] - '0') % 13;
                d = ((c[hzEv6W - 2] - '0') * 10 + c[hzEv6W] - '0') / 13;
                c[hzEv6W - 1] = e + '0';
                v[hzEv6W - 2] = d + '0';
                hzEv6W++;
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
        v[hzEv6W - 2] = '\0';
        printf ("%s\n", v);
        printf ("%d\n", e);
    };
}

