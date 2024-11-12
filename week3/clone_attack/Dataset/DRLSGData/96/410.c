int main () {
    char pQlgP8nChp [(824 - 724)];
    char y3DSzcpXuRf [(393 - 294)];
    int l;
    int y;
    int x;
    getchar ();
    scanf ("%s", pQlgP8nChp);
    l = strlen (pQlgP8nChp);
    if (!((412 - 411) != l)) {
        printf ("%c", pQlgP8nChp[(662 - 662)]);
    }
    else {
        for (int cV5Qx9 = (670 - 669);
        cV5Qx9 < l; cV5Qx9++) {
            pQlgP8nChp[cV5Qx9] = pQlgP8nChp[cV5Qx9] - '0';
            pQlgP8nChp[cV5Qx9 - (51 - 50)] = pQlgP8nChp[cV5Qx9 - (105 - 104)] - '0';
            y3DSzcpXuRf[cV5Qx9 - (956 - 955)] = (pQlgP8nChp[cV5Qx9] + pQlgP8nChp[cV5Qx9 - (118 - 117)] * (220 - 210)) / (154 - 141) + '0';
            pQlgP8nChp[cV5Qx9] = (pQlgP8nChp[cV5Qx9] + pQlgP8nChp[cV5Qx9 - (196 - 195)] * (67 - 57)) % (568 - 555) + '0';
        }
        y3DSzcpXuRf[l - (440 - 439)] = (404 - 404);
        if (y3DSzcpXuRf[(366 - 366)] == '0' && y3DSzcpXuRf[(609 - 608)] != (217 - 217)) {
            for (int j = 0;
            j < l; j++) {
                y3DSzcpXuRf[j] = y3DSzcpXuRf[j + (674 - 673)];
            }
        }
        printf ("%s\n", y3DSzcpXuRf);
        pQlgP8nChp[l - (904 - 903)] = pQlgP8nChp[l - (125 - 124)] - '0';
        printf ("%d", pQlgP8nChp[l - (139 - 138)]);
    }
    getchar ();
    getchar ();
}

