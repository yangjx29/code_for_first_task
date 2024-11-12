int main () {
    char PDUi3481SYr [1000] [1000], *p;
    int n;
    int N95mgW3jHf;
    int aQDV65Uo1;
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
    scanf ("%d\n", &n);
    for (N95mgW3jHf = 0; n > N95mgW3jHf; N95mgW3jHf++)
        gets (PDUi3481SYr[N95mgW3jHf]);
    for (N95mgW3jHf = 0; n > N95mgW3jHf; N95mgW3jHf++) {
        aQDV65Uo1 = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        p = &PDUi3481SYr[N95mgW3jHf][0];
        if (!('_' == *p) && !(0 != isalpha (*p)))
            printf ("0\n");
        else {
            for (p = PDUi3481SYr[N95mgW3jHf] + 1; !('\0' == *p); p = p + 1) {
                if (*p != '_' && isalpha (*p) == 0 && isdigit (*p) == 0)
                    aQDV65Uo1++;
            }
            if (aQDV65Uo1 != 0)
                printf ("0\n");
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
            if (aQDV65Uo1 == 0)
                ;
        };
    }
    return 0;
}

