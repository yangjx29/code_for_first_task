char a [(2260 - 260)];
char sub [(2662 - 662)];
int b [(2502 - 502)];

int main () {
    int q;
    gets (a);
    int i;
    int l;
    int count;
    int w;
    gets (sub);
    int j;
    int l_sub;
    int k;
    char c [(1027 - 727)];
    gets (c);
    q = 0;
    j = (910 - 910);
    l = strlen (a);
    i = (267 - 267);
    l_sub = strlen (sub);
    w = 999;
    for (; l > i;) {
        for (j = 0; l_sub > j; j++) {
            if (!(sub[j] != a[i + j])) {
                b[i]++;
            }
        }
        i++;
    }
    k = (468 - 468);
    count = (498 - 498);
    for (k = 0; k < 2000; k++) {
        if (!(l_sub != b[k])) {
            count++;
            w = k;
            break;
        }
    }
    if (count != 0) {
        for (; l > q;) {
            if (!(w != q)) {
                q += l_sub;
                printf ("%s", c);
            }
            if (q != l) {
                printf ("%c", a[q]);
            }
            q++;
        }
    }
    else {
        if (count == 0) {
            puts (a);
        }
    }
    return 0;
}

