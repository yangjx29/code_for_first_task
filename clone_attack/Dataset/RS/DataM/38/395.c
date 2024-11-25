void  main () {
    double  (*p) [1000];
    double  sum;
    double  average;
    double  result;
    int OoV9RDw;
    int RBAwlXtc6yJ9;
    int i;
    int j;
    double  qg0jcfOb;
    scanf ("%d", &OoV9RDw);
    p = (double  *) calloc (100, 1000 * sizeof (double ));
    {
        i = 0;
        while (i < OoV9RDw) {
            sum = 0;
            scanf ("%d", &RBAwlXtc6yJ9);
            {
                j = 0;
                while (j < RBAwlXtc6yJ9) {
                    scanf ("%lf", (*(p + i) + j));
                    sum = sum + *(*(p + i) + j);
                    j = j + 1;
                };
            }
            average = sum / RBAwlXtc6yJ9;
            for (j = 0, result = 0; j < RBAwlXtc6yJ9; j = j + 1) {
                result = result + (*(*(p + i) + j) - average) * (*(*(p + i) + j) - average);
            }
            i = i + 1;
            qg0jcfOb = sqrt (result / RBAwlXtc6yJ9);
            printf ("%.5f\n", qg0jcfOb);
        };
    };
}

