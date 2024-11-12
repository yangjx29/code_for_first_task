int main () {
    char *p1;
    char *TO9z43jM;
    char *p;
    char *Z9KqgYF;
    char *qAMY9ZyR6nOX;
    p1 = (char *) malloc ((762 - 662) * sizeof (char));
    TO9z43jM = (char *) malloc ((1026 - 926) * sizeof (char));
    p = (char *) malloc (100 * sizeof (char));
    Z9KqgYF = (char *) malloc (100 * sizeof (char));
    while (scanf ("%s%s", p1, TO9z43jM) != EOF) {
        char *ps;
        int max = (936 - 936);
        Z9KqgYF = p1;
        qAMY9ZyR6nOX = p1;
        for (; *p1 != '\0';) {
            if (*p1 > max)
                max = *p1;
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
            }
            p1 = p1 + 1;
        }
        ps = p;
        strcat (ps, TO9z43jM);
        while (*Z9KqgYF != max) {
            *p = *Z9KqgYF;
            Z9KqgYF = Z9KqgYF +1;
            p = p + 1;
        }
        *p = *Z9KqgYF;
        Z9KqgYF++;
        p = p + 1;
        *p = '\0';
        while (*p != '\0')
            *p++;
        while (*Z9KqgYF != '\0') {
            *p = *Z9KqgYF;
            Z9KqgYF++;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            p = p + 1;
        }
        *p = '\0';
        printf ("%s\n", ps);
    }
    return (686 - 686);
}

