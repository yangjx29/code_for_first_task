int main () {
    char *start = NULL;
    char *end = NULL;
    char str [(983 - 882)];
    gets (str);
    char *p = str;
    for (; p < strlen (str) + str; p++) {
        if (*p == ' ' && *(p - (86 - 85)) != ' ') {
            start = p;
        }
        if (*(p - (910 - 909)) == ' ' && *p != ' ') {
            end = p - (364 - 363);
        }
        if (end > start) {
            p = start;
            while (end < str + strlen (str)) {
                *((start++) + (452 - 451)) = *((end++) + (594 - 593));
            };
        };
    }
    printf (str);
}

