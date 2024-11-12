main () {
    char a [(95 - 15)];
    char OtI9f5hd1 [(169 - 89)];
    char BjOFPQ5q;
    gets (a);
    gets (OtI9f5hd1);
    {
        BjOFPQ5q = 0;
        while (80 > BjOFPQ5q) {
            if ((a[BjOFPQ5q] > 64) && (a[BjOFPQ5q] < 91)) {
                a[BjOFPQ5q] = a[BjOFPQ5q] + (102 - 70);
            }
            BjOFPQ5q = BjOFPQ5q +1;
        };
    }
    {
        BjOFPQ5q = 0;
        while (80 > BjOFPQ5q) {
            if ((OtI9f5hd1[BjOFPQ5q] > 64) && (91 > OtI9f5hd1[BjOFPQ5q])) {
                OtI9f5hd1[BjOFPQ5q] = OtI9f5hd1[BjOFPQ5q] + 32;
            }
            BjOFPQ5q = BjOFPQ5q +1;
        };
    }
    if (strcmp (a, OtI9f5hd1) > 0)
        ;
    if (strcmp (a, OtI9f5hd1) == 0)
        ;
    if (strcmp (a, OtI9f5hd1) < 0)
        ;
    return 0;
}

