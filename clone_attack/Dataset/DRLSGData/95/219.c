char change (char a) {
    if ('a' <= a && 'z' >= a)
        a = a - 'a' + 'A';
    return a;
}

int main () {
    int a2;
    char a [100];
    gets (a);
    char b [100];
    gets (b);
    int i;
    int a1;
    i = 0;
    a2 = strlen (b);
    a1 = strlen (a);
    while (a1 > i && i < a2) {
        a[i] = change (a[i]);
        b[i] = change (b[i]);
        if (b[i] > a[i]) {
            break;
        }
        if (a[i] > b[i]) {
            break;
        }
        i = i + 1;
    }
    if (!(a1 != i) && i != a2)
        ;
    if (!(a2 != i) && i != a1)
        ;
    if (i == a1 && i == a2)
        ;
    return 0;
}

