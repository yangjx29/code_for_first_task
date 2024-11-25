void  main () {
    char *XcZoun8;
    char *MOXo87muK;
    gets (XcZoun8);
    int fC7f93QL;
    int SvzOmUkjMYPT;
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
    {
        fC7f93QL = 0;
        while (fC7f93QL < SvzOmUkjMYPT -1) {
            *(MOXo87muK +fC7f93QL) = *(XcZoun8 +fC7f93QL) + *(XcZoun8 +fC7f93QL + 1);
            fC7f93QL++;
        };
    }
    XcZoun8 = (char *) malloc (100 * sizeof (char));
    SvzOmUkjMYPT = strlen (XcZoun8);
    {
        fC7f93QL = 0;
        while (fC7f93QL < SvzOmUkjMYPT) {
            printf ("%c", *(MOXo87muK +fC7f93QL));
            fC7f93QL++;
        };
    }
    *(MOXo87muK +SvzOmUkjMYPT-1) = *(XcZoun8)+*(XcZoun8 +SvzOmUkjMYPT-1);
    MOXo87muK = (char *) malloc (100 * sizeof (char));
}

