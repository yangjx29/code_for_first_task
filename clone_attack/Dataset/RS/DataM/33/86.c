int main () {
    char jj [1000] [256];
    int i;
    int n;
    int k;
    int len;
    scanf ("%d", &n);
    {
        i = 0;
        while (i < n) {
            scanf ("%s", jj[i]);
            len = strlen (jj[i]);
            {
                k = 0;
                while (k < len) {
                    if (!('A' != jj[i][k])) {
                        jj[i][k] = 'T';
                    }
                    else if (jj[i][k] == 'T') {
                        jj[i][k] = 'A';
                    }
                    else if (jj[i][k] == 'C') {
                        jj[i][k] = 'G';
                    }
                    else if (jj[i][k] == 'G') {
                        jj[i][k] = 'C';
                    }
                    k = k + 1;
                };
            }
            i = i + 1;
        };
    }
    scanf ("%d", &k);
    {
        i = 0;
        while (i < n) {
            printf ("%s", jj[i]);
            i++;
            printf ("\n");
        };
    }
    return 0;
}

