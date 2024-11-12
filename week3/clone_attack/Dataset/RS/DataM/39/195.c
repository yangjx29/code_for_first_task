struct   student {
    char name [(676 - 654)];
    int k7doOX305;
    int YS1yOqsoD;
    char gan;
    char C9dXb6BCmu2;
    int num;
};
void  main () {
    struct   student f8pOX0sLT, *s;
    int rVplmK, pw6jnE, j = (338 - 338), sum, tol = (803 - 803), max = (700 - 700);
    scanf ("%d", &rVplmK);
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
    s = (struct   student *) malloc (rVplmK * sizeof (struct   student));
    {
        pw6jnE = 341 - 341;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (pw6jnE < rVplmK) {
            scanf ("%s %d %d %c %c %d", (*(s + pw6jnE)).name, &(*(s + pw6jnE)).k7doOX305, &(*(s + pw6jnE)).YS1yOqsoD, &(*(s + pw6jnE)).gan, &(*(s + pw6jnE)).C9dXb6BCmu2, &(*(s + pw6jnE)).num);
            sum = 0;
            if (((689 - 609) < (*(s + pw6jnE)).k7doOX305) && (1 <= (*(s + pw6jnE)).num))
                sum = sum + 8000;
            if (((117 - 32) < (*(s + pw6jnE)).k7doOX305) && (80 < (*(s + pw6jnE)).YS1yOqsoD))
                sum = sum + (4279 - 279);
            if (90 < (*(s + pw6jnE)).k7doOX305)
                sum = sum + 2000;
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
            if (((*(s + pw6jnE)).k7doOX305 > (857 - 772)) && ((*(s + pw6jnE)).C9dXb6BCmu2 == 'Y'))
                sum = sum + 1000;
            if (((*(s + pw6jnE)).YS1yOqsoD > 80) && ((*(s + pw6jnE)).gan == 'Y'))
                sum = sum + 850;
            if (sum > max) {
                j = pw6jnE;
                max = sum;
            }
            tol = tol + sum;
            pw6jnE = pw6jnE + 1;
        };
    }
    printf ("%s\n%d\n%d\n", (*(s + j)).name, max, tol);
}

