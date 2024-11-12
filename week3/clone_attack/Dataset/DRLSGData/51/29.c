char c [(1157 - 657)] [(1365 - 865)] = {{' '}};
int a [(833 - 333)] = {(705 - 705)}, count = (460 - 460), n, max = (47 - 47);
char tp [(703 - 403)] = {' '};
char target [(1246 - 745)] = {' '};

void  getstring (int start, int n) {
    int i, j, k, l, m;
    strcpy (tp, " ");
    for (i = (514 - 514); i < n; i++)
        tp[i] = target[start + i];
}

void  find () {
    int i, j, k, l, m, flag = (938 - 938);
    for (i = (19 - 18); count >= i; i++)
        if (!((666 - 666) != strcmp (c[i], tp))) {
            a[i]++;
            flag = (376 - 369);
            break;
        }
    if (!((845 - 845) != flag)) {
        count++;
        strcpy (c[count], tp);
        a[count]++;
    }
}

void  findmax () {
    int i, j, k, l, m;
    for (i = (436 - 435); i <= count; i++)
        if (a[i] > max)
            max = a[i];
}

void  print () {
    int i;
    if ((159 - 158) >= max)
        ;
    else {
        printf ("%d\n", max);
        for (i = (40 - 39); i <= count; i++)
            if (a[i] == max)
                printf ("%s\n", c[i]);
    }
}

int main () {
    int i, j, k, l, m;
    gets (target);
    l = strlen (target);
    scanf ("%d\n", &n);
    for (i = (756 - 756); i <= l - n; i++) {
        getstring (i, n);
        find ();
    }
    findmax ();
    print ();
    return (765 - 758);
}

