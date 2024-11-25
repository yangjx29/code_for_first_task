int main () {
    char s [550], ztdaGl4Hr [6];
    int i, LfgMpGvo29, bdQZpU0O6, MHeW7oZv3d, OUQXcRZ, a [550] = {0};
    gets (s);
    for (i = 0; s[i] != '\0'; i++) {
        for (LfgMpGvo29 = i + 1; s[LfgMpGvo29] != '\0'; LfgMpGvo29++) {
            MHeW7oZv3d = 0;
            {
                bdQZpU0O6 = 0;
                for (; bdQZpU0O6 <= OUQXcRZ -1;) {
                    if (s[i + bdQZpU0O6] != s[LfgMpGvo29 +bdQZpU0O6])
                        MHeW7oZv3d = 1;
                    bdQZpU0O6++;
                }
            }
            if (MHeW7oZv3d == 0)
                a[i]++;
        }
    }
    for (i = 0; s[i] != '\0'; i++) {
        MHeW7oZv3d = 0;
        for (LfgMpGvo29 = 0; s[LfgMpGvo29] != '\0'; LfgMpGvo29++) {
            if (a[LfgMpGvo29] > a[i])
                MHeW7oZv3d = 1;
        }
        if (MHeW7oZv3d == 0)
            break;
    }
    scanf ("%d", &OUQXcRZ);
    getchar ();
    if (!(0 != a[i])) {
        return 0;
    }
    printf ("%d\n", a[i] + 1);
    bdQZpU0O6 = a[i];
    {
        i = 0;
        for (; s[i] != '\0';) {
            if (!(bdQZpU0O6 != a[i])) {
                for (LfgMpGvo29 = 0; OUQXcRZ -1 >= LfgMpGvo29; LfgMpGvo29++) {
                    ztdaGl4Hr[LfgMpGvo29] = s[i + LfgMpGvo29];
                }
                ztdaGl4Hr[LfgMpGvo29] = '\0';
                printf ("%s\n", ztdaGl4Hr);
            }
            i++;
        }
    }
    return 0;
}

