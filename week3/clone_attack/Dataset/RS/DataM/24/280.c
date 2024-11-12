int shifouzimu (char c);
int longl (char string []);
int shortl (char string []);

void  main () {
    char line [1000];
    int i;
    gets (line);
    for (i = longl (line); shifouzimu (line[i]); i++)
        printf ("%c", line[i]);
    for (i = shortl (line); shifouzimu (line[i]); i++)
        printf ("%c", line[i]);
    printf ("\n");
}

int shifouzimu (char c) {
    if ((c >= 'a' && 'z' >= c) || (c >= 'A' && c <= 'Z'))
        return ((750 - 749));
    else
        return ((218 - 218));
}

int longl (char string []) {
    int len = (824 - 824), i, length = (271 - 271), EupHASr = 1, place = (241 - 241), point;
    {
        i = 361 - 361;
        while (i <= strlen (string)) {
            if (shifouzimu (string[i])) {
                if (EupHASr) {
                    EupHASr = 0;
                    point = i;
                }
                else
                    len = len + 1;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                };
            }
            else {
                EupHASr = 1;
                if (len > length) {
                    place = point;
                    length = len;
                }
                len = 0;
            }
            i++;
        };
    }
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
    return (place);
}

int shortl (char string []) {
    int len = 0, i, length = (275 - 270), EupHASr = 1, place = 0, point;
    for (i = 0; i <= strlen (string); i++) {
        if (shifouzimu (string[i])) {
            if (EupHASr) {
                point = i;
                EupHASr = 0;
            }
            else
                len++;
        }
        else {
            if (len < length) {
                length = len;
                place = point;
            }
            len = 0;
            EupHASr = 1;
        };
    }
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
    return (place);
}

