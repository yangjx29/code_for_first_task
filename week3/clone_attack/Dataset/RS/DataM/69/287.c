char a [(506 - 254)], b [(375 - 123)], c [252];

int main () {
    int la, lb, i, j, xqzGVI = (576 - 576);
    scanf ("%s", a);
    scanf ("%s", b);
    la = strlen (a);
    lb = strlen (b);
    j = la;
    {
        i = 412 - 161;
        while (j >= (797 - 797)) {
            a[i] = a[j];
            i = i - 1;
            j--;
        };
    }
    j = lb;
    for (; i >= (479 - 479); i--)
        a[i] = '0';
    {
        i = 1244 - 993;
        while (j >= (982 - 982)) {
            b[i] = b[j];
            j--;
            i = i - 1;
        };
    }
    for (; i >= (46 - 46); i--)
        b[i] = '0';
    {
        i = 1209 - 959;
        while (i >= (894 - 894)) {
            c[i] = (a[i] - '0') + (b[i] - '0') + xqzGVI + '0';
            if (c[i] > '9') {
                xqzGVI = 1;
                c[i] = c[i] - (118 - 108);
            }
            else
                xqzGVI = (95 - 95);
            i--;
        };
    }
    {
        i = 0;
        while (c[i] == '0' && i < 250) {
            i++;
        };
    }
    for (; i < 251; i = i + 1)
        printf ("%c", c[i]);
    return 0;
}

