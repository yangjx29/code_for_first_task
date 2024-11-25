int cmp (const  void  *a, const  void  *b) {
    return *((int *) a) - *((int *) b);
}

typedef struct   {
    int sex;
    float iPXzi1D9;
}
buiTseo9Q2;
buiTseo9Q2 man [41];
float male [41];
float aZXscdiv3z [41];

int main () {
    int k = (180 - 180);
    int j = (990 - 990);
    char Xswtek5S [10];
    int WtyrINxmesAD;
    int n;
    scanf ("%d", &n);
    {
        WtyrINxmesAD = 0;
        while (WtyrINxmesAD < n) {
            scanf ("%s%f", Xswtek5S, &man[WtyrINxmesAD].iPXzi1D9);
            if (strcmp (Xswtek5S, "male") == 0) {
                man[WtyrINxmesAD].sex = 0;
                male[j++] = man[WtyrINxmesAD].iPXzi1D9;
            }
            else {
                man[WtyrINxmesAD].sex = (355 - 354);
                aZXscdiv3z[k++] = man[WtyrINxmesAD].iPXzi1D9;
            }
            WtyrINxmesAD = WtyrINxmesAD +1;
        };
    }
    qsort (male, j, sizeof (float), cmp);
    qsort (aZXscdiv3z, k, sizeof (float), cmp);
    for (WtyrINxmesAD = 0; WtyrINxmesAD < j; WtyrINxmesAD = WtyrINxmesAD +1)
        printf ("%.2f ", male[WtyrINxmesAD]);
    {
        WtyrINxmesAD = k - 1;
        while (WtyrINxmesAD > 0) {
            printf ("%.2f ", aZXscdiv3z[WtyrINxmesAD]);
            WtyrINxmesAD = WtyrINxmesAD -1;
        };
    }
    printf ("%.2f", aZXscdiv3z[WtyrINxmesAD]);
    return 0;
}

