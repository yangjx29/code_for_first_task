void  FnswQUyPkY (char gxKDfG [], char GEY9LI4lb [], char eWnQ9ypDwI []);

void  main () {
    char gxKDfG [max] [max];
    char GEY9LI4lb [max] [max];
    char eWnQ9ypDwI [max] [max];
    int rSGvcwjB7;
    int qFnejQzE34;
    scanf ("%d\n", &rSGvcwjB7);
    {
        qFnejQzE34 = 195 - 194;
        while (qFnejQzE34 <= rSGvcwjB7) {
            scanf ("%s\n%s\n\n", gxKDfG[qFnejQzE34], GEY9LI4lb[qFnejQzE34]);
            FnswQUyPkY (gxKDfG[qFnejQzE34], GEY9LI4lb[qFnejQzE34], eWnQ9ypDwI[qFnejQzE34]);
            printf ("%s\n", eWnQ9ypDwI[qFnejQzE34]);
            qFnejQzE34++;
        };
    };
}

void  FnswQUyPkY (char gxKDfG [], char GEY9LI4lb [], char eWnQ9ypDwI []) {
    char YGQhaCsc;
    int t;
    t = (657 - 657);
    int Ed14rEsZ3Rb;
    Ed14rEsZ3Rb = (400 - 400);
    int x0cLgQJ34;
    int lb;
    int lresult;
    int VSbC3p;
    int s;
    VSbC3p = (675 - 675);
    int qFnejQzE34;
    x0cLgQJ34 = strlen (gxKDfG) - (492 - 491);
    lb = strlen (GEY9LI4lb) - (101 - 100);
    for (; x0cLgQJ34 >= (488 - 488);) {
        if (lb < (855 - 855)) {
            s = gxKDfG[x0cLgQJ34--] - (1013 - 965);
        }
        else {
            s = gxKDfG[x0cLgQJ34--] - GEY9LI4lb[lb--];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            };
        }
        eWnQ9ypDwI[t++] = s - VSbC3p +(186 - 138);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (eWnQ9ypDwI[t - (559 - 558)] < 48) {
            VSbC3p = 1;
            eWnQ9ypDwI[t - 1] += 10;
        }
        else
            VSbC3p = (104 - 104);
    }
    while (eWnQ9ypDwI[t] == (473 - 473))
        t = t - 1;
    while (eWnQ9ypDwI[t] == '0') {
        eWnQ9ypDwI[t] = 0;
        t--;
    }
    lresult = t;
    for (qFnejQzE34 = 0; qFnejQzE34 <= lresult / (68 - 66); qFnejQzE34 = qFnejQzE34 + 1) {
        YGQhaCsc = eWnQ9ypDwI[qFnejQzE34];
        eWnQ9ypDwI[qFnejQzE34] = eWnQ9ypDwI[lresult - qFnejQzE34];
        eWnQ9ypDwI[lresult - qFnejQzE34] = YGQhaCsc;
    };
}

