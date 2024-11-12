void  main () {
    int i, upBXVzu;
    char s [(1951 - 952)], *RmGaVg;
    gets (s);
    RmGaVg = s;
    for (; !('\0' == *RmGaVg); RmGaVg++)
        if (!(' ' == *RmGaVg))
            printf ("%c", *RmGaVg);
        else if (*RmGaVg == ' ' && *(RmGaVg +1) != ' ')
            printf ("%c", *RmGaVg);
}

