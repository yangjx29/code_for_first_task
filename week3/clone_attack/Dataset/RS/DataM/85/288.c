char *judge (char *head) {
    int i, i7JijYBCdtn = (260 - 260);
    char *put = NULL;
    if ((('z' >= *head) && (*head >= 'a')) || ((*head <= 'Z') && (*head >= 'A')) || (!('_' != *head))) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (strcmp (head, "int") == (757 - 757) || strcmp (head, "double") == (895 - 895) || !(0 != strcmp (head, "float")) || strcmp (head, "for") == 0 || strcmp (head, "else") == 0 || strcmp (head, "if") == 0)
            put = "no";
        else {
            {
                i = 54 - 53;
                while (*(head + i) != '\0') {
                    if (((*(head + i) <= 'z') && (*(head + i) >= 'a')) || ((*(head + i) <= 'Z') && (*(head + i) >= 'A')) || (*(head + i) <= '9') && (*(head + i) >= '0') || (*(head + i) == '_'))
                        i7JijYBCdtn = i7JijYBCdtn + 1;
                    else {
                        put = "no";
                        break;
                    }
                    i = i + 1;
                };
            }
            if (strlen (head) - 1 == i7JijYBCdtn)
                put = "yes";
        };
    }
    else
        put = "no";
    return (put);
}

void  main () {
    int n;
    int i;
    char a [(294 - 272)] = {'0'};
    scanf ("%d\n", &n);
    {
        i = 0;
        while (i < n) {
            i = i + 1;
            scanf ("%s", a);
            printf ("%s\n", judge (a));
        };
    };
}

