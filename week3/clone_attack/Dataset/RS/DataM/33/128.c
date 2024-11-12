int main () {
    char jj [1000] [255];
    int n, qwkTnNgqL8, cJ2Dhw;
    scanf ("%d", &n);
    {
        qwkTnNgqL8 = 0;
        while (qwkTnNgqL8 < n) {
            scanf ("%s", jj[qwkTnNgqL8]);
            {
                cJ2Dhw = 0;
                while (jj[qwkTnNgqL8][cJ2Dhw]) {
                    if (!('A' != jj[qwkTnNgqL8][cJ2Dhw]))
                        jj[qwkTnNgqL8][cJ2Dhw] = 'T';
                    else if (jj[qwkTnNgqL8][cJ2Dhw] == 'T')
                        jj[qwkTnNgqL8][cJ2Dhw] = 'A';
                    else if (jj[qwkTnNgqL8][cJ2Dhw] == 'C')
                        jj[qwkTnNgqL8][cJ2Dhw] = 'G';
                    else if (jj[qwkTnNgqL8][cJ2Dhw] == 'G')
                        jj[qwkTnNgqL8][cJ2Dhw] = 'C';
                    cJ2Dhw++;
                };
            }
            printf ("%s\n", jj[qwkTnNgqL8]);
            qwkTnNgqL8++;
        };
    }
    return 0;
}

