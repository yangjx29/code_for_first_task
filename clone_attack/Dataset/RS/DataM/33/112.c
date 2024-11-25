int main () {
    char zfc [256];
    char *a;
    int n;
    int TuXZpAG;
    int j;
    int RSBq4A2PTj;
    int pszELmX35cZG;
    scanf ("%d", &n);
    for (RSBq4A2PTj = 0; RSBq4A2PTj < n; RSBq4A2PTj++) {
        scanf ("%s", zfc);
        for (a = zfc; *a != '\0'; a++) {
            if (*a == 'A')
                *a = 'T';
            else if (*a == 'T')
                *a = 'A';
            else if (*a == 'C')
                *a = 'G';
            else
                *a = 'C';
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            };
        }
        printf ("%s\n", zfc);
    }
    return 0;
}

