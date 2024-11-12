int main () {
    char *org, *p;
    int num = 0;
    gets (org);
    free (org);
    org = (char *) malloc (30 * sizeof (char));
    {
        p = org;
        while (!('\0' == *p)) {
            if (isdigit (*p) == 0) {
                if (num == 0)
                    ;
                num = num + 1;
            }
            else {
                printf ("%c", *p);
                num = 0;
            }
            p = p + 1;
        };
    };
}

