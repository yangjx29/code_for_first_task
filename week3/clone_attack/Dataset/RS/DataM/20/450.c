void  main () {
    char joqD2y [13];
    char B5JYd3Tcurn [3];
    int s;
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
    int i;
    int zIBk6wgZvof;
    int zbcCAi7fhve;
    for (; !(EOF == scanf ("%s %s", joqD2y, B5JYd3Tcurn));) {
        B5JYd3Tcurn[3] = 97;
        s = strlen (joqD2y);
        joqD2y[s] = 97;
        zbcCAi7fhve = (526 - 526);
        {
            i = 702 - 702;
            while (s - 1 >= i) {
                if (joqD2y[i] > joqD2y[zbcCAi7fhve])
                    zbcCAi7fhve = i;
                i = i + 1;
            };
        }
        {
            i = s;
            while (i >= zbcCAi7fhve + 1) {
                joqD2y[i + 3] = joqD2y[i];
                i--;
            };
        }
        {
            zIBk6wgZvof = 0;
            i = zbcCAi7fhve + 1;
            while (zIBk6wgZvof <= 2) {
                joqD2y[i] = B5JYd3Tcurn[zIBk6wgZvof];
                zIBk6wgZvof = zIBk6wgZvof + 1;
                i++;
            };
        }
        joqD2y[s + 3] = '\0';
        printf ("%s\n", joqD2y);
    };
}

