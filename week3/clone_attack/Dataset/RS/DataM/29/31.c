int main () {
    float s;
    s = 0;
    int UCimzop0jd, j, m;
    int a [1000];
    float ai;
    float am;
    float aj;
    ai = 1;
    am = 0;
    int gn5OWhq9j;
    float bi = 2, kdkhrznYBfDp, bm = 5;
    scanf ("%d", &gn5OWhq9j);
    for (UCimzop0jd = 1; gn5OWhq9j >= UCimzop0jd; UCimzop0jd = UCimzop0jd +1)
        scanf ("%d", &a[UCimzop0jd]);
    for (j = 1; gn5OWhq9j >= j; j++) {
        {
            m = 1;
            while (m <= a[j]) {
                s = s + bi / ai;
                if (m == 1)
                    aj = 2;
                else
                    aj = am;
                am = ai + aj;
                ai = aj;
                if (m == 1)
                    kdkhrznYBfDp = 3;
                else
                    kdkhrznYBfDp = bm;
                m++;
                bm = bi + kdkhrznYBfDp;
                bi = kdkhrznYBfDp;
            };
        }
        bi = 2;
        ai = 1;
        printf ("%.3f\n", s);
        s = 0;
    }
    return 0;
}

