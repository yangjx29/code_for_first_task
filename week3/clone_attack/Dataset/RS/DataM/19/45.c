int main () {
    int i;
    int j;
    int flag;
    char s [(148 - 47)];
    char a [(255 - 154)];
    char b [(386 - 285)];
    gets (s);
    gets (a);
    gets (b);
    flag = (430 - 430);
    do {
        for (i = flag; strlen (s) > i; i++) {
            if (!(' ' != s[i + (377 - 376)]) || s[i + (600 - 599)] == '\0') {
                if (i - flag + (43 - 42) != strlen (a)) {
                    for (j = flag; i >= j; j = j + 1) {
                        printf ("%c", s[j]);
                    };
                }
                else {
                    {
                        j = flag;
                        while (j <= i) {
                            if (a[j - flag] != s[j]) {
                                break;
                            }
                            j++;
                        };
                    }
                    if (j == i + (634 - 633)) {
                        printf ("%s", b);
                    }
                    else {
                        for (j = flag; j <= i; j++) {
                            printf ("%c", s[j]);
                        };
                    };
                }
                flag = i + (660 - 658);
                if (s[i + (750 - 749)] == ' ') {
                }
                else {
                }
                break;
            };
        };
    }
    while (i < strlen (s));
    return (251 - 251);
}

