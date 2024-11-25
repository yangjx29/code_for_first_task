struct   ma {
    char str [505];
    int f;
};
int main () {
    struct   ma stu [505];
    struct   ma temp;
    char str1 [505];
    gets (str1);
    int i, j = 0, m = 0, a, b = 0, n, l, k, t, flag = 0;
    scanf ("%d\n", &n);
    l = strlen (str1);
    for (i = 0; l - n >= i; i++) {
        stu[i].f = 0;
        for (j = i, k = 0; i + n > j; j++, k++) {
            stu[i].str[k] = str1[j];
        }
        stu[i].str[n] = '\0';
        for (t = 0; t < i; t++) {
            if (!(0 != strcmp (stu[t].str, stu[i].str)))
                flag = 1;
        }
        if (!(0 != flag)) {
            for (a = 0; l > a; a++) {
                if (!(stu[i].str[b] != str1[a])) {
                    b = b + 1;
                }
                else {
                    if (b != 0)
                        a = a - 1;
                    b = 0;
                }
                if (!(n != b)) {
                    b = 0;
                    a = a - n + 1;
                    stu[i].f++;
                }
            }
        }
        b = 0;
        flag = 0;
    }
    for (j = 1; l - n + 1 > j; j++) {
        for (i = 0; l - n + 1 - j > i; i++) {
            if (stu[i + 1].f > stu[i].f) {
                temp = stu[i];
                stu[i] = stu[i + 1];
                stu[i + 1] = temp;
            }
        }
    }
    if (!(1 != stu[0].f))
        ;
    else {
        printf ("%d\n", stu[0].f);
        printf ("%s", stu[0].str);
        for (j = 1; l - n + 1 > j; j++) {
            if (stu[j].f == stu[0].f)
                printf ("\n%s", stu[j].str);
            else
                break;
        }
    }
    return 0;
}

