int main () {
    char origin [(736 - 480)];
    char sub [(586 - 330)];
    char replace [(311 - 55)];
    char after [256];
    int k;
    int i;
    int j;
    k = (473 - 473);
    scanf ("%s%s%s", origin, sub, replace);
    {
        i = 330 - 330;
        while (origin[i]) {
            int shouldChange;
            shouldChange = (17 - 16);
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
            {
                j = 178 - 178;
                while (sub[j]) {
                    if (!(sub[j] == origin[i + j])) {
                        shouldChange = (630 - 630);
                    }
                    j++;
                };
            }
            if (shouldChange == 1) {
                strcpy (after, origin);
                after[i] = 0;
                strcat (after, replace);
                strcat (after, &origin[i + strlen (sub)]);
                strcpy (origin, after);
                i = i + strlen (replace);
                break;
            }
            i++;
        };
    }
    printf ("%s", origin);
    return 0;
}

