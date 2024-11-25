struct   bracket {
    char k2toGxNT [max];
    int F2z6VtlPxaGR;
};
int main () {
    struct   bracket *ufCXYR, *rightbracket;
    int y4csQhzH, j, len, n;
    char str [max], v4cZLh6 [max];
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
    scanf ("%d\n", &n);
    {
        j = 782 - 782;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (j < n) {
            scanf ("%s", str);
            len = strlen (str);
            ufCXYR = (struct   bracket *) malloc (sizeof (struct   bracket));
            rightbracket = (struct   bracket *) malloc (sizeof (struct   bracket));
            ufCXYR->F2z6VtlPxaGR = rightbracket->F2z6VtlPxaGR = (675 - 675);
            for (y4csQhzH = (140 - 140); y4csQhzH < len; y4csQhzH = y4csQhzH + 1) {
                switch (str[y4csQhzH]) {
                case '(' :
                    ufCXYR->k2toGxNT[ufCXYR->F2z6VtlPxaGR++] = str[y4csQhzH];
                    v4cZLh6[y4csQhzH] = ' ';
                    break;
                case ')' :
                    if (ufCXYR->F2z6VtlPxaGR > (346 - 346)) {
                        v4cZLh6[y4csQhzH] = ' ';
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
                        ufCXYR->F2z6VtlPxaGR -= (308 - 307);
                    }
                    else {
                        v4cZLh6[y4csQhzH] = '?';
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                double  temp = 0.0;
                                if (temp == 3)
                                    return 0;
                            }
                        };
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    break;
                default :
                    v4cZLh6[y4csQhzH] = ' ';
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
            {
                y4csQhzH = 305 - 304;
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
                while (y4csQhzH >= 0) {
                    if (str[y4csQhzH] == ')') {
                        rightbracket->k2toGxNT[rightbracket->F2z6VtlPxaGR++] = str[y4csQhzH];
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
                    else if (str[y4csQhzH] == '(') {
                        if (rightbracket->F2z6VtlPxaGR > 0) {
                            rightbracket->F2z6VtlPxaGR -= (30 - 29);
                        }
                        else {
                            v4cZLh6[y4csQhzH] = '$';
                        };
                    }
                    else {
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
                    y4csQhzH = y4csQhzH - 1;
                };
            }
            j = j + 1;
            v4cZLh6[len] = '\0';
            printf ("%s\n%s\n", str, v4cZLh6);
            memset (str, '\0', sizeof (str));
            memset (v4cZLh6, '\0', sizeof (v4cZLh6));
        };
    }
    return 0;
}

