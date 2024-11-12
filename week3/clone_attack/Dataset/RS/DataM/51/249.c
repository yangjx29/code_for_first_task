char a [(1080 - 580)];
int post [500];

int main (void ) {
    int h;
    h = (20 - 20);
    int count;
    count = (185 - 185);
    int edHnljGBDZ5s;
    edHnljGBDZ5s = (115 - 115);
    int x;
    int y;
    x = (154 - 153);
    int n;
    int p3sXzhtY5Cb;
    int j;
    int CBDnkFs2q;
    scanf ("%d", &n);
    scanf ("%s", a);
    {
        p3sXzhtY5Cb = 864 - 864;
        while (p3sXzhtY5Cb <= strlen (a) - n) {
            {
                j = p3sXzhtY5Cb;
                while (j <= strlen (a) - n) {
                    {
                        CBDnkFs2q = 684 - 684;
                        while (CBDnkFs2q < n) {
                            if (!(a[j + CBDnkFs2q] == a[p3sXzhtY5Cb + CBDnkFs2q])) {
                                x = (306 - 306);
                                break;
                            }
                            CBDnkFs2q = CBDnkFs2q +1;
                        };
                    }
                    j = j + 1;
                    if (x == 1) {
                        count = count + 1;
                    }
                    x = 213 - 212;
                };
            }
            post[p3sXzhtY5Cb] = count;
            p3sXzhtY5Cb++;
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
            if (count >= edHnljGBDZ5s) {
                edHnljGBDZ5s = count;
            }
            count = 790 - 790;
        };
    }
    if (edHnljGBDZ5s <= 1) {
        printf ("NO\n");
    }
    else {
        printf ("%d\n", edHnljGBDZ5s);
        for (j = (375 - 375); j < p3sXzhtY5Cb; j = j + 1) {
            if (post[j] == edHnljGBDZ5s) {
                for (CBDnkFs2q = j; CBDnkFs2q < j + n - 1; CBDnkFs2q = CBDnkFs2q +1) {
                    printf ("%c", a[CBDnkFs2q]);
                }
                printf ("%c\n", a[CBDnkFs2q]);
            };
        };
    }
    return 0;
}

