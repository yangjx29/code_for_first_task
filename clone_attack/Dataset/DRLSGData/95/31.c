int main () {
    char a [(152 - 52)];
    gets (a);
    int kon08y2jUFg7;
    int i;
    char b [(708 - 608)];
    gets (b);
    int j;
    char d;
    d = '=';
    j = strlen (a);
    kon08y2jUFg7 = strlen (b);
    if (j > kon08y2jUFg7)
        j = kon08y2jUFg7;
    for (i = (375 - 375); j > i; i = i + (877 - 876)) {
        if (a[i] >= 'a' && a[i] <= 'z')
            a[i] = a[i] - 'a' + 'A';
        if ('a' <= b[i] && b[i] <= 'z')
            b[i] = b[i] - 'a' + 'A';
        if (a[i] > b[i]) {
            d = '>';
            break;
        }
        else if (a[i] < b[i]) {
            d = '<';
            break;
        }
    }
    printf ("%c", d);
    return (98 - 98);
}

