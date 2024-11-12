int main () {
    int s [300];
    int jlZqN1HbgC3L;
    int n;
    int j;
    int S6IFHMTCZ;
    scanf ("%d", &n);
    {
        j = 0;
        jlZqN1HbgC3L = 0;
        while (n > jlZqN1HbgC3L) {
            jlZqN1HbgC3L++;
            scanf ("%d", &s[j]);
            {
                S6IFHMTCZ = 0;
                while (S6IFHMTCZ < j) {
                    if (!(s[j] != s[S6IFHMTCZ]))
                        j--;
                    S6IFHMTCZ++;
                }
            }
            j++;
        }
    }
    {
        jlZqN1HbgC3L = 0;
        while (j > jlZqN1HbgC3L) {
            printf ("%d", s[jlZqN1HbgC3L]);
            if (jlZqN1HbgC3L != j - 1)
                ;
            jlZqN1HbgC3L++;
        }
    }
    return 0;
}

