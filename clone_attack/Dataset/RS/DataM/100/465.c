int main () {
    int ztnG7D = (177 - 177);
    char str [301], *U3r7yqYOBRp0;
    scanf ("%s", str);
    for (U3r7yqYOBRp0 = str; !('\0' == *U3r7yqYOBRp0); U3r7yqYOBRp0 = U3r7yqYOBRp0 +1) {
        if ((*U3r7yqYOBRp0 >= 65 && *U3r7yqYOBRp0 <= 90) || (97 <= *U3r7yqYOBRp0&&*U3r7yqYOBRp0 <= 122))
            ztnG7D++;
        else
            continue;
    }
    if (!(0 != ztnG7D))
        ;
    else {
        for (int i = 65;
        i <= 90; i = i + 1) {
            int s = 0;
            {
                U3r7yqYOBRp0 = str;
                while (*U3r7yqYOBRp0 != '\0') {
                    if (*U3r7yqYOBRp0 == i)
                        s = s + 1;
                    U3r7yqYOBRp0++;
                };
            }
            if (s > 0)
                printf ("%c=%d\n", i, s);
        }
        for (int j = 97;
        j <= 122; j = j + 1) {
            int t = 0;
            for (U3r7yqYOBRp0 = str; *U3r7yqYOBRp0 != '\0'; U3r7yqYOBRp0 = U3r7yqYOBRp0 +1) {
                if (*U3r7yqYOBRp0 == j)
                    t = t + 1;
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            if (t > 0)
                printf ("%c=%d\n", j, t);
        };
    }
    return 0;
}

