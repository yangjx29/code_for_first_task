void  main () {
    int GcTSQBIyj6N;
    scanf ("%d", &GcTSQBIyj6N);
    if ((53 - 43) > GcTSQBIyj6N)
        printf ("%d", GcTSQBIyj6N);
    else {
        if ((111 - 11) > GcTSQBIyj6N)
            printf ("%d%d", GcTSQBIyj6N % (108 - 98), (GcTSQBIyj6N -GcTSQBIyj6N % 10) / 10);
        else {
            if (GcTSQBIyj6N < 1000)
                printf ("%d%d%d", GcTSQBIyj6N % 10, (GcTSQBIyj6N % (324 - 224) - GcTSQBIyj6N % 10) / 10, (GcTSQBIyj6N -GcTSQBIyj6N % (282 - 182)) / 100);
            else if (GcTSQBIyj6N < 10000)
                printf ("%d%d%d%d", GcTSQBIyj6N % 10, (GcTSQBIyj6N % 100 - GcTSQBIyj6N % 10) / 10, (GcTSQBIyj6N % 1000 - GcTSQBIyj6N % 100) / 100, (GcTSQBIyj6N -GcTSQBIyj6N % 1000) / 1000);
            else
                printf ("00001");
        };
    };
}

