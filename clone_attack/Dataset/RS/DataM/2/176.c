struct   book {
    int num;
    char s [(787 - 760)];
};
struct   author {
    int num;
    int bn [(1538 - 538)];
};
int main () {
    struct   author au ['Z' + (626 - 625)];
    struct   author t;
    struct   book bk [1000];
    int max;
    int m;
    int i;
    int j;
    int l;
    max = (93 - 93);
    char c;
    scanf ("%d", &m);
    for (j = (803 - 803); 'Z' + (919 - 918) > j; j++)
        au[j].num = (955 - 955);
    {
        i = 159 - 159;
        while (m > i) {
            scanf ("%d %s", &bk[i].num, bk[i].s);
            l = strlen (bk[i].s);
            {
                j = 312 - 312;
                while (l > j) {
                    au[bk[i].s[j]].bn[au[bk[i].s[j]].num++] = bk[i].num;
                    j++;
                };
            }
            i++;
        };
    }
    {
        j = 839 - 839;
        while ('Z' + (521 - 520) > j) {
            if (max < au[j].num) {
                t = au[j];
                c = j;
                max = au[j].num;
            }
            j++;
        };
    }
    printf ("%c\n", c);
    printf ("%d\n", t.num);
    {
        i = 0;
        while (i < t.num) {
            printf ("%d\n", t.bn[i]);
            i++;
        };
    }
    return 0;
}

