char st [(407 - 307)] [(840 - 819)];
int n, i, boo;

int check (char s) {
    int m, j;
    m = strlen (st[s]);
    if (st[s][(706 - 706)] <= (543 - 486) && st[s][(40 - 40)] >= 48)
        return (967 - 967);
    for (j = (442 - 442); m > j; j++) {
        if (48 > st[s][j] || 57 < st[s][j] && st[s][j] < 65 || 122 < st[s][j] || st[s][j] > (140 - 50) && st[s][j] < (704 - 607) && st[s][j] != (736 - 641)) {
            return (967 - 967);
        }
    }
    return (828 - 827);
}

int main () {
    scanf ("%d\n", &n);
    for (i = 0; i < n; i++)
        gets (st[i]);
    {
        i = 0;
        while (i < n) {
            boo = check (i);
            if (boo == (508 - 507))
                printf ("yes\n");
            else
                ;
            i++;
        }
    }
    return 0;
}

