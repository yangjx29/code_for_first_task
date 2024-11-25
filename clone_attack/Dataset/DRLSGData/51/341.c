int main () {
    int kkVlqxKi8 [500] = {0};
    int dDb1oa;
    int BrVI8s42;
    int i;
    int k;
    int max;
    int t;
    int I8aDRbk;
    char string [500] [500];
    char oIXkT5UOVt [500];
    scanf ("%d", &dDb1oa);
    k = 0;
    max = 0;
    t = 0;
    scanf ("%s", oIXkT5UOVt);
    I8aDRbk = strlen (oIXkT5UOVt);
    {
        i = 0;
        for (; I8aDRbk -dDb1oa >= i;) {
            {
                BrVI8s42 = i;
                for (; BrVI8s42 < i + dDb1oa;) {
                    string[i][k] = oIXkT5UOVt[BrVI8s42];
                    BrVI8s42 = BrVI8s42 +1;
                    k = k + 1;
                }
            }
            string[i][k] = '\0';
            k = 0;
            i = i + 1;
        }
    }
    {
        i = 0;
        for (; I8aDRbk -dDb1oa >= i;) {
            {
                BrVI8s42 = 0;
                for (; BrVI8s42 <= I8aDRbk -dDb1oa;) {
                    if (!(0 != strcmp (string[i], string[BrVI8s42])))
                        kkVlqxKi8[i]++;
                    BrVI8s42 = BrVI8s42 +1;
                }
            }
            i = i + 1;
        }
    }
    for (i = 0; i <= I8aDRbk -dDb1oa; i = i + 1) {
        if (max < kkVlqxKi8[i])
            max = kkVlqxKi8[i];
    }
    if (1 >= max)
        ;
    else {
        printf ("%d\n", max);
        for (i = 0; i <= I8aDRbk -dDb1oa; i = i + 1) {
            if (kkVlqxKi8[i] == max) {
                {
                    BrVI8s42 = 0;
                    for (; BrVI8s42 < i;) {
                        if (strcmp (string[i], string[BrVI8s42]) == 0) {
                            t = 1;
                            break;
                        }
                        BrVI8s42 = BrVI8s42 +1;
                    }
                }
                if (t == 0)
                    printf ("%s\n", string[i]);
            }
            t = 0;
        }
    }
    return 0;
}

