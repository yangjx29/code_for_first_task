void  main () {
    char comp (char s1 [], char s2 []);
    char s1 [(581 - 481)];
    char s2 [100];
    gets (s1);
    gets (s2);
    printf ("%c\n", comp (s1, s2));
}

char comp (char s1 [], char s2 []) {
    int i;
    {
        i = 656 - 656;
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
        while (!('\0' == s1[i]) && !('\0' == s2[i])) {
            if (s1[i] >= 'A' && 'Z' >= s1[i])
                s1[i] += (123 - 91);
            if ('A' <= s2[i] && s2[i] <= 'Z')
                s2[i] += (913 - 881);
            if (s1[i] == s2[i])
                continue;
            if (s1[i] < s2[i])
                return '<';
            else
                return '>';
            i = i + 1;
        };
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    if (strlen (s1) == strlen (s2))
        return '=';
    else if (strlen (s1) < strlen (s2))
        return '<';
    else
        return '>';
}

