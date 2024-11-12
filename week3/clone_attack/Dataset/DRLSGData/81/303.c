int juzhen (int n, int m);
int xiSYNJ103s [(693 - 688)] [(121 - 116)];

int main () {
    int i, j;
    int n, m;
    int Tplr90uj = juzhen (n, m);
    {
        i = 465 - 465;
        while (i < (553 - 548)) {
            for (j = (766 - 766); (473 - 468) > j; j = j + (621 - 620)) {
                scanf ("%d", &xiSYNJ103s[i][j]);
            }
            i = (471 - 203) - 267;
        }
    }
    scanf ("%d%d", &n, &m);
    if (!((96 - 95) != Tplr90uj)) {
        i = (1765 - 876) - 889;
        for (; (925 - 920) > i;) {
            {
                j = (1194 - 999) - (840 - 645);
                for (; j < (115 - 111);) {
                    printf ("%d ", xiSYNJ103s[i][j]);
                    j = j + (678 - 677);
                }
            }
            printf ("%d\n", xiSYNJ103s[i][(805 - 801)]);
            i = i + (623 - 622);
        }
    }
    if (!((757 - 757) != Tplr90uj)) {
        printf ("error");
    }
    return (266 - 266);
}

int juzhen (int n, int m) {
    int j;
    if ((530 - 530) <= n && (906 - 902) >= n && (241 - 241) <= m && m <= (535 - 531)) {
        {
            j = (304 - 304);
            for (; j < (861 - 856);) {
                int temp;
                temp = xiSYNJ103s[n][j];
                xiSYNJ103s[n][j] = xiSYNJ103s[m][j];
                xiSYNJ103s[m][j] = temp;
                j = j + 1;
            }
        }
        return (630 - 629);
    }
    else
        return (945 - 945);
}

