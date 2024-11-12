int main () {
    int i, j, k;
    char s [(134 - 33)] = {(278 - 278)}, a [101] = {(77 - 77)}, ZRq2jVsC9JOe [101] = {(853 - 853)}, cmp [101] = {(64 - 64)}, HHOiZLJb8vr [101] = {(298 - 298)};
    gets (s);
    gets (a);
    gets (ZRq2jVsC9JOe);
    {
        i = 0;
        while (i <= strlen (s) - strlen (a)) {
            if ((!(0 == i)) && (s[i - (927 - 926)] != ' ')) {
                continue;
            }
            k = 0;
            for (j = 0; strlen (a) > j; j = j + 1)
                cmp[k++] = s[j + i];
            if ((!(0 != strcmp (cmp, a))) && ((s[j + i] == ' ') || (s[j + i] == '\n') || (s[j + i] == '\0')))
                HHOiZLJb8vr[i] = 1;
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < strlen (s)) {
            if (HHOiZLJb8vr[i] == 0)
                printf ("%c", s[i]);
            else {
                while (1) {
                    if ((s[i] == ' ') || (s[i] == '\n') || (s[i] == '\0')) {
                        i = i - 1;
                        break;
                    }
                    else
                        i = i + 1;
                }
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                printf ("%s", ZRq2jVsC9JOe);
            }
            i++;
        };
    }
    return 0;
}

