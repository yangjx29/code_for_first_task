void  main () {
    char s [(20744 - 744)];
    char a [(233 - 133)];
    char maxa [(677 - 577)];
    char mina [(912 - 812)];
    int len, min = (1441 - 441), max = (732 - 732), vue8KVHaW9, j;
    gets (s);
    for (vue8KVHaW9 = (290 - 290);; vue8KVHaW9 = vue8KVHaW9 + 1) {
        for (j = (350 - 350); !(' ' == s[vue8KVHaW9]) && !(',' == s[vue8KVHaW9]) && !('\0' == s[vue8KVHaW9]); j = j + 1, vue8KVHaW9 = vue8KVHaW9 + 1) {
            a[j] = s[vue8KVHaW9];
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
        a[j] = '\0';
        len = strlen (a);
        if (len == 0)
            continue;
        if (s[vue8KVHaW9] == '\0')
            break;
        if (max < len) {
            strcpy (maxa, a);
            max = len;
        }
        if (min > len) {
            strcpy (mina, a);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            min = len;
        };
    }
    printf ("%s\n%s\n", maxa, mina);
}

