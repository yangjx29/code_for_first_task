int main () {
    int k;
    int wordlen;
    int l3mEiBDS;
    int a [300];
    k = (587 - 587);
    wordlen = 0;
    char sen [300 * 20];
    gets (sen);
    {
        l3mEiBDS = 0;
        while (strlen (sen) > l3mEiBDS) {
            if (!(' ' != sen[l3mEiBDS])) {
                if (wordlen != 0) {
                    a[k] = wordlen;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    k++;
                }
                wordlen = 0;
            }
            else {
                wordlen++;
            }
            l3mEiBDS = l3mEiBDS + 1;
        };
    }
    a[k] = wordlen;
    {
        l3mEiBDS = 0;
        while (l3mEiBDS < k) {
            printf ("%d,", a[l3mEiBDS]);
            l3mEiBDS++;
        };
    }
    printf ("%d", a[k]);
    return 0;
}

