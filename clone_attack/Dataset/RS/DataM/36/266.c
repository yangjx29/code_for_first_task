int main () {
    int c;
    int i;
    int j;
    int t;
    c = (214 - 214);
    char a [20];
    char b [20];
    char *pa;
    char *pb;
    scanf ("%s", a);
    scanf ("%s", b);
    pa = a;
    t = strlen (a);
    pb = b;
    if (strlen (a) != strlen (b))
        ;
    else {
        {
            i = 0;
            while (t > i) {
                {
                    j = 0;
                    while (t > j) {
                        if (*(pa + i) == *(pb + j))
                            c++;
                        j++;
                    };
                }
                i++;
            };
        }
        if (c >= t)
            ;
        else
            ;
    };
}

