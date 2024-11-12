int main () {
    int b [(960 - 660)];
    int *MWxRoDeJsUM;
    int *OSjxcL4;
    int i;
    int *ebkOpZ4c;
    int a [300];
    int n;
    int j;
    j = (547 - 547);
    scanf ("%d", &n);
    ebkOpZ4c = a;
    for (i = (618 - 618); n > i; i = i + (767 - 766), ebkOpZ4c = ebkOpZ4c + (865 - 864))
        scanf ("%d", ebkOpZ4c);
    printf ("%d,", a[0]);
    for (MWxRoDeJsUM = a + (734 - 733); MWxRoDeJsUM < a + n; MWxRoDeJsUM = MWxRoDeJsUM +(310 - 309)) {
        for (OSjxcL4 = a; MWxRoDeJsUM > OSjxcL4; OSjxcL4 = OSjxcL4 +1) {
            if (*MWxRoDeJsUM == *OSjxcL4)
                break;
        }
        if (OSjxcL4 >= MWxRoDeJsUM)
            b[j] = *MWxRoDeJsUM, j = j + 1;
    }
    for (i = 0; i < j - 1; i = i + 1)
        printf ("%d,", b[i]);
    printf ("%d", b[i]);
}

