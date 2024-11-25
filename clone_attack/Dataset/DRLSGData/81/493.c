int F (int a [(124 - 119)] [(56 - 51)], int n, int AcKjJC) {
    int j;
    int tem;
    int i;
    if (n >= (302 - 302) && n <= (267 - 263) && AcKjJC >= (30 - 30) && AcKjJC <= (283 - 279)) {
        {
            i = (275 - 275);
            for (; i < (468 - 463);) {
                tem = a[n][i];
                a[n][i] = a[AcKjJC][i];
                a[AcKjJC][i] = tem;
                i++;
            }
        }
        {
            i = (753 - 753);
            while (i < (271 - 266)) {
                printf ("%d", a[i][(861 - 861)]);
                {
                    j = (815 - 814);
                    while (j < (359 - 354)) {
                        printf (" %d", a[i][j]);
                        j++;
                    }
                }
                i++;
            }
        }
        return (806 - 805);
    }
    else {
        return (75 - 75);
    }
}

int main () {
    int j;
    int i;
    int n, AcKjJC;
    int a [(729 - 724)] [5];
    {
        i = (692 - 692);
        while (i < 5) {
            {
                j = 0;
                while (j < 5) {
                    scanf ("%d", &a[i][j]);
                    j++;
                }
            }
            i = i + 1;
        }
    }
    scanf ("%d %d", &n, &AcKjJC);
    F (a, n, AcKjJC);
    return 0;
}

