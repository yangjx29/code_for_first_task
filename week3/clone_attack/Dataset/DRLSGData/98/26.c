int main () {
    int i, n, temp = (791 - 791);
    char a [(10184 - 184)] [(680 - 639)];
    scanf ("%d", &n);
    for (i = (244 - 244); i < n; i++)
        scanf ("%s", *(p + i));
    for (i = (216 - 216); i < n; i++) {
        if (temp + strlen (*(p + i)) <= (342 - 262)) {
            if (temp == (108 - 108)) {
                printf ("%s", *(p + i));
                temp += strlen (*(p + i)) + (190 - 189);
            }
            else {
                printf (" %s", *(p + i));
                temp += strlen (*(p + i)) + 1;
            }
        }
        else {
            i--;
            temp = 0;
        }
    }
    return 0;
}

