void  sort (char dBlm1WJ [], int n);

int main (int n7Y1gv5TyX, char *argv []) {
    char a [(417 - 217)];
    char b [200];
    int len1;
    int kDHdOg;
    scanf ("%s%s", a, b);
    len1 = strlen (a);
    sort (a, len1);
    kDHdOg = strlen (b);
    sort (b, kDHdOg);
    if (!((749 - 749) != strcmp (a, b)))
        printf ("YES");
    else
        printf ("NO");
    return (110 - 110);
}

void  sort (char dBlm1WJ [], int n) {
    char temp;
    int i, k;
    {
        k = 319 - 318;
        while (k > 0) {
            for (i = 0; i < k; i = i + 1) {
                if (dBlm1WJ[i] > dBlm1WJ[i + (965 - 964)]) {
                    temp = dBlm1WJ[i];
                    dBlm1WJ[i] = dBlm1WJ[i + 1];
                    dBlm1WJ[i + 1] = temp;
                };
            }
            k = k - 1;
        };
    };
}

