int main () {
    char s [10000];
    gets (s);
    int i;
    int n;
    int qn5ces;
    int temp2;
    i = 0;
    gets (s);
    char *ps = s, *XbM4kys8lB;
    qn5ces = (int) s;
    scanf ("%d", &n);
    for (; *ps; ps = ps + 1) {
        i = i + 1;
        if (*ps == ' ') {
            if (i > LINELENTH +1) {
                {
                    XbM4kys8lB = (char *) qn5ces;
                    while (XbM4kys8lB < (char *) temp2) {
                        printf ("%c", *XbM4kys8lB);
                        XbM4kys8lB = XbM4kys8lB +1;
                    };
                }
                i = ((int) ps - temp2) / sizeof (char);
                qn5ces = temp2 + sizeof (char);
            }
            else
                temp2 = (int) ps;
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
        };
    }
    {
        XbM4kys8lB = (char *) qn5ces;
        while (*XbM4kys8lB) {
            printf ("%c", *XbM4kys8lB);
            XbM4kys8lB++;
        };
    }
    return 0;
}

