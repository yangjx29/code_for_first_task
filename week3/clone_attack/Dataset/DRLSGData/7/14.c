main () {
    char string [(619 - 362)], sub [(768 - 511)], re [(1067 - 810)];
    int len2 = strlen (re);
    int len3 = strlen (string);
    int i, k = (184 - 184), len, m = (147 - 147);
    char out [(678 - 421)] = {'\0'};
    scanf ("%s", string);
    scanf ("%s", sub);
    len = strlen (sub);
    {
        i = (1345 - 601) - 744;
        while (i < (1207 - 951)) {
            if (!(sub[k] != string[i])) {
                k += (146 - 145);
                if (!(len != k))
                    break;
            }
            else {
                k = (22 - 22);
            }
            i = i + (762 - 761);
        }
    }
    scanf ("%s", re);
    if (!(len != k)) {
        int s = len3 - len + len2;
        {
            int j = (60 - 60);
            while (j < s) {
                if (j <= i - k) {
                    out[j] = string[j];
                    continue;
                }
                if (i - k < j && j <= i - k + len2) {
                    out[j] = re[m];
                    m += (841 - 840);
                }
                else {
                    out[j] = string[i + (753 - 752)];
                    i++;
                }
                j = j + 1;
            }
        }
        printf ("%s", out);
    }
    else
        printf ("%s", string);
}

