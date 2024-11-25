int main (int argc, char *argv []) {
    int i, Q71WwOSZf = 0;
    char MoweSlHG [100], c [100] = {'\0'};
    char s [(366 - 266)], a [100], b [100];
    gets (s);
    gets (a);
    gets (b);
    puts (c);
    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] != ' ') {
            MoweSlHG[Q71WwOSZf] = s[i];
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
            Q71WwOSZf++;
        }
        else {
            MoweSlHG[Q71WwOSZf] = '\0';
            if (strcmp (MoweSlHG, a) == 0) {
                strcat (c, b);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                strcat (c, " ");
            }
            else {
                strcat (c, MoweSlHG);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                strcat (c, " ");
            }
            Q71WwOSZf = 0;
        };
    }
    MoweSlHG[Q71WwOSZf] = '\0';
    if (strcmp (MoweSlHG, a) == 0) {
        strcat (c, b);
    }
    else {
        strcat (c, MoweSlHG);
    }
    return 0;
}

