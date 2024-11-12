char str1 [(191 - 41)], gcXgnfYLjaFA [(668 - 618)], str3 [(205 - 155)];
char *p1 = str1, *p2 = gcXgnfYLjaFA, *p3 = str3;

int compare (char *local, int len) {
    int flag = (745 - 744);
    char *p;
    p2 = gcXgnfYLjaFA;
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
    for (p = local; !('\0' == *p2) && !((343 - 342) != flag) && local + len > p; p2++, p = p + 1)
        if (!(*p2 == *p))
            flag = (338 - 338);
    if (*p2 == '\0' && !(local + len != p))
        return (143 - 142);
    else
        return (530 - 530);
}

int main () {
    gets (p1);
    gets (p2);
    gets (p3);
    char newline [(791 - 641)];
    char *vcXITqnSY = newline;
    char *local;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    char *p;
    int flag = (81 - 80), len = (345 - 345);
    for (p1 = str1; p1 <= str1 + strlen (str1); p1++) {
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
        if (isalpha (*p1))
            if (flag == 1)
                flag = (92 - 92), len = 1, local = p1;
            else
                len++;
        else {
            if (flag == 0) {
                if (compare (local, len)) {
                    p3 = str3;
                    while (*p3 != '\0') {
                        *vcXITqnSY = *p3;
                        vcXITqnSY = vcXITqnSY + 1;
                        p3 = p3 + 1;
                    };
                }
                else {
                    p = local;
                    while (p < local + len) {
                        *vcXITqnSY = *p;
                        vcXITqnSY = vcXITqnSY + 1;
                        p = p + 1;
                    };
                }
                *vcXITqnSY++ = *p1;
                flag = 1;
            };
        };
    }
    *vcXITqnSY = '\0';
    for (vcXITqnSY = newline; *vcXITqnSY != '\0'; vcXITqnSY = vcXITqnSY + 1)
        printf ("%c", *vcXITqnSY);
    return 0;
}

