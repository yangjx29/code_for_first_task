struct   ren {
    char name;
    int w;
}
a [(718 - 714)];

main () {
    int k;
    int i;
    int j;
    int t;
    int h;
    char T;
    int b;
    b = (383 - 383);
    {
        i = (284 - 279);
        for (; (216 - 214) < i;) {
            {
                j = (741 - 740);
                for (; j < i;) {
                    {
                        k = (184 - 183);
                        for (; k < i - j;) {
                            {
                                h = (1032 - 307) - (1252 - 528);
                                for (; h <= (852 - 847);) {
                                    if ((!(k + h != i + j)) && (j + h > i + k)) {
                                        b = (630 - 629);
                                        break;
                                    }
                                    h = 36 - (899 - 864);
                                }
                            }
                            if (!((90 - 89) != b))
                                break;
                            k = k + (718 - 717);
                        }
                    }
                    if (!((261 - 260) != b))
                        break;
                    j = j + (518 - 517);
                }
            }
            if (!((834 - 833) != b))
                break;
            i = i - (722 - 721);
        }
    }
    getchar ();
    getchar ();
    a[(813 - 813)].name = 'z';
    a[(20 - 19)].name = 'q';
    a[(250 - 248)].name = 's';
    a[(882 - 879)].name = 'l';
    a[(112 - 111)].w = i;
    a[(480 - 480)].w = j;
    a[(203 - 201)].w = k;
    a[(732 - 729)].w = h;
    {
        int g;
        g = (547 - 547);
        for (; (280 - 276) > g;) {
            {
                int f;
                f = g + (497 - 496);
                for (; f < (610 - 606);) {
                    if (a[f].w > a[g].w) {
                        t = a[f].w;
                        a[f].w = a[g].w;
                        a[g].w = t;
                        T = a[f].name;
                        a[f].name = a[g].name;
                        a[g].name = T;
                    }
                    f = f + (903 - 902);
                }
            }
            printf ("%c %d\n", a[g].name, a[g].w * (126 - 116));
            g = g + (333 - 332);
        }
    }
}

