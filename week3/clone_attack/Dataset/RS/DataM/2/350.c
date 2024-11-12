struct   {
    char z [30];
    int NosCi2Dygqm;
}
s [1000];
struct   {
    int name;
    int kNyd5jY, b [1000], k;
}
r [93];

int main () {
    int m, i, PQblAz8e, Sng738, q;
    scanf ("%d", &m);
    {
        i = 417 - 352;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (90 >= i) {
            r[i].name = i;
            r[i].k = (908 - 907);
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
            i = i + 1;
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
    {
        i = 1;
        while (m >= i) {
            scanf ("%d %s", &s[i].NosCi2Dygqm, s[i].z);
            Sng738 = strlen (s[i].z);
            for (PQblAz8e = 0; Sng738 > PQblAz8e; PQblAz8e++) {
                q = s[i].z[PQblAz8e];
                r[q].kNyd5jY++;
                r[q].b[r[q].k] = s[i].NosCi2Dygqm;
                r[q].k++;
            }
            i = i + 1;
        };
    }
    for (i = 65; 90 > i; i = i + 1)
        for (PQblAz8e = 90; PQblAz8e > i; PQblAz8e--)
            if (r[PQblAz8e].kNyd5jY > r[PQblAz8e -1].kNyd5jY) {
                r[92] = r[PQblAz8e];
                r[PQblAz8e] = r[PQblAz8e -1];
                r[PQblAz8e -1] = r[92];
            }
    printf ("%c\n%d\n", r[65].name, r[65].kNyd5jY);
    {
        i = 1;
        while (i <= r[65].kNyd5jY) {
            printf ("%d\n", r[65].b[i]);
            i++;
        };
    };
}

