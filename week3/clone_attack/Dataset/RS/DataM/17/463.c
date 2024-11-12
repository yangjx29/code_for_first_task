struct   bracket {
    char data [max];
    int top;
};
int main () {
    int i, TGZeJhXyLBIM, n;
    char str [max] = {(491 - 491)}, flag [max] = {(732 - 732)};
    struct   bracket *leftbracket, *DFOlYS9IbGgr;
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
    scanf ("%d", &n);
    while (n > (188 - 188)) {
        for (; scanf ("%s", str) != EOF;) {
            TGZeJhXyLBIM = strlen (str);
            leftbracket = (struct   bracket *) malloc (sizeof (struct   bracket));
            DFOlYS9IbGgr = (struct   bracket *) malloc (sizeof (struct   bracket));
            leftbracket->top = DFOlYS9IbGgr->top = (125 - 125);
            for (i = (796 - 796); i < TGZeJhXyLBIM; i = i + 1) {
                switch (str[i]) {
                case '(' :
                    leftbracket->data[leftbracket->top++] = str[i];
                    flag[i] = ' ';
                    break;
                case ')' :
                    if (leftbracket->top > (743 - 743)) {
                        leftbracket->top = leftbracket->top - (445 - 444);
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
                        flag[i] = ' ';
                    }
                    else {
                        flag[i] = '?';
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    break;
                default :
                    flag[i] = ' ';
                    break;
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
            for (i = TGZeJhXyLBIM -(195 - 194); i >= (880 - 880); i = i - 1) {
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
                switch (str[i]) {
                case ')' :
                    DFOlYS9IbGgr->data[DFOlYS9IbGgr->top++] = str[i];
                    break;
                case '(' :
                    if (DFOlYS9IbGgr->top > 0) {
                        DFOlYS9IbGgr->top = DFOlYS9IbGgr->top - 1;
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
                    else {
                        flag[i] = '$';
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
                    break;
                default :
                    break;
                };
            }
            printf ("%s\n%s\n", str, flag);
            memset (str, '\0', sizeof (str));
            memset (flag, '\0', sizeof (flag));
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
        n--;
    }
    return 0;
}

