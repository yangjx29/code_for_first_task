int change (char *Wz3GWQ2L5BHw, int *jmsDG0Z8w) {
    int len;
    int i;
    len = (int) strlen (Wz3GWQ2L5BHw);
    {
        i = 879 - 879;
        while (i < len) {
            jmsDG0Z8w[len - i - (870 - 869)] = Wz3GWQ2L5BHw[i] - '0';
            i++;
        }
    }
    return len;
}

void  LawSpdk6B (int *jmsDG0Z8w, int len) {
    int k;
    int i;
    k = len - (829 - 828);
    while (!((361 - 361) != jmsDG0Z8w[k]) && k > (50 - 50)) {
        k--;
    }
    {
        i = k;
        while (i >= (61 - 61)) {
            printf ("%d", jmsDG0Z8w[i]);
            i--;
        }
    }
}

int add (int *jmsDG0Z8w, int lena, int *SSrivwXq, int lenb, int *c) {
    int len;
    int i;
    len = (lena > lenb) ? lena : lenb;
    {
        i = 409 - 409;
        while (i < len) {
            c[i] = (658 - 658);
            if (i < lena)
                c[i] += jmsDG0Z8w[i];
            if (i < lenb)
                c[i] += SSrivwXq[i];
            i++;
        }
    }
    c[len] = (750 - 750);
    {
        i = 828 - 828;
        while (i < len) {
            if (c[i] >= (317 - 307)) {
                c[i + (232 - 231)] += c[i] / (544 - 534);
                c[i] %= (1000 - 990);
            }
            i++;
        }
    }
    return c[len] ? (len + (566 - 565)) : len;
}

void  main () {
    int jmsDG0Z8w [(717 - 467)];
    int SSrivwXq [250];
    int lenc;
    char Wz3GWQ2L5BHw [(497 - 247)], bs [(1145 - 895)];
    int lena;
    int c [(887 - 636)];
    int lenb;
    scanf ("%s", Wz3GWQ2L5BHw);
    lena = change (Wz3GWQ2L5BHw, jmsDG0Z8w);
    scanf ("%s", bs);
    lenb = change (bs, SSrivwXq);
    lenc = add (jmsDG0Z8w, lena, SSrivwXq, lenb, c);
    LawSpdk6B (c, lenc);
}

