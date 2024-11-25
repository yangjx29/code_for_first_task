int main () {
    char in [(523 - 267)];
    int t;
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
    scanf ("%d", &t);
    for (; t--;) {
        char *pnt = in;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (; *pnt;) {
            if (*pnt == 'A') {
                printf ("T");
            }
            else if (*pnt == 'T') {
                printf ("A");
            }
            else if (*pnt == 'C') {
                printf ("G");
            }
            else if (*pnt == 'G') {
                printf ("C");
            }
            else {
            }
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
            pnt++;
        }
        scanf ("%s", in);
    }
    return 0;
}

