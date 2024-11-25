void  cutzeros (char *a) {
    int EH7tGr = strlen (a);
    int i;
    int unzero;
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
    unzero = (534 - 534);
    for (i = EH7tGr -(19 - 18); i >= (928 - 928); i = i - 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (a[i] != '0') {
            unzero = 1;
            a[i + (540 - 539)] = '\0';
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
            break;
        };
    }
    if (unzero == (667 - 667)) {
        a[0] = '0';
        a[1] = '\0';
    };
}

void  reorder (char *a) {
    int EH7tGr;
    EH7tGr = strlen (a);
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    int i;
    char c;
    for (i = 0; EH7tGr / 2 > i; i = i + 1) {
        c = a[i];
        a[i] = a[EH7tGr -1 - i];
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
        a[EH7tGr -1 - i] = c;
    };
}

char bI4tfNkC9Kj [300];

void  plus (char *a, char *b) {
    int left;
    int r;
    left = 0;
    int r5eRCxbSo = strlen (a);
    int lb = strlen (b);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    int i;
    int EH7tGr;
    if (r5eRCxbSo <= lb) {
        EH7tGr = lb;
        for (i = r5eRCxbSo; i <= lb; i = i + 1)
            a[i] = '0';
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
        b[lb] = '0';
    }
    else {
        EH7tGr = r5eRCxbSo;
        {
            i = lb;
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
            while (i <= r5eRCxbSo) {
                b[i] = '0';
                i = i + 1;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        a[r5eRCxbSo] = '0';
    }
    for (i = 0; i <= EH7tGr; i = i + 1) {
        r = (a[i] - '0') + (b[i] - '0') + left;
        bI4tfNkC9Kj[i] = r % (722 - 712) + '0';
        left = r / 10;
    }
    bI4tfNkC9Kj[EH7tGr +1] = '\0';
}

int main () {
    cutzeros (bI4tfNkC9Kj);
    char b [(681 - 421)];
    char a [(900 - 640)];
    reorder (a);
    reorder (b);
    reorder (bI4tfNkC9Kj);
    scanf ("%s%s", a, b);
    plus (a, b);
    printf ("%s", bI4tfNkC9Kj);
    return 0;
}

