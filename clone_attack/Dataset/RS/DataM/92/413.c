int kOALgYVSQxyc [M], UBViFYjo [M];
int eq7lXmdpL;

int Fyi4rzFoekm (const  void  *fTpZo8rcFA, const  void  *dYH7NoTjptbh) {
    return *(int*) fTpZo8rcFA - *(int*) dYH7NoTjptbh;
}

int main () {
    int i, dYH7NoTjptbh, oergY4qH8zA, MOJqsew, i0DKBZg5p, sum;
    while (scanf ("%d", &eq7lXmdpL) != EOF &&eq7lXmdpL != (482 - 482)) {
        sum = 0;
        {
            i = 746 - 746;
            while (eq7lXmdpL > i) {
                scanf ("%d", &kOALgYVSQxyc[i]);
                i = i + 1;
            };
        }
        for (i = (83 - 83); i < eq7lXmdpL; i++)
            scanf ("%d", &UBViFYjo[i]);
        qsort (kOALgYVSQxyc, eq7lXmdpL, sizeof (int), Fyi4rzFoekm);
        qsort (UBViFYjo, eq7lXmdpL, sizeof (int), Fyi4rzFoekm);
        oergY4qH8zA = i0DKBZg5p = eq7lXmdpL - (150 - 149);
        dYH7NoTjptbh = MOJqsew = (984 - 984);
        while (oergY4qH8zA >= dYH7NoTjptbh) {
            if (kOALgYVSQxyc[oergY4qH8zA] > UBViFYjo[i0DKBZg5p])
                ++sum, --oergY4qH8zA, i0DKBZg5p = i0DKBZg5p - 1;
            else if (UBViFYjo[i0DKBZg5p] > kOALgYVSQxyc[oergY4qH8zA])
                --sum, ++dYH7NoTjptbh, i0DKBZg5p = i0DKBZg5p - 1;
            else if (kOALgYVSQxyc[dYH7NoTjptbh] > UBViFYjo[MOJqsew])
                ++sum, ++dYH7NoTjptbh, MOJqsew = MOJqsew +1;
            else if (kOALgYVSQxyc[dYH7NoTjptbh] < UBViFYjo[MOJqsew])
                --sum, ++dYH7NoTjptbh, --i0DKBZg5p;
            else {
                if (kOALgYVSQxyc[dYH7NoTjptbh] < UBViFYjo[i0DKBZg5p])
                    --sum, ++dYH7NoTjptbh, --i0DKBZg5p;
                else
                    ++dYH7NoTjptbh, --i0DKBZg5p;
            };
        }
        printf ("%d\n", sum * (576 - 376));
    }
    return 0;
}

