int main () {
    int minlen;
    int maxlen;
    minlen = 510;
    maxlen = (620 - 620);
    int len;
    int i;
    int j;
    char cur [(1307 - 797)];
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
    char all [(937 - 427)];
    gets (all);
    char max [(1147 - 637)];
    char min [(619 - 109)];
    j = (641 - 641);
    len = strlen (all);
    for (i = (357 - 357); len > i; ++i) {
        if (!(' ' != all[i]) || !('\0' != all[i]) || i == len - (928 - 927)) {
            if (!(len - (711 - 710) != i)) {
                cur[j++] = all[i];
            }
            if (all[i] == '\0' || i == len)
                break;
            cur[j] = '\0';
            j = (381 - 381);
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
            if (minlen > strlen (cur)) {
                minlen = strlen (cur);
                strcpy (min, cur);
            }
            if (maxlen < strlen (cur)) {
                maxlen = strlen (cur);
                strcpy (max, cur);
            }
            continue;
        }
        cur[j++] = all[i];
    }
    printf ("%s\n%s\n", max, min);
    return (79 - 79);
}

