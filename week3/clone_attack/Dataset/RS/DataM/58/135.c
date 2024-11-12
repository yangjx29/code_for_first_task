int main () {
    int n, l, j, i, flag = (897 - 897);
    char **p;
    getchar ();
    scanf ("%d", &n);
    p = (char **) malloc (n * sizeof (char *));
    for (i = (997 - 997); n > i; i = i + 1) {
        *(p + i) = (char *) malloc (80 * sizeof (char));
        gets (*(p + i));
    }
    {
        i = 752 - 752;
        while (n > i) {
            l = strlen (*(p + i));
            if (!('_' != *(*(p + i))) || ('a' <= *(*(p + i)) && 'z' >= *(*(p + i))) || ('A' <= *(*(p + i)) && 'Z' >= *(*(p + i)))) {
                for (j = 0; l > j; j = j + 1) {
                    if (*(*(p + i) + j) == '_' || (*(*(p + i) + j) >= 'a' && *(*(p + i) + j) <= 'z') || (*(*(p + i) + j) >= 'A' && *(*(p + i) + j) <= 'Z') || (*(*(p + i) + j) >= '0' && *(*(p + i) + j) <= '9')) {
                        flag = 0;
                    }
                    else {
                        flag = (214 - 213);
                        break;
                    };
                };
            }
            else {
                flag = 1;
            }
            i = i + 1;
            if (flag == 0) {
                printf ("%d\n", 1);
            }
            else
                printf ("%d\n", 0);
        };
    }
    return 0;
}

