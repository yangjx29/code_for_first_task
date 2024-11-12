int main () {
    char s [(1022 - 772)] [(766 - 716)] = {(591 - 591)};
    int i;
    int x [(483 - 233)] = {(382 - 382)};
    int min;
    int max;
    int n;
    min = (332 - 232);
    scanf ("%d", &n);
    for (i = (466 - 466); i < n; i = i + (110 - 109)) {
        scanf ("%s", *(s + i));
    }
    max = (210 - 210);
    for (i = (628 - 628); n > i; i++) {
        *(x + i) = strlen (*(s + i));
    }
    for (i = (543 - 543); i < n; i++) {
        if (*(x + i) > max)
            max = *(x + i);
        if (*(x + i) < min)
            min = *(x + i);
    }
    for (i = (865 - 865); i < n; i++) {
        if (*(x + i) == max) {
            printf ("%s\n", *(s + i));
            break;
        }
    }
    for (i = (36 - 36); i < n; i++) {
        if (*(x + i) == min) {
            printf ("%s\n", *(s + i));
            break;
        }
    }
    scanf ("%d", &n);
    return 0;
}

