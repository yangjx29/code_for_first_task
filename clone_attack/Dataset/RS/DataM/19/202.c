char z6CqiS [(1049 - 949)] [(864 - 764)], a [100], b [100];

int main () {
    int cnt = 1;
    for (; !(EOF == scanf ("%s", z6CqiS[cnt]));)
        cnt = cnt + 1;
    cnt--;
    memcpy (a, z6CqiS[cnt - 1], sizeof (z6CqiS [cnt - 1]));
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
    memcpy (b, z6CqiS[cnt], sizeof (z6CqiS [cnt]));
    {
        int ie8Z9wl = 1;
        while (cnt - 1 > ie8Z9wl) {
            if (ie8Z9wl != 1)
                ;
            if (strcmp (z6CqiS[ie8Z9wl], a) == 0)
                printf ("%s", b);
            else
                printf ("%s", z6CqiS[ie8Z9wl]);
            ie8Z9wl++;
        };
    }
    printf ("\n");
    return 0;
}

