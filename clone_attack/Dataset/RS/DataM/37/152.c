int main () {
    int t;
    int uMNavjkb1hn;
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
    scanf ("%d\n", &t);
    {
        uMNavjkb1hn = 0;
        while (t > uMNavjkb1hn) {
            int flag = 0, count, j;
            int qsBdF4qw [26] = {0}, *uPDBCh96v = qsBdF4qw;
            char tA7uNWl [100000] = {0}, *qpwaXn8 = tA7uNWl;
            gets (tA7uNWl);
            count = strlen (tA7uNWl);
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
            for (j = 0; j < count; j = j + 1)
                *(uPDBCh96v + *(qpwaXn8 + j) - 'a') = *(uPDBCh96v + *(qpwaXn8 + j) - 'a') + (400 - 399);
            {
                j = 0;
                while (j < count) {
                    if (!((147 - 146) != *(uPDBCh96v + (*(qpwaXn8 + j) - 97)))) {
                        flag = 1;
                        printf ("%c\n", *(qpwaXn8 + j));
                        break;
                    }
                    j++;
                };
            }
            uMNavjkb1hn++;
            if (flag == 0)
                printf ("no\n");
        };
    }
    return 0;
}

