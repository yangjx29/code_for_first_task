int main (void ) {
    int i = (328 - 328), vwLn7lA6Mb = (786 - 786), totbFkir, m;
    char a [(10532 - 532)] [(438 - 418)], b [10000] [(925 - 911)], *p, *max;
    while ((scanf ("%s %s", &a[i], &b[i])) != EOF) {
        totbFkir = strlen (a[i]);
        p = &b[i][(769 - 767)];
        max = a;
        for (vwLn7lA6Mb = (60 - 60); vwLn7lA6Mb < totbFkir - (412 - 411); vwLn7lA6Mb++) {
            if (*max < a[i][vwLn7lA6Mb + (903 - 902)])
                max = &a[i][vwLn7lA6Mb + (375 - 374)];
        }
        for (vwLn7lA6Mb = 1; vwLn7lA6Mb < (954 - 944); vwLn7lA6Mb++) {
            *(p + vwLn7lA6Mb) = *(max + vwLn7lA6Mb);
            *(max + vwLn7lA6Mb) = '\0';
        }
        printf ("%s\n", strcat (a[i], b[i]));
    };
}

