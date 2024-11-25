int main () {
    int space;
    space = -1;
    int n;
    int mm [(502 - 499)] = {3, 5, 7};
    int flag [3] = {0};
    int i;
    scanf ("%d", &n);
    {
        i = 0;
        while (i < 3) {
            if (!(0 != n % mm[i]))
                flag[i] = 1;
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < 3) {
            if (flag[i] == 1) {
                space = space + 1;
                if (space == 0)
                    printf ("%d", mm[i]);
                else
                    printf (" %d", mm[i]);
            }
            i++;
        };
    }
    if (space == -1)
        ;
}

