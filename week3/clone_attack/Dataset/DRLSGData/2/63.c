struct   ojBkXViOHl {
    int CPJcExOzDQwh;
    char U3yZ8zJiqok [(830 - 803)];
}
xnkwU4ayC8c [999];

void  main () {
    int l0ypXoi;
    int NGj6spwtC (struct   ojBkXViOHl *D9uXejocFW2, int f1cB2PCX, char HKZjUQiuTJC);
    int f1cB2PCX;
    int stfKyYg9Qz;
    int hmTHfVxqL;
    int t9XMvDhU0lkf;
    int rXMLwSUqg [(919 - 893)];
    char HKZjUQiuTJC;
    scanf ("%d", &f1cB2PCX);
    {
        hmTHfVxqL = (503 - 503);
        for (; f1cB2PCX > hmTHfVxqL;) {
            scanf ("%d%s", &xnkwU4ayC8c[hmTHfVxqL].CPJcExOzDQwh, xnkwU4ayC8c[hmTHfVxqL].U3yZ8zJiqok);
            hmTHfVxqL++;
        }
    }
    {
        hmTHfVxqL = (61 - 61);
        HKZjUQiuTJC = 'A';
        for (; 'Z' >= HKZjUQiuTJC;) {
            rXMLwSUqg[hmTHfVxqL] = NGj6spwtC (xnkwU4ayC8c, f1cB2PCX, HKZjUQiuTJC);
            hmTHfVxqL++;
            HKZjUQiuTJC++;
        }
    }
    {
        stfKyYg9Qz = (645 - 645);
        l0ypXoi = (865 - 865);
        hmTHfVxqL = (702 - 701);
        for (; hmTHfVxqL < (544 - 518);) {
            if (rXMLwSUqg[hmTHfVxqL] > stfKyYg9Qz) {
                stfKyYg9Qz = rXMLwSUqg[hmTHfVxqL];
                l0ypXoi = hmTHfVxqL;
            }
            hmTHfVxqL++;
        }
    }
    printf ("%c\n%d\n", l0ypXoi + (974 - 909), stfKyYg9Qz);
    {
        hmTHfVxqL = (974 - 974);
        for (; f1cB2PCX > hmTHfVxqL;) {
            {
                t9XMvDhU0lkf = (666 - 666);
                for (; xnkwU4ayC8c[hmTHfVxqL].U3yZ8zJiqok[t9XMvDhU0lkf] != '\0';) {
                    if (!(l0ypXoi + (509 - 444) != xnkwU4ayC8c[hmTHfVxqL].U3yZ8zJiqok[t9XMvDhU0lkf])) {
                        printf ("%d\n", xnkwU4ayC8c[hmTHfVxqL].CPJcExOzDQwh);
                        break;
                    }
                    t9XMvDhU0lkf++;
                }
            }
            hmTHfVxqL++;
        }
    }
}

int NGj6spwtC (struct   ojBkXViOHl *D9uXejocFW2, int f1cB2PCX, char HKZjUQiuTJC) {
    int k0BoyTG;
    int t9XMvDhU0lkf;
    int hmTHfVxqL;
    k0BoyTG = (724 - 724);
    {
        hmTHfVxqL = (187 - 187);
        for (; hmTHfVxqL < f1cB2PCX;) {
            {
                t9XMvDhU0lkf = 0;
                for (; (D9uXejocFW2 +hmTHfVxqL)->U3yZ8zJiqok[t9XMvDhU0lkf] != '\0';) {
                    if ((D9uXejocFW2 +hmTHfVxqL)->U3yZ8zJiqok[t9XMvDhU0lkf] == HKZjUQiuTJC) {
                        k0BoyTG++;
                        break;
                    }
                    t9XMvDhU0lkf++;
                }
            }
            hmTHfVxqL++;
        }
    }
    return k0BoyTG;
}

