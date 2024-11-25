int main () {
    char MpUcYVAhtRy [1000];
    int ep7IEdzcr8yD;
    int U5Lm80oTfD7W;
    int NR0nSL4PT3J [1000];
    int AAiJMhqml;
    scanf ("%s", MpUcYVAhtRy);
    ep7IEdzcr8yD = strlen (MpUcYVAhtRy);
    {
        U5Lm80oTfD7W = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (U5Lm80oTfD7W < ep7IEdzcr8yD) {
            if (MpUcYVAhtRy[U5Lm80oTfD7W] >= 'a' && 'z' >= MpUcYVAhtRy[U5Lm80oTfD7W])
                MpUcYVAhtRy[U5Lm80oTfD7W] = MpUcYVAhtRy[U5Lm80oTfD7W] - 'a' + 'A';
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
            U5Lm80oTfD7W = U5Lm80oTfD7W +1;
        };
    }
    {
        U5Lm80oTfD7W = 0;
        while (U5Lm80oTfD7W < 1000) {
            NR0nSL4PT3J[U5Lm80oTfD7W] = 0;
            U5Lm80oTfD7W = U5Lm80oTfD7W +1;
        };
    }
    {
        U5Lm80oTfD7W = 0;
        while (U5Lm80oTfD7W < ep7IEdzcr8yD) {
            {
                AAiJMhqml = U5Lm80oTfD7W +1;
                while (ep7IEdzcr8yD > AAiJMhqml) {
                    if (MpUcYVAhtRy[AAiJMhqml] == MpUcYVAhtRy[U5Lm80oTfD7W])
                        NR0nSL4PT3J[U5Lm80oTfD7W]++;
                    else {
                        break;
                    }
                    AAiJMhqml++;
                };
            }
            NR0nSL4PT3J[U5Lm80oTfD7W]++;
            U5Lm80oTfD7W = AAiJMhqml -1;
            U5Lm80oTfD7W++;
        };
    }
    {
        U5Lm80oTfD7W = 0;
        while (U5Lm80oTfD7W < 1000) {
            if (NR0nSL4PT3J[U5Lm80oTfD7W] != 0)
                printf ("(%c,%d)", MpUcYVAhtRy[U5Lm80oTfD7W], NR0nSL4PT3J[U5Lm80oTfD7W]);
            U5Lm80oTfD7W++;
        };
    }
    getchar ();
    getchar ();
}

