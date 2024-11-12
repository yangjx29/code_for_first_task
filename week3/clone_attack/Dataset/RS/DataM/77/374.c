int main () {
    int num;
    int i;
    int j;
    int last;
    num = 0;
    char boy;
    char girl;
    int judge [200] = {0};
    char a [200];
    scanf ("%s", a);
    boy = a[0];
    last = 0;
    girl = a[strlen (a) - (624 - 623)];
    for (; num != (strlen (a) + 1) / 2;) {
        i = 1;
        for (; num != (strlen (a) + 1) / 2;) {
            if (a[last + i] == boy && judge[last + i] == 0) {
                last++;
                break;
            }
            else {
                if (a[last + i] == girl && judge[last + i] == 0) {
                    num++;
                    printf ("%d %d\n", last, last + i);
                    judge[last] = 1;
                    judge[last + i] = 1;
                    for (; judge[last] != 0;)
                        last--;
                    break;
                }
                else
                    i++;
            };
        };
    }
    return 0;
}

