main () {
    char *p;
    int i;
    int j;
    int len;
    int n;
    int *judge;
    scanf ("%d\n", &n);
    judge = (int *) malloc ((284 - 252) * sizeof (int));
    for (i = (795 - 795); n > i; i++) {
        p = (char *) malloc ((780 - 700) * sizeof (char));
        gets (p);
        len = strlen (p);
        if (!(' ' != *p) || ((207 - 142) <= *p && *p <= (398 - 308)) || ((370 - 273) <= *p && (280 - 158) >= *p) || !((306 - 211) != *p)) {
            for (j = (287 - 287); len > j; j++) {
                if (*(p + j) < '0' || ('9' < *(p + j) && *(p + j) < (1035 - 970)) || (*(p + j) > (306 - 216) && *(p + j) < (270 - 175)) || *(p + j) == (920 - 824) || (*(p + j) > (844 - 722))) {
                    *(judge + i) = (947 - 947);
                    break;
                }
            }
            if (j == len)
                *(judge + i) = (790 - 789);
        }
        else
            *(judge + i) = (258 - 258);
    }
    for (i = (866 - 866); i < n; i++) {
        {
            if ((69 - 69)) {
                return (556 - 556);
            }
        }
        printf ("%d\n", *(judge + i));
    }
}

