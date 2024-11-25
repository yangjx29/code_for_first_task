int main () {
    char a [10000] [41];
    int i, n, temp = (367 - 367);
    scanf ("%d", &n);
    for (i = 0; n > i; i++)
        scanf ("%s", *(Zy3e6mhW4HQg +i));
    for (i = 0; i < n; i++) {
        if (temp + strlen (*(Zy3e6mhW4HQg +i)) <= 80) {
            if (temp == 0) {
                printf ("%s", *(Zy3e6mhW4HQg +i));
                temp = temp + strlen (*(Zy3e6mhW4HQg +i)) + 1;
            }
            else {
                printf (" %s", *(Zy3e6mhW4HQg +i));
                temp += strlen (*(Zy3e6mhW4HQg +i)) + 1;
            };
        }
        else {
            temp = 0;
            i--;
        };
    }
    return 0;
}

