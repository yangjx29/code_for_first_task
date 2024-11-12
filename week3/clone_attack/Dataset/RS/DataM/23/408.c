void  main () {
    char str2 [100], cV64H5cD0hal [100], str1 [100];
    puts (str1);
    int lwZFMp = 0, tU3Imjt, k, n = 0, Mget1f6uV5d;
    gets (str2);
    char *ngcFB92l, *AejwN0k5J;
    AejwN0k5J = str1;
    cV64H5cD0hal[0] = ' ';
    cV64H5cD0hal[1] = '\0';
    strcat (cV64H5cD0hal, str2);
    k = strlen (cV64H5cD0hal);
    Mget1f6uV5d = k;
    ngcFB92l = cV64H5cD0hal + k - 1;
    for (; 1;) {
        for (; *ngcFB92l != ' '; ngcFB92l--)
            lwZFMp = lwZFMp + 1;
        {
            tU3Imjt = 0;
            while (tU3Imjt < lwZFMp) {
                *AejwN0k5J = *(ngcFB92l + tU3Imjt + 1);
                AejwN0k5J++;
                tU3Imjt++;
            };
        }
        n = n + lwZFMp + 1;
        k = Mget1f6uV5d -n;
        if (ngcFB92l == cV64H5cD0hal)
            break;
        else {
            lwZFMp = 0;
            ngcFB92l = cV64H5cD0hal + k - 1;
        }
        *AejwN0k5J = ' ';
        AejwN0k5J++;
    }
    k = strlen (cV64H5cD0hal);
    AejwN0k5J = str1;
    *(AejwN0k5J +k - 1) = '\0';
}

