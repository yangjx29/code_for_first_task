void  main () {
    int ZtpIdc [200], i = 0, V7lwc8dU9;
    char XUOvW7 [200] [40];
leap :
    scanf ("%s", XUOvW7[i]);
    if (getchar () == ' ')
        goto leap;
    ZtpIdc[i] = strlen (XUOvW7[i]);
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
    i = i + 1;
    V7lwc8dU9 = i;
    for (i = 0; i < V7lwc8dU9 -1; i++)
        printf ("%d,", ZtpIdc[i]);
    printf ("%d", ZtpIdc[V7lwc8dU9 -1]);
}

