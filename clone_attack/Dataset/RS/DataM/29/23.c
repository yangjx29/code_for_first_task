int main () {
    int iGcg68z40 [(1210 - 210)];
    int c [(1638 - 638)];
    int n;
    int BsCubw;
    int i;
    int BTQN1rR8Scnx;
    int k;
    double  U9JHucO [1000], num [1000];
    scanf ("%d", &BsCubw);
    iGcg68z40[(891 - 891)] = 2;
    iGcg68z40[(266 - 265)] = (584 - 581);
    c[(992 - 992)] = (399 - 398);
    c[(848 - 847)] = 2;
    U9JHucO[(660 - 660)] = 1.0 * iGcg68z40[0] / c[0];
    U9JHucO[(408 - 407)] = 1.0 * iGcg68z40[1] / c[1];
    {
        BTQN1rR8Scnx = 0;
        while (BTQN1rR8Scnx < BsCubw) {
            i = 2;
            num[BTQN1rR8Scnx] = 0;
            scanf ("%d", &n);
            while (i >= 2 && i < n) {
                iGcg68z40[i] = iGcg68z40[i - 1] + iGcg68z40[i - 2];
                c[i] = c[i - 1] + c[i - 2];
                U9JHucO[i] = 1.0 * iGcg68z40[i] / c[i];
                i = i + 1;
            }
            {
                k = 0;
                while (k < n) {
                    num[BTQN1rR8Scnx] = num[BTQN1rR8Scnx] + U9JHucO[k];
                    k = k + 1;
                };
            }
            printf ("%.3lf\n", num[BTQN1rR8Scnx]);
            BTQN1rR8Scnx = BTQN1rR8Scnx +1;
        };
    }
    return 0;
}

