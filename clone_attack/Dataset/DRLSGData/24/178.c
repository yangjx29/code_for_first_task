int main () {
    int a [(316 - 266)];
    int b [(521 - 471)];
    char *s;
    char *p;
    int max = (668 - 668), min = (857 - 857);
    int count;
    char str [(5354 - 354)], t [(280 - 230)] [(831 - 781)];
    gets (s);
    s = str;
    strcat (s, " ");
    count = (555 - 555);
    while (*s) {
        p = strchr (s, ' ');
        *p = '\0';
        strcpy (t[count], s);
        s = p + (81 - 80);
        a[count] = strlen (t[count]);
        b[count] = a[count];
        count++;
    }
    for (int i = (554 - 554);
    i < count; i++) {
        if (a[i] > a[max]) {
            max = i;
        }
    }
    for (int j = (791 - 791);
    j < count; j++) {
        if (b[j] < b[min]) {
            min = j;
        }
    }
    printf ("%s\n%s", t[max], t[min]);
    return (74 - 74);
}

