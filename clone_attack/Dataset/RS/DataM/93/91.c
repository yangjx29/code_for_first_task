void  main () {
    int ynpzOAWNBRK;
    int lxJrob6Nclh;
    int FwFeqdgIh;
    int vgUaNERBZi;
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
    scanf ("%d", &vgUaNERBZi);
    ynpzOAWNBRK = vgUaNERBZi % 3;
    lxJrob6Nclh = vgUaNERBZi % 5;
    FwFeqdgIh = vgUaNERBZi % 7;
    if (0 < ynpzOAWNBRK) {
        if (0 < lxJrob6Nclh)
            if (0 < FwFeqdgIh)
                ;
            else
                printf ("7");
        else if (FwFeqdgIh > 0)
            printf ("5");
        else
            printf ("5 7");
    }
    else if (lxJrob6Nclh > 0)
        if (FwFeqdgIh > 0)
            printf ("3");
        else
            printf ("3 7");
    else if (FwFeqdgIh > 0)
        printf ("3 5");
    else
        printf ("3 5 7");
}

