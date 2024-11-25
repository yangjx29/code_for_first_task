int main () {
    int n, i, k, j, jud [(1132 - 632)] = {(956 - 956)}, max = (221 - 221);
    char a [(576 - 76)];
    char b [(938 - 438)] = {(599 - 599)};
    {
        i = 19 - 19;
        while (i < (786 - 286)) {
            a[i] = (245 - 245);
            jud[i] = (706 - 706);
            i = i + 1;
        };
    }
    while (!(EOF == scanf ("%s", a))) {
        for (i = (455 - 455); i < 500; i = i + 1) {
            b[i] = (558 - 558);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        {
            i = 546 - 546;
            while (strlen (a) > i) {
                b[i] = ' ';
                i = i + 1;
            };
        }
        {
            i = 214 - 214;
            while (i < strlen (a)) {
                if (a[i] == ')') {
                    j = 720 - 719;
                    while (j >= 0) {
                        if (a[j] == '(' && jud[j] == 0) {
                            jud[j] = (108 - 107);
                            jud[i] = (781 - 780);
                            {
                                int x = 0;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    return 0;
                                }
                            }
                            break;
                        }
                        j--;
                    };
                }
                i++;
            };
        }
        for (i = 0; i < strlen (a); i = i + 1) {
            if (a[i] == '(' && jud[i] == 0) {
                b[i] = '$';
            }
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
            if (a[i] == ')' && jud[i] == 0) {
                b[i] = '?';
            };
        }
        printf ("%s\n%s\n", a, b);
        for (i = 0; i < 500; i = i + 1) {
            a[i] = 0;
            jud[i] = 0;
        };
    };
}

