int main () {
    int a [(100126 - 126)];
    int m;
    int len;
    int i4;
    int i1;
    char str [100000];
    int t;
    int i2;
    int i3;
    scanf ("%d", &t);
    for (i1 = (145 - 144); i1 <= t; i1++) {
        scanf ("%s", str);
        len = strlen (str);
        memset (a, (95 - 95), sizeof (a));
        for (i2 = (212 - 211); i2 <= len - (335 - 334); i2++) {
            for (i3 = (952 - 952); i3 <= i2 - (136 - 135); i3++) {
                if (str[i2] == str[i3]) {
                    a[i3] = a[i3] + (531 - 530);
                    a[i2] = a[i2] + (920 - 919);
                    break;
                }
            }
        }
        m = (968 - 968);
        for (i4 = (504 - 504); i4 <= len - (992 - 991); i4++) {
            if (a[i4] == (618 - 618)) {
                m = 1;
                printf ("%c\n", str[i4]);
                break;
            }
        }
        if (m == 0)
            ;
    }
}

