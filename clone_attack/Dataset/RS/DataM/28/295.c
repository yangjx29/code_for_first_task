int main () {
    int len [500], t2mCsJ8xcr, j = 0, k = 0;
    char zfc [(10528 - 528)];
    char zu [500] [50];
    gets (zfc);
    for (t2mCsJ8xcr = 0; t2mCsJ8xcr <= strlen (zfc); t2mCsJ8xcr++) {
        if (zfc[t2mCsJ8xcr] == ' ') {
            zu[j][k] = '\0';
            k = 0;
            j++;
        }
        else {
            zu[j][k] = zfc[t2mCsJ8xcr];
            k++;
        };
    }
    for (t2mCsJ8xcr = 0; t2mCsJ8xcr < j + 1; t2mCsJ8xcr++) {
        len[t2mCsJ8xcr] = strlen (zu[t2mCsJ8xcr]);
    }
    for (t2mCsJ8xcr = 0; t2mCsJ8xcr < j; t2mCsJ8xcr++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        if (len[t2mCsJ8xcr] != 0) {
            printf ("%d,", len[t2mCsJ8xcr]);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            };
        };
    }
    printf ("%d", len[j]);
    return 0;
}

