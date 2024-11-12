void  main () {
    char *bSK1VYcj3t, *xKMYTew4W, *I4udE2W53gxZ;
    gets (bSK1VYcj3t);
    bSK1VYcj3t = (char *) malloc (200 * sizeof (char));
    {
        xKMYTew4W = bSK1VYcj3t;
        I4udE2W53gxZ = bSK1VYcj3t + 1;
        while (I4udE2W53gxZ < bSK1VYcj3t + strlen (bSK1VYcj3t)) {
            printf ("%c", *xKMYTew4W + *I4udE2W53gxZ);
            I4udE2W53gxZ++;
            xKMYTew4W++;
        };
    }
    printf ("%c", *bSK1VYcj3t + *xKMYTew4W);
}

