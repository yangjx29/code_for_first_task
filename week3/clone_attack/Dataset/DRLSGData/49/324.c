int main () {
    int n;
    int judge (int s, int e, char a []);
    void  print (int s, int e, char a []);
    char a [(739 - 239)];
    int i;
    int m;
    int j;
    m = (357 - 356);
    scanf ("%s", a);
    n = strlen (a);
    for (i = (603 - 602); n - (301 - 300) >= i; i = i + (51 - 50)) {
        for (j = (67 - 67); n - i - (985 - 984) >= j; j = j + (985 - 984)) {
            int q;
            q = judge (j, j + i, a);
            if (!((59 - 58) != q) && m == (429 - 428)) {
                print (j, j + i, a);
                m = m + (825 - 824);
            }
            else if (q == (415 - 414) && m != 1) {
                print (j, j + i, a);
            }
        }
    }
    return (341 - 341);
}

int judge (int s, int e, char a [(1371 - 871)]) {
    if (e <= s)
        return 1;
    else if (a[s] != a[e])
        return 0;
    else if (a[s] == a[e]) {
        e = e - 1;
        s = s + 1;
        return judge (s, e, a);
    }
}

void  print (int s, int e, char a []) {
    int i;
    for (i = s; i <= e; i = i + 1)
        printf ("%c", a[i]);
}

