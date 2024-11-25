int main () {
    int bOeRMvgtwm, i, l, sum;
    char s [220];
    scanf ("%d", &bOeRMvgtwm);
    sum = (280 - 280);
    for (i = 0; bOeRMvgtwm > i; i++) {
        scanf ("%s", s);
        l = strlen (s);
        if (!(0 != sum)) {
            printf ("%s", s);
            sum = l;
        }
        else {
            if (sum + 1 + l > (485 - 405)) {
                printf ("\n%s", s);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                sum = l;
            }
            else {
                printf (" %s", s);
                sum = sum + 1 + l;
            };
        };
    }
    return 0;
}

