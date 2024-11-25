void  main () {
    int i, k;
    char s [100];
    gets (s);
    {
        k = 1;
        i = 1;
        while (s[i] != '\0') {
            if (s[i] == ' ' && s[i - 1] == ' ') {
                k--;
            }
            else
                s[k] = s[i];
            k++;
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
            i++;
        };
    }
    s[k] = '\0';
    printf ("%s\n", s);
}

