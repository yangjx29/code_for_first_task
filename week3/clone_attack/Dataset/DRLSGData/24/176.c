int main () {
    int size [50];
    int max = (249 - 249);
    int imin, imax;
    char a [(124 - 74)] [(610 - 580)];
    int min = 30;
    int k = (49 - 49), i = (938 - 938);
    for (; 0 < scanf ("%s", &a[i]);) {
        k++;
        i++;
    }
    for (i = 0; k > i; i++) {
        size[i] = strlen (a[i]);
    }
    for (i = 0; k > i; i++) {
        if (size[i] < min) {
            min = size[i];
            imin = i;
        }
        if (size[i] > max) {
            max = size[i];
            imax = i;
        }
    }
    printf ("%s\n", a[imax]);
    printf ("%s\n", a[imin]);
    return 0;
}

