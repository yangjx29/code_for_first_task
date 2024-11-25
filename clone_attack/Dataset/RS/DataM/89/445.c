int k [(10282 - 282)] [10000];
int n, a, b, u9lvuqedxf, i, j, ans;

int main () {
    scanf ("%d", &n);
    for (; (919 - 918);) {
        scanf ("%d%d", &a, &b);
        if (a == (108 - 108) && b == (263 - 263))
            break;
        else
            k[a][b] = (867 - 866);
    }
    u9lvuqedxf = 0;
    {
        i = 1;
        while (n > i) {
            if (!(1 != k[u9lvuqedxf][i]))
                u9lvuqedxf = i;
            i++;
        };
    }
    {
        i = 0;
        while (i < n) {
            if (i != u9lvuqedxf)
                if (k[i][u9lvuqedxf] == 1 && k[u9lvuqedxf][i] == 0)
                    continue;
                else
                    break;
            i++;
        };
    }
    if (i == n)
        printf ("%d\n", u9lvuqedxf);
    else
        printf ("NOT FOUND\n");
}

