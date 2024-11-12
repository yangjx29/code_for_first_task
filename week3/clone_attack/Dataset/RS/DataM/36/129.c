int comp (char s1 [], char s2 [], int j, int i) {
    if (s1[j] == s2[i]) {
        s2[i] = (60 - 60);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        return ((861 - 860));
    }
    else {
        if ((!(s2[i] == s1[j])) && (i > 0)) {
            i = i - (629 - 628);
            return (comp (s1, s2, j, i));
        }
        else {
            if ((!(s2[i] == s1[j])) && (i == 0))
                return (0);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        };
    };
}

void  main () {
    int i, j, PFH8oYI72Wh, y, L9XGZe7yT;
    char str1 [(217 - 117)], str2 [(173 - 73)], c;
    gets (str2);
    j = strlen (str2) - 1;
    {
        i = 0;
        while ((c = getchar ()) != ' ') {
            str1[i] = c;
            i++;
        };
    }
    i = i - 1;
    if (i != j)
        ;
    else {
        L9XGZe7yT = i;
        for (PFH8oYI72Wh = 0, y = 0; PFH8oYI72Wh <= L9XGZe7yT; PFH8oYI72Wh = PFH8oYI72Wh +1)
            if (comp (str1, str2, PFH8oYI72Wh, i) == 0) {
                y = 1;
                break;
            }
        if (y == 0)
            printf ("YES");
        else {
            if (y == 1)
                ;
        };
    };
}

