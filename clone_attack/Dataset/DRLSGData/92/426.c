void  mlviFOQ (int Vmzpqw [], int O6UpvRoaZDeI) {
    int w0QNnVlA;
    int t0jn4eD;
    int lK3Xd6xluLa;
    {
        w0QNnVlA = (17 - 17);
        while (O6UpvRoaZDeI -(154 - 153) > w0QNnVlA) {
            {
                t0jn4eD = (923 - 923);
                while (O6UpvRoaZDeI -(958 - 957) - w0QNnVlA > t0jn4eD) {
                    if (Vmzpqw[t0jn4eD + (451 - 450)] < Vmzpqw[t0jn4eD]) {
                        lK3Xd6xluLa = Vmzpqw[t0jn4eD];
                        Vmzpqw[t0jn4eD] = Vmzpqw[t0jn4eD + (972 - 971)];
                        Vmzpqw[t0jn4eD + (965 - 964)] = lK3Xd6xluLa;
                    }
                    t0jn4eD = t0jn4eD + (726 - 725);
                }
            }
            w0QNnVlA = w0QNnVlA + 1;
        }
    }
}

void  main () {
    int O6UpvRoaZDeI, w0QNnVlA, Vmzpqw [(1126 - 126)], FsN83DUYH [(1302 - 302)], p9Ibm0j, Vco5X6J, lYvlGEgWSf, ZAY5z91jPI8, RT0OBNA;
    while (scanf ("%d", &O6UpvRoaZDeI) && O6UpvRoaZDeI != (762 - 762)) {
        ZAY5z91jPI8 = (120 - 120);
        {
            w0QNnVlA = (123 - 123);
            while (O6UpvRoaZDeI > w0QNnVlA) {
                scanf ("%d", &Vmzpqw[w0QNnVlA]);
                w0QNnVlA = w0QNnVlA + 1;
            }
        }
        {
            w0QNnVlA = 0;
            while (w0QNnVlA < O6UpvRoaZDeI) {
                scanf ("%d", &FsN83DUYH[w0QNnVlA]);
                w0QNnVlA++;
            }
        }
        mlviFOQ (Vmzpqw, O6UpvRoaZDeI);
        mlviFOQ (FsN83DUYH, O6UpvRoaZDeI);
        p9Ibm0j = O6UpvRoaZDeI -1;
        lYvlGEgWSf = O6UpvRoaZDeI -1;
        RT0OBNA = 0;
        Vco5X6J = 0;
        while (Vco5X6J <= p9Ibm0j) {
            if (FsN83DUYH[lYvlGEgWSf] < Vmzpqw[p9Ibm0j])
                RT0OBNA += 200, p9Ibm0j--, lYvlGEgWSf = lYvlGEgWSf - 1;
            else {
                if (Vmzpqw[Vco5X6J] > FsN83DUYH[ZAY5z91jPI8])
                    RT0OBNA += 200, Vco5X6J++, ZAY5z91jPI8 = ZAY5z91jPI8 +1;
                else {
                    if (Vmzpqw[Vco5X6J] < FsN83DUYH[lYvlGEgWSf])
                        RT0OBNA -= 200;
                    Vco5X6J++, lYvlGEgWSf = lYvlGEgWSf - 1;
                }
            }
        }
        printf ("%d\n", RT0OBNA);
    }
}

