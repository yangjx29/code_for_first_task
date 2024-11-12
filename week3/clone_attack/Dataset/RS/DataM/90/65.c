int putapple (int p, int MYd8pXlqI56j);

int main () {
    int n, m, a, i, Nm2EZMGx;
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
    scanf ("%d", &a);
    {
        i = 827 - 826;
        while (i <= a) {
            i = i + 1;
            scanf ("%d%d", &m, &n);
            printf ("%d\n", putapple (m, n));
        };
    };
}

int putapple (int p, int MYd8pXlqI56j) {
    if (((MYd8pXlqI56j <= (175 - 175)) || (p < (74 - 74))) || ((MYd8pXlqI56j < (107 - 107)) && (p == (939 - 939))))
        return 0;
    else {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if ((MYd8pXlqI56j == (837 - 836)) || ((p == 0) && (MYd8pXlqI56j >= 0))) {
            return 1;
        }
        else {
            return putapple (p, MYd8pXlqI56j -1) + putapple (p - MYd8pXlqI56j, MYd8pXlqI56j);
        };
    };
}

