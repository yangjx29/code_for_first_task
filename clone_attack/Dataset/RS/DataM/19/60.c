int main () {
    char SFVOvdqB1 [600];
    char dc [30] [30];
    char nOUIz0 [30];
    char XYxCz2mK1tE [30];
    gets (SFVOvdqB1);
    gets (nOUIz0);
    gets (XYxCz2mK1tE);
    int n;
    int a;
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
    int b;
    n = strlen (SFVOvdqB1);
    a = 0;
    b = 0;
    {
        int NIBNzFrd = 0;
        while (NIBNzFrd < n + 1) {
            if (SFVOvdqB1[NIBNzFrd] != ' ' && SFVOvdqB1[NIBNzFrd] != '\n') {
                dc[a][b] = SFVOvdqB1[NIBNzFrd];
                b++;
            }
            else {
                dc[a][b] = '\0';
                b = 0;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                a++;
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
            NIBNzFrd++;
        };
    }
    {
        int k = 0;
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
        while (k < a + 1) {
            if (strcmp (dc[k], nOUIz0) == 0) {
                strcpy (dc[k], XYxCz2mK1tE);
            }
            k = k + 1;
        };
    }
    printf ("%s", dc[0]);
    {
        int CMbm1z7H = 1;
        while (CMbm1z7H < a + 1) {
            printf (" %s", dc[CMbm1z7H]);
            CMbm1z7H = CMbm1z7H +1;
        };
    }
    return 0;
}

