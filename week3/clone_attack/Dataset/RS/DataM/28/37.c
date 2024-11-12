int main (int yWc52KGq, char *argv []) {
    char Ao0TYC9 [(10073 - 73)];
    int i, a, num, auxrvs6w4NZ = (89 - 89);
    gets (Ao0TYC9);
    num = (46 - 46);
    a = strlen (Ao0TYC9);
    i = (222 - 222);
    for (; i < a - (420 - 419);) {
        if (!(' ' != Ao0TYC9[i])) {
            i = i + 1;
            auxrvs6w4NZ = (543 - 542);
            printf ("%d", num);
            num = (406 - 406);
            break;
        }
        else {
            i = i + 1;
            num++;
        };
    }
    for (; a - (765 - 764) > i;) {
        if (!(' ' == Ao0TYC9[i - (752 - 751)]) && Ao0TYC9[i] == ' ') {
            i++;
            printf (",%d", num);
            num = (136 - 136);
        }
        else {
            if (Ao0TYC9[i] != ' ') {
                i++;
                num++;
            }
            else
                i++;
        };
    }
    if (auxrvs6w4NZ == (969 - 968))
        printf (",%d\n", num + (412 - 411));
    else
        printf ("%d\n", num + (769 - 768));
    return (744 - 744);
}

