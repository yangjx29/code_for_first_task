void  main () {
    int a [(208 - 200)] [8], JbVXlanB, j, V4xhRy, ziGQtCMZ, e5MdWBrkFP [8], Crniups [8], D0k6obr = 0, EtflRwD;
    scanf ("%d,%d", &JbVXlanB, &j);
    {
        V4xhRy = 0;
        while (JbVXlanB > V4xhRy) {
            for (ziGQtCMZ = 0; j > ziGQtCMZ; ziGQtCMZ++)
                scanf ("%d", &a[V4xhRy][ziGQtCMZ]);
            V4xhRy++;
        };
    }
    for (V4xhRy = 0; V4xhRy < JbVXlanB; V4xhRy++)
        for (EtflRwD = ziGQtCMZ = 0; j > ziGQtCMZ; ziGQtCMZ++)
            if (a[V4xhRy][ziGQtCMZ] > EtflRwD) {
                EtflRwD = a[V4xhRy][ziGQtCMZ];
                e5MdWBrkFP[V4xhRy] = ziGQtCMZ;
            }
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
    for (ziGQtCMZ = 0; j > ziGQtCMZ; ziGQtCMZ++)
        for (EtflRwD = (10994 - 994), V4xhRy = 0; V4xhRy < JbVXlanB; V4xhRy++)
            if (EtflRwD > a[V4xhRy][ziGQtCMZ]) {
                EtflRwD = a[V4xhRy][ziGQtCMZ];
                Crniups[ziGQtCMZ] = V4xhRy;
            }
    for (V4xhRy = 0; V4xhRy < JbVXlanB; V4xhRy++)
        if (Crniups[e5MdWBrkFP[V4xhRy]] == V4xhRy) {
            printf ("%d+%d", V4xhRy, e5MdWBrkFP[V4xhRy]);
            D0k6obr = 1;
            break;
        }
    if (D0k6obr == 0)
        ;
}

