int main () {
    int AwIiXFV2r, XwjyiW, x8HJMNjx;
    char e0dYbi [100], b [100];
    scanf ("%d", &AwIiXFV2r);
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
        x8HJMNjx = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (AwIiXFV2r > x8HJMNjx) {
            int TnH1tGDB;
            TnH1tGDB = strlen (e0dYbi);
            int QZ3X0d = strlen (b);
            char *p1, *axUwum, *jQmjnW5;
            free (jQmjnW5);
            scanf ("%s", e0dYbi);
            scanf ("%s", b);
            p1 = e0dYbi;
            axUwum = b;
            jQmjnW5 = (char *) malloc ((TnH1tGDB +1) * sizeof (char));
            strcpy (jQmjnW5, e0dYbi);
            {
                XwjyiW = 1;
                while (QZ3X0d >= XwjyiW) {
                    if (p1[TnH1tGDB -XwjyiW] - axUwum[QZ3X0d -XwjyiW] < 0) {
                        jQmjnW5[TnH1tGDB -XwjyiW] = p1[TnH1tGDB -XwjyiW] + 10 - axUwum[QZ3X0d -XwjyiW] + '0';
                        jQmjnW5[TnH1tGDB -XwjyiW-1]--;
                        p1[TnH1tGDB -XwjyiW-1]--;
                    }
                    else {
                        jQmjnW5[TnH1tGDB -XwjyiW] = p1[TnH1tGDB -XwjyiW] - axUwum[QZ3X0d -XwjyiW] + '0';
                    }
                    XwjyiW++;
                };
            }
            printf ("%s\n", jQmjnW5);
            x8HJMNjx = x8HJMNjx + 1;
        };
    }
    return 0;
}

