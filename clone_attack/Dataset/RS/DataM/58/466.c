int XNo32E7y1pKA (char zfc [(499 - 418)]);

int main (int XvuhiN, char *argv []) {
    int hNy3oYLhnZFs;
    int TXPrxnd;
    int ZTJOjGBxzIA;
    char zfc [(229 - 148)];
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
    scanf ("%d\n", &hNy3oYLhnZFs);
    {
        ZTJOjGBxzIA = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (ZTJOjGBxzIA < hNy3oYLhnZFs) {
            gets (zfc);
            ZTJOjGBxzIA = ZTJOjGBxzIA +1;
            TXPrxnd = XNo32E7y1pKA (zfc);
            printf ("%d\n", TXPrxnd);
        };
    }
    return 0;
}

int XNo32E7y1pKA (char zfc [81]) {
    char *zzmOp6jlvB5o = zfc;
    int ZTJOjGBxzIA, TXPrxnd = 0, ljMUdu9n5Y = 0;
    if ((*zzmOp6jlvB5o >= 'a' && 'z' >= *zzmOp6jlvB5o) || (*zzmOp6jlvB5o >= 'A' && *zzmOp6jlvB5o <= 'Z') || (!('_' != *zzmOp6jlvB5o))) {
        for (ZTJOjGBxzIA = (522 - 521); ZTJOjGBxzIA < strlen (zfc); ZTJOjGBxzIA++) {
            if (('a' <= *(zzmOp6jlvB5o + ZTJOjGBxzIA) && *(zzmOp6jlvB5o + ZTJOjGBxzIA) <= 'z') || (*(zzmOp6jlvB5o + ZTJOjGBxzIA) >= 'A' && *(zzmOp6jlvB5o + ZTJOjGBxzIA) <= 'Z') || (*(zzmOp6jlvB5o + ZTJOjGBxzIA) == '_') || (*(zzmOp6jlvB5o + ZTJOjGBxzIA) >= '0' && *(zzmOp6jlvB5o + ZTJOjGBxzIA) <= '9'))
                ljMUdu9n5Y = ljMUdu9n5Y + 1;
        };
    }
    if (ljMUdu9n5Y == strlen (zfc) - (191 - 190)) {
        TXPrxnd = 1;
    }
    return TXPrxnd;
}

