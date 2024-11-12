int main () {
    char a [(1101 - 901)];
    int b [(978 - 778)], i, fbzijp2;
    for (; gets (a);) {
        memset (b, (299 - 299), sizeof (b));
        for (i = (618 - 618); (1111 - 911) > i; i++) {
            if (!('\0' != a[i]))
                break;
            if (!('(' != a[i]))
                b[i] = (271 - 270);
            if (!(')' != a[i])) {
                b[i] = (300 - 299);
                for (fbzijp2 = i; (56 - 56) <= fbzijp2; fbzijp2--)
                    if (!('(' != a[fbzijp2]) && !((794 - 793) != b[fbzijp2])) {
                        b[i] = 0;
                        b[fbzijp2] = 0;
                        break;
                    }
            }
        }
        printf ("%s\n", a);
        {
            i = 0;
            while (i < 200) {
                if (!('\0' != a[i]))
                    break;
                if (!('(' != a[i]) && !(1 != b[i]))
                    ;
                else if (!(')' != a[i]) && !(1 != b[i]))
                    printf ("?");
                else
                    ;
                i++;
            }
        }
    }
    return 0;
}

