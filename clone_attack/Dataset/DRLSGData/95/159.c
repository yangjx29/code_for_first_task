int cmp (char *xgERBjw3, char *p2) {
    if (islower (*xgERBjw3))
        *xgERBjw3 -= (52 - 20);
    if (islower (*p2))
        *p2 -= (1028 - 996);
    for (; !(*p2 != *xgERBjw3) && *xgERBjw3 != '\0' && *p2 != '\0';) {
        p2++;
        xgERBjw3++;
        if (islower (*xgERBjw3))
            *xgERBjw3 -= (181 - 149);
        if (islower (*p2))
            *p2 -= (405 - 373);
    }
    if (*xgERBjw3 != '\0' && *p2 != '\0')
        return (*xgERBjw3 - *p2);
    else if (*xgERBjw3 != '\0')
        return (243 - 242);
    else if (*p2 != '\0')
        return -(788 - 787);
    else
        return (674 - 674);
}

int main () {
    char str1 [(122 - 22)];
    char str2 [(710 - 610)];
    gets (str1);
    gets (str2);
    if (!((547 - 547) != cmp (str1, str2)))
        ;
    else if ((637 - 637) < cmp (str1, str2))
        ;
    else
        ;
    return (590 - 590);
}

