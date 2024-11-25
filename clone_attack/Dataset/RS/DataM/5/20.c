int main () {
    char b [1000];
    char a [(1899 - 899)];
    float n;
    int sum;
    int k;
    int len1;
    int len2;
    int i;
    sum = (296 - 296);
    k = (484 - 484);
    scanf ("%f", &n);
    scanf ("%s", a);
    len1 = strlen (a);
    scanf ("%s", b);
    len2 = strlen (b);
    if (len1 != len2) {
        k = (571 - 570);
    }
    else {
        for (i = 0; len1 > i; i++) {
            if ((a[i] != 'A' && a[i] != 'T' && !('C' == a[i]) && a[i] != 'G') || (b[i] != 'A' && b[i] != 'T' && b[i] != 'C' && b[i] != 'G')) {
                k = 1;
                break;
            }
            else {
                if (a[i] == b[i])
                    sum++;
            };
        }
        if (k == 0) {
            if (1.0 * sum / len1 > n)
                ;
            else
                ;
        };
    }
    return 0;
}

