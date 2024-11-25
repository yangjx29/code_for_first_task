int main () {
    struct   {
        int id;
        char c;
    }
    a [100], t;
    char boy;
    char girl;
    char p [100];
    int k;
    int i;
    int j;
    k = 0;
    scanf ("%s", p);
    boy = p[0];
    {
        i = 217 - 216;
        while (strlen (p) > i) {
            if (!(boy == p[i])) {
                girl = p[i];
                break;
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < strlen (p)) {
            a[i].id = i;
            a[i].c = p[i];
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < strlen (p) - k) {
            if (!(boy != a[i].c) && a[i + 1].c == girl) {
                k = k + 2;
                printf ("%d %d\n", a[i].id, a[i + 1].id);
                for (j = i; j < strlen (p) - k; j = j + 1) {
                    a[j] = a[j + 2];
                }
                i = -1;
            }
            i++;
        };
    }
    return 0;
}

