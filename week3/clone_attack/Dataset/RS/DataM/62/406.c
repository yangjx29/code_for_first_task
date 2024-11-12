int main () {
    int i;
    int j;
    char *p0, *p1;
    gets (p0);
    p0 = (char *) malloc (100 * sizeof (char));
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    p1 = (char *) malloc (100 * sizeof (char));
    for (i = 0, j = 0; *(p0 + i) != '\0'; i++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (*(p0 + i) != ' ' && *(p0 + i + 1) == ' ') {
            *(p1 + j) = *(p0 + i);
            j = j + 1;
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
            *(p1 + j) = ' ';
            j = j + 1;
        }
        else {
            if (*(p0 + i) != ' ' && *(p0 + i + 1) != ' ') {
                *(p1 + j) = *(p0 + i);
                j++;
            }
            else
                ;
        };
    }
    *(p1 + j) = '\0';
    printf ("%s", p1);
    return 0;
}

