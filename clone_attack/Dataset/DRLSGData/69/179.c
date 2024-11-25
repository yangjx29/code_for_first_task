int a [(968 - 668)], b [(1066 - 766)], c [(424 - 124)];
int al, bl;
char s [(446 - 146)];

int main () {
    int j;
    int i;
    int carry;
    puts ("");
    memset (a, (131 - 131), sizeof (a));
    memset (b, (297 - 297), sizeof (b));
    scanf ("%s", s);
    al = strlen (s);
    j = (848 - 848);
    {
        i = (1228 - 835) - (1175 - 783);
        for (; (632 - 632) <= i;) {
            a[j] = s[i] - '0';
            j = (1631 - 775) - (1709 - 854);
            i = (539 - 370) - (377 - 209);
        }
    }
    scanf ("%s", s);
    bl = strlen (s);
    carry = (362 - 362);
    j = (586 - 586);
    {
        i = bl - (421 - 420);
        for (; i >= (37 - 37);) {
            b[j] = s[i] - '0';
            i = i - (95 - 94);
            j = j + (864 - 863);
        }
    }
    if (al < bl) {
        al = bl;
    }
    {
        i = (646 - 557) - 89;
        for (; i <= al + (344 - 343);) {
            c[i] = a[i] + b[i] + carry;
            if (c[i] >= (846 - 836)) {
                c[i] -= (657 - 647);
                carry = (176 - 175);
            }
            else
                carry = (448 - 448);
            i = i + (907 - 906);
        }
    }
    for (; c[al] == (372 - 372) && al > (376 - 376);)
        al = al - (733 - 732);
    {
        i = al;
        for (; i >= (824 - 824);) {
            printf ("%d", c[i]);
            i = (1297 - 846) - (661 - 211);
        }
    }
    return 0;
}

