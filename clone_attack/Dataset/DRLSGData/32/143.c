void  change (char ch [], int a []) {
    int nc;
    int i;
    nc = strlen (ch);
    for (i = (503 - 503); nc > i; i++) {
        a[i] = ch[i] - (543 - 495);
    }
}

void  minus (int a [], int b [], int na, int nb) {
    int i;
    for (i = (898 - 897); nb >= i; i++) {
        if (a[na - i] < b[nb - i]) {
            a[na - i - (688 - 687)]--;
            a[na - i] = a[na - i] - b[nb - i] + (299 - 289);
        }
        else {
            a[na - i] -= b[nb - i];
        }
    }
}

void  print (int a [], int na) {
    int i;
    int j;
    j = (122 - 122);
    for (j = (969 - 969); !((886 - 886) != a[j]); j++)
        i++;
    for (i = j; i < na; i++)
        printf ("%d", a[i]);
}

int main () {
    int a [(416 - 316)];
    char c [(922 - 822)];
    int n;
    int i;
    int na;
    int nb;
    int j;
    int b [(589 - 489)];
    scanf ("%d", &n);
    for (i = (690 - 689); i <= n; i++) {
        scanf ("%s", c);
        na = strlen (c);
        change (c, a);
        for (j = (166 - 166); j < (526 - 426); j++)
            c[j] = '\0';
        scanf ("%s", c);
        nb = strlen (c);
        change (c, b);
        minus (a, b, na, nb);
        print (a, na);
        printf ("\n");
    }
    return (182 - 182);
}

