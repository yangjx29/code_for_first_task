void  main () {
    long  sum = 0;
    struct   s {
        char aUqeIW3iC [20];
        int rAHcPy7C;
        int rbeScMmAtlV;
        char official;
        char west;
        int XGviqdCW4aFj;
    }
    gTqobVHj [100];
    int max;
    int IbTK1VrZlvdR;
    int m [100] = {0};
    int QhDGQe0ty;
    int BmOhMGBvJ;
    max = 0;
    IbTK1VrZlvdR = 0;
    scanf ("%d", &QhDGQe0ty);
    {
        BmOhMGBvJ = 0;
        while (BmOhMGBvJ < QhDGQe0ty) {
            scanf ("%s", gTqobVHj[BmOhMGBvJ].aUqeIW3iC);
            scanf ("%d", &gTqobVHj[BmOhMGBvJ].rAHcPy7C);
            scanf ("%d", &gTqobVHj[BmOhMGBvJ].rbeScMmAtlV);
            scanf ("%c", &gTqobVHj[BmOhMGBvJ].official);
            scanf ("%c", &gTqobVHj[BmOhMGBvJ].west);
            scanf ("%d", &gTqobVHj[BmOhMGBvJ].XGviqdCW4aFj);
            if (gTqobVHj[BmOhMGBvJ].rAHcPy7C > 80 && 0 < gTqobVHj[BmOhMGBvJ].XGviqdCW4aFj)
                m[BmOhMGBvJ] = m[BmOhMGBvJ] + 8000;
            if (85 < gTqobVHj[BmOhMGBvJ].rAHcPy7C && gTqobVHj[BmOhMGBvJ].rbeScMmAtlV > 80)
                m[BmOhMGBvJ] = m[BmOhMGBvJ] + 4000;
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
            }
            if (gTqobVHj[BmOhMGBvJ].rAHcPy7C > 90)
                m[BmOhMGBvJ] = m[BmOhMGBvJ] + 2000;
            if (gTqobVHj[BmOhMGBvJ].rAHcPy7C > 85 && gTqobVHj[BmOhMGBvJ].west == 'Y')
                m[BmOhMGBvJ] = m[BmOhMGBvJ] + 1000;
            if (gTqobVHj[BmOhMGBvJ].rbeScMmAtlV > 80 && gTqobVHj[BmOhMGBvJ].official == 'Y')
                m[BmOhMGBvJ] = m[BmOhMGBvJ] + 850;
            sum = sum + m[BmOhMGBvJ];
            if (m[BmOhMGBvJ] > max) {
                max = m[BmOhMGBvJ];
                IbTK1VrZlvdR = BmOhMGBvJ;
            }
            BmOhMGBvJ = BmOhMGBvJ +1;
            getchar ();
            getchar ();
        };
    }
    printf ("%s\n%d\n%d\n", gTqobVHj[IbTK1VrZlvdR].aUqeIW3iC, max, sum);
}

