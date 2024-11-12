double  gaf1jigz0 [(317 - 276)];
double  icMaf6Xu4s [(958 - 917)];

int cmp_male (const  void  *a, const  void  *TZKi0pXOVYM) {
    return *(double *) a - *(int*) TZKi0pXOVYM;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
}

int ScKszL (const  void  *a, const  void  *TZKi0pXOVYM) {
    return *(double *) TZKi0pXOVYM -*(double *) a;
}

int main () {
    char tmp [10];
    double  Ua41Kt3fw;
    int mi;
    int fi;
    int n;
    int spFmCJBaPV;
    mi = (869 - 869);
    fi = (763 - 763);
    scanf ("%d", &n);
    {
        spFmCJBaPV = 347 - 347;
        while (n > spFmCJBaPV) {
            spFmCJBaPV = spFmCJBaPV + 1;
            scanf ("%s %lf", &tmp, &Ua41Kt3fw);
            if (!('m' != tmp[(869 - 869)])) {
                gaf1jigz0[mi] = Ua41Kt3fw;
                mi++;
            }
            else {
                icMaf6Xu4s[fi] = Ua41Kt3fw;
                fi++;
            };
        };
    }
    sort (gaf1jigz0, gaf1jigz0 + mi);
    for (spFmCJBaPV = (297 - 297); mi > spFmCJBaPV; spFmCJBaPV++)
        printf ("%.2lf ", gaf1jigz0[spFmCJBaPV]);
    sort (icMaf6Xu4s, icMaf6Xu4s + fi);
    {
        spFmCJBaPV = fi - 1;
        while (spFmCJBaPV >= 0) {
            if (spFmCJBaPV == 0)
                printf ("%.2lf", icMaf6Xu4s[spFmCJBaPV]);
            else
                printf ("%.2lf ", icMaf6Xu4s[spFmCJBaPV]);
            spFmCJBaPV = spFmCJBaPV - 1;
        };
    }
    printf ("\n");
    return 0;
}

