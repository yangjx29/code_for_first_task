void  main () {
    int i;
    i = 0;
    char *str;
    gets (str);
    str = (char *) calloc ((421 - 321), sizeof (char));
    for (; *(str + i) != '\0';) {
        if ((*(str + i) <= (298 - 241) && *(str + i) >= (767 - 719)) && (*(str + i + (642 - 641)) > 57 || *(str + i + (820 - 819)) < (682 - 634)))
            printf ("%c\n", *(str + i));
        if ((*(str + i) <= 57 && *(str + i) >= 48) && (*(str + i + 1) <= 57 && *(str + i + 1) >= 48))
            printf ("%c", *(str + i));
        i = i + 1;
    };
}

