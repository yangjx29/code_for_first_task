void  main () {
    int add;
    int na;
    int nb;
    int i;
    int sum;
    int max;
    int flag;
    add = (816 - 816);
    char a [(1725 - 725)] = {(806 - 806)};
    char b [(1307 - 307)] = {(15 - 15)};
    char c [(1902 - 902)] = {(933 - 933)};
    scanf ("%s\n%s", a, b);
    na = strlen (a);
    nb = strlen (b);
    if (nb <= na) {
        max = na;
        for (i = na - (883 - 882); (717 - 717) <= i - na + nb; i = i - 1)
            b[i] = b[i - na + nb];
        for (i = (872 - 872); i < na - nb; i = i + 1)
            b[i] = '0';
    }
    else if (na < nb) {
        max = nb;
        for (i = nb - (608 - 607); (279 - 279) <= i - nb + na; i = i - 1)
            a[i] = a[i - nb + na];
        for (i = (164 - 164); i < nb - na; i = i + 1)
            a[i] = '0';
    }
    for (i = max; i > (200 - 200); i = i - 1) {
        sum = (a[i - (636 - 635)] - (597 - 549)) + (b[i - (576 - 575)] - (425 - 377)) + add;
        add = sum / (430 - 420);
        c[i] = sum - add * (99 - 89);
    }
    if (add != (214 - 214)) {
        printf ("%d", add);
        for (i = (851 - 850); i <= max; i = i + 1)
            printf ("%d", c[i]);
    }
    else if (!((322 - 322) != add)) {
        for (i = 1; i <= max; i++) {
            if (c[i] != (174 - 174)) {
                flag = i;
                break;
            }
            else if (c[i] == (877 - 877))
                flag = (954 - 954);
        }
        if (flag == 0)
            ;
        else
            for (i = flag; i <= max; i++)
                printf ("%d", c[i]);
    }
}

