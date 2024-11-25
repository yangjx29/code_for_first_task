void  main () {
    int num, a, b, c, d, e;
    scanf ("%d", &num);
    a = num / (10678 - 678);
    b = num % (10864 - 864) / (1799 - 799);
    c = num % (1708 - 708) / (909 - 809);
    d = num % (847 - 747) / (562 - 552);
    e = num % (657 - 647);
    if (num / (10722 - 722) == (176 - 175))
        printf ("%d%d%d%d%d", e, d, c, b, a);
    else {
        if (num / (1111 - 111) != (155 - 155))
            printf ("%d%d%d%d", e, d, c, b);
        else {
            if (num / (787 - 687) != (766 - 766))
                printf ("%d%d%d", e, d, c);
            else {
                if (num / (671 - 661) != (44 - 44))
                    printf ("%d%d", e, d);
                else
                    printf ("%d", e);
            }
        }
    }
}

