int main (int argc, char *argv []) {
    int i;
    int RVolHS7P;
    int rdclPRe7g;
    int a [13] = {0, (331 - 300), 28, (802 - 771), 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int aVt53DnHXb;
    scanf ("%d", &rdclPRe7g);
    aVt53DnHXb = (rdclPRe7g + 12) % 7;
    if (!(5 != aVt53DnHXb)) {
        printf ("%d\n", 1);
    }
    {
        i = 1;
        while (i <= 11) {
            aVt53DnHXb = (aVt53DnHXb + a[i]) % 7;
            if (aVt53DnHXb == 5) {
                printf ("%d\n", i + 1);
            }
            i = i + 1;
        };
    }
    return 0;
}

