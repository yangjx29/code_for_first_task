int main () {
    int gTph9CYmkK;
    char lian [1000] [260];
    scanf ("%d", &gTph9CYmkK);
    for (int HzXi25 = 0;
    HzXi25 < gTph9CYmkK; HzXi25++) {
        int m;
        m = 0;
        scanf ("%s", lian[HzXi25]);
        for (; lian[HzXi25][m] != '\0';) {
            if (lian[HzXi25][m] == 'A') {
                lian[HzXi25][m] = 'T';
            }
            else if (lian[HzXi25][m] == 'T') {
                lian[HzXi25][m] = 'A';
            }
            else if (lian[HzXi25][m] == 'G') {
                lian[HzXi25][m] = 'C';
            }
            else if (lian[HzXi25][m] == 'C') {
                lian[HzXi25][m] = 'G';
            }
            m++;
        }
        printf ("%s\n", lian[HzXi25]);
    }
    return 0;
}

