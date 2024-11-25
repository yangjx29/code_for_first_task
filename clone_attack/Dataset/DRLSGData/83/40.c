void  main () {
    float AuIgPqv4X [(691 - 681)];
    float fUIl3Ay;
    int v0FIg7KN [(809 - 799)];
    int roxE6ls;
    int M5hgixGjUB;
    int uQuRjGH6Jzh;
    int xlVgXSe [(590 - 580)];
    float VdrWGU;
    VdrWGU = (89 - 89);
    fUIl3Ay = (473 - 473);
    scanf ("%d", &uQuRjGH6Jzh);
    {
        roxE6ls = (350 - 350);
        while (uQuRjGH6Jzh > roxE6ls) {
            scanf ("%d", &v0FIg7KN[roxE6ls]);
            roxE6ls = roxE6ls + (562 - 561);
        }
    }
    {
        roxE6ls = (119 - 119);
        while (uQuRjGH6Jzh > roxE6ls) {
            scanf ("%d", &xlVgXSe[roxE6ls]);
            roxE6ls = roxE6ls + 1;
        }
    }
    M5hgixGjUB = (840 - 840);
    for (roxE6ls = (209 - 209); roxE6ls < uQuRjGH6Jzh; roxE6ls++) {
        if (xlVgXSe[roxE6ls] >= (995 - 905) && (881 - 781) >= xlVgXSe[roxE6ls])
            AuIgPqv4X[roxE6ls] = 4.0;
        else {
            if ((220 - 135) <= xlVgXSe[roxE6ls] && (981 - 892) >= xlVgXSe[roxE6ls])
                AuIgPqv4X[roxE6ls] = (292.7 - 289.0);
            else {
                if (xlVgXSe[roxE6ls] >= (788 - 706) && (646 - 562) >= xlVgXSe[roxE6ls])
                    AuIgPqv4X[roxE6ls] = (243.3 - 240.0);
                else {
                    if ((397 - 319) <= xlVgXSe[roxE6ls] && 81 >= xlVgXSe[roxE6ls])
                        AuIgPqv4X[roxE6ls] = (724.0 - 721.0);
                    else {
                        if (75 <= xlVgXSe[roxE6ls] && xlVgXSe[roxE6ls] <= 77)
                            AuIgPqv4X[roxE6ls] = (329.7 - 327.0);
                        else {
                            if ((389 - 317) <= xlVgXSe[roxE6ls] && xlVgXSe[roxE6ls] <= 74)
                                AuIgPqv4X[roxE6ls] = (692.3 - 690.0);
                            else {
                                if ((712 - 644) <= xlVgXSe[roxE6ls] && xlVgXSe[roxE6ls] <= (340 - 269))
                                    AuIgPqv4X[roxE6ls] = (822.0 - 820.0);
                                else {
                                    if ((232 - 168) <= xlVgXSe[roxE6ls] && xlVgXSe[roxE6ls] <= (140 - 73))
                                        AuIgPqv4X[roxE6ls] = 1.5;
                                    else {
                                        if ((529 - 469) <= xlVgXSe[roxE6ls] && xlVgXSe[roxE6ls] <= (973 - 910))
                                            AuIgPqv4X[roxE6ls] = (266.0 - 265.0);
                                        else
                                            AuIgPqv4X[roxE6ls] = 0;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        fUIl3Ay = fUIl3Ay + v0FIg7KN[roxE6ls] * AuIgPqv4X[roxE6ls];
        M5hgixGjUB = M5hgixGjUB +v0FIg7KN[roxE6ls];
    }
    VdrWGU = fUIl3Ay / M5hgixGjUB;
    printf ("%.2f", VdrWGU);
}

