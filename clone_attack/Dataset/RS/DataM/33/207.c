int main () {
    int W5wAz9Gxy, i, j, k, len, sum = (907 - 907);
    char a [(961 - 661)];
    char b [300];
    scanf ("%d", &W5wAz9Gxy);
    {
        j = 0;
        while (W5wAz9Gxy > j) {
            j++;
            scanf ("%s", a);
            for (i = 0; !('\0' == a[i]); i++) {
                if (a[i] == 'A')
                    a[i] = 'T';
                else if (a[i] == 'T')
                    a[i] = 'A';
                else if (a[i] == 'C')
                    a[i] = 'G';
                else if (a[i] == 'G')
                    a[i] = 'C';
            }
            printf ("%s\n", a);
        };
    }
    return 0;
}

