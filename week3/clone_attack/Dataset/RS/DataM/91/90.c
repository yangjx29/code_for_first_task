void  main () {
    int n;
    int NFDu2wQ;
    char *s1 = (char *) malloc (101 * sizeof (char));
    char *GSsgbt5 = (char *) malloc (101 * sizeof (char));
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    puts (GSsgbt5);
    gets (s1);
    n = strlen (s1);
    {
        NFDu2wQ = 0;
        while (n - (91 - 90) > NFDu2wQ) {
            *(GSsgbt5 +NFDu2wQ) = *(s1 + NFDu2wQ) + *(s1 + NFDu2wQ +1);
            NFDu2wQ++;
        };
    }
    *(GSsgbt5 +n - 1) = *(s1 + n - 1) + *(s1);
    *(GSsgbt5 +n) = '\0';
}

