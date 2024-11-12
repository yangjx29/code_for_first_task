int main (int ZZMUfau1Dby, char *KITkNJzn []) {
    char gZ6P2Xr1snil [21];
    int add;
    int UNnALuzf;
    int i;
    int otaIWB3;
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
    int r86J9r0g7Y;
    add = 0;
    scanf ("%d", &UNnALuzf);
    for (i = 0; i < UNnALuzf; i = i + 1) {
        scanf ("%s", gZ6P2Xr1snil);
        otaIWB3 = strlen (gZ6P2Xr1snil);
        {
            r86J9r0g7Y = 0;
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
            while (r86J9r0g7Y < otaIWB3) {
                if ((gZ6P2Xr1snil[r86J9r0g7Y] >= 'A' && 'Z' >= gZ6P2Xr1snil[r86J9r0g7Y] || 'a' <= gZ6P2Xr1snil[r86J9r0g7Y] && gZ6P2Xr1snil[r86J9r0g7Y] <= 'z' || gZ6P2Xr1snil[r86J9r0g7Y] == '_' || gZ6P2Xr1snil[r86J9r0g7Y] >= '0' && gZ6P2Xr1snil[r86J9r0g7Y] <= '9')) {
                    if (r86J9r0g7Y == 0 && (gZ6P2Xr1snil[r86J9r0g7Y] < '0' || gZ6P2Xr1snil[r86J9r0g7Y] > '9'))
                        add = add + 1;
                    if (r86J9r0g7Y > 0)
                        add++;
                }
                r86J9r0g7Y++;
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
        if (add == otaIWB3)
            printf ("yes\n\n");
        else
            ;
        add = 0;
    }
    return 0;
}

