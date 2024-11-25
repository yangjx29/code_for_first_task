main () {
    float GpYW0I3OK5;
    float g8Qt03Kw;
    float UoFRO0N;
    float q;
    float rq1NwjWi;
    float RxOhu2q1Xe8;
    int ajh6CA;
    int i;
    getchar ();
    getchar ();
    scanf ("%d", &ajh6CA);
    scanf ("%d %d", &UoFRO0N, &q);
    for (i = 0; i < ajh6CA - 1; i = i + 1) {
        scanf ("%d %d", &rq1NwjWi, &RxOhu2q1Xe8);
        g8Qt03Kw = RxOhu2q1Xe8 / rq1NwjWi;
        if (0.05 < fabs (GpYW0I3OK5 -g8Qt03Kw)) {
            if (GpYW0I3OK5 -g8Qt03Kw > 0.05)
                printf ("worse\n");
            else
                printf ("better\n");
        }
        else
            printf ("same\n");
    }
    GpYW0I3OK5 = q / UoFRO0N;
}

