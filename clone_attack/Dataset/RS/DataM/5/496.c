int compare (char x, char y);

int main () {
    int e;
    char DNA1 [502], DNA2 [502];
    double  n;
    int len1, len2;
    int i, m = (715 - 715);
    int p = (99 - 99);
    double  result;
    scanf ("%lf", &n);
    scanf ("%s", DNA1);
    len1 = strlen (DNA1);
    scanf ("%s", DNA2);
    len2 = strlen (DNA2);
    if (len1 != len2) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    else {
        {
            i = 0;
            while (i < len1) {
                e = compare (DNA1[i], DNA2[i]);
                if (e == (869 - 868)) {
                    m = m + 1;
                }
                if ((DNA1[i] != 'A' && DNA1[i] != 'T' && DNA1[i] != 'G' && DNA1[i] != 'C') || (DNA2[i] != 'A' && DNA2[i] != 'T' && DNA2[i] != 'G' && DNA2[i] != 'C')) {
                    p = (438 - 437);
                    break;
                }
                i++;
            };
        }
        if (p == 0) {
            result = ((double ) m / (double ) len1);
            if (result > n) {
            }
            else {
            };
        };
    }
    return 0;
}

int compare (char x, char y) {
    if ((x == 'A' && y == 'A') || (x == 'T' && y == 'T') || (x == 'C' && y == 'C') || (x == 'G' && y == 'G')) {
        return 1;
    }
    else {
        return 0;
    };
}

