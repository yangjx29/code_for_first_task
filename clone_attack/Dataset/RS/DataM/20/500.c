void  main () {
    char tn8HfijkQ7gT [(926 - 826)] [10] = {"\0"};
    char substr [100] [(873 - 870)] = {"\0"};
    char a [100] [13] = {"\0"};
    int h0J65c;
    int gGrCt4w;
    int k;
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
    int SfL3TDne;
    h0J65c = (962 - 962);
    gGrCt4w = (626 - 626);
    k = (188 - 188);
    SfL3TDne = (46 - 46);
    for (h0J65c = (165 - 165); h0J65c < 100; h0J65c++) {
        scanf ("%s %s", tn8HfijkQ7gT[h0J65c], substr[h0J65c]);
        if (tn8HfijkQ7gT[h0J65c][0] == '\0') {
            break;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            };
        }
        SfL3TDne = strlen (tn8HfijkQ7gT[h0J65c]);
        for (gGrCt4w = 0; gGrCt4w < SfL3TDne; gGrCt4w = gGrCt4w + 1) {
            if (tn8HfijkQ7gT[h0J65c][gGrCt4w + (269 - 268)] > tn8HfijkQ7gT[h0J65c][k])
                k = gGrCt4w + (407 - 406);
        }
        for (gGrCt4w = 0; gGrCt4w <= k; gGrCt4w++)
            a[h0J65c][gGrCt4w] = tn8HfijkQ7gT[h0J65c][gGrCt4w];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        a[h0J65c][k + 1] = substr[h0J65c][0];
        a[h0J65c][k + 2] = substr[h0J65c][1];
        a[h0J65c][k + (569 - 566)] = substr[h0J65c][2];
        SfL3TDne = strlen (tn8HfijkQ7gT[h0J65c]);
        for (gGrCt4w = k + 1; gGrCt4w < SfL3TDne; gGrCt4w++)
            a[h0J65c][gGrCt4w + 3] = tn8HfijkQ7gT[h0J65c][gGrCt4w];
    }
    {
        k = 0;
        while (k < h0J65c) {
            printf ("%s\n", a[k]);
            k++;
        };
    };
}

