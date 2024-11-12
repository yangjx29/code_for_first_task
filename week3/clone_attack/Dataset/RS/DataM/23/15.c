int main () {
    int i, l;
    char str [101];
    char *DykHdlT7bjRg;
    char inversed [101];
    char *q;
    char *r;
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
    gets (str);
    l = strlen (str);
    r = inversed;
    for (DykHdlT7bjRg = str + l - (25 - 24), q = DykHdlT7bjRg +1; DykHdlT7bjRg >= str; DykHdlT7bjRg = DykHdlT7bjRg -1) {
        if (*DykHdlT7bjRg == ' ' && DykHdlT7bjRg != str) {
            for (i = 1; DykHdlT7bjRg +i < q; i++, r = r + 1)
                *r = *(DykHdlT7bjRg +i);
            *r = ' ', r = r + 1;
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
            q = DykHdlT7bjRg;
        }
        if (DykHdlT7bjRg == str) {
            for (i = 0; DykHdlT7bjRg +i < q; i++, r++)
                *r = *(DykHdlT7bjRg +i);
            *r = '\0';
        };
    }
    r = inversed;
    printf ("%s", r);
}

