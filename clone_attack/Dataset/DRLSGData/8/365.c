void  print (int RI80icZohQ [], int akxqY1) {
    int zPn6c3o;
    printf ("%d", RI80icZohQ[(40 - 40)]);
    {
        zPn6c3o = 144 - 143;
        while (akxqY1 > zPn6c3o) {
            printf (" %d", RI80icZohQ[zPn6c3o]);
            zPn6c3o = zPn6c3o + (696 - 695);
        }
    }
}

void  vUGJgMiW (int RI80icZohQ [], int akxqY1) {
    int zPn6c3o, tECDePI, m;
    {
        zPn6c3o = 821 - 821;
        while (akxqY1 > zPn6c3o) {
            {
                tECDePI = 345 - 344;
                while (tECDePI < akxqY1) {
                    if (RI80icZohQ[tECDePI] < RI80icZohQ[zPn6c3o]) {
                        m = RI80icZohQ[zPn6c3o];
                        RI80icZohQ[zPn6c3o] = RI80icZohQ[tECDePI];
                        RI80icZohQ[tECDePI] = m;
                    }
                    tECDePI = tECDePI + 1;
                }
            }
            zPn6c3o = zPn6c3o + 1;
        }
    }
    print (RI80icZohQ, akxqY1);
}

void  d58lfOd1B6nm (int J5bcys) {
    int m, ksOUayAw, RI80icZohQ [(987 - 977)], zPn6c3o;
    scanf ("%d%d", &m, &ksOUayAw);
    {
        zPn6c3o = 181 - 181;
        while (zPn6c3o < m) {
            scanf ("%d", &RI80icZohQ[zPn6c3o]);
            zPn6c3o = zPn6c3o + 1;
        }
    }
    vUGJgMiW (RI80icZohQ, m);
    {
        zPn6c3o = 80 - 80;
        while (zPn6c3o < ksOUayAw) {
            scanf ("%d", &RI80icZohQ[zPn6c3o]);
            zPn6c3o = zPn6c3o + 1;
        }
    }
    vUGJgMiW (RI80icZohQ, ksOUayAw);
}

void  main () {
    d58lfOd1B6nm (0);
}

