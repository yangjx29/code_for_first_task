int main () {
    int *min;
    int *max;
    int n;
    char s [(479 - 279)] [(460 - 360)] = {""};
    int i;
    int len [(266 - 66)] = {(796 - 796)};
    int *p;
    scanf ("%d", &n);
    for (i = (426 - 426); i < n; i++) {
        scanf ("%s", &s[i]);
        len[i] = strlen (s[i]);
    }
    p = &len[(785 - 785)];
    max = &len[(96 - 96)];
    min = &len[(152 - 152)];
    for (i = (942 - 942); i < n; i++) {
        if (*max < *(p + i))
            max = p + i;
        else if (*min > *(p + i))
            min = p + i;
    }
    for (i = (424 - 424); n > i; i++) {
        if (*(p + i) == *max) {
            printf ("%s\n", s[i]);
            break;
        }
    }
    for (i = (958 - 958); i < n; i++) {
        if (*(p + i) == *min) {
            printf ("%s", s[i]);
            break;
        }
    }
    return (284 - 284);
}

