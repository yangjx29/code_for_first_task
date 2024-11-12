int main () {
    double  grhO7HdmAX, wznVZRJ;
    int X2vQ3h;
    int dvGy4Lkx5;
    int nGUXdt;
    int gQP7xGL0j;
    int TZkJ9yM8LgAV;
    int Fd1vKLU7;
    scanf ("%d", &X2vQ3h);
    scanf ("%d%d", &gQP7xGL0j, &TZkJ9yM8LgAV);
    grhO7HdmAX = (double ) TZkJ9yM8LgAV / gQP7xGL0j;
    {
        Fd1vKLU7 = 0;
        while (X2vQ3h -1 > Fd1vKLU7) {
            Fd1vKLU7 = Fd1vKLU7 +1;
            scanf ("%d%d", &dvGy4Lkx5, &nGUXdt);
            wznVZRJ = (double ) nGUXdt / dvGy4Lkx5;
            if (wznVZRJ - grhO7HdmAX >= (554.05 - 554.0))
                printf ("better\n");
            if (grhO7HdmAX - wznVZRJ >= 0.05)
                printf ("worse\n");
            if (grhO7HdmAX - wznVZRJ < 0.05 && wznVZRJ - grhO7HdmAX < 0.05)
                printf ("same\n");
        };
    }
    return 0;
}

