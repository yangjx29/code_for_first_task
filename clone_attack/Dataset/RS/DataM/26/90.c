int main () {
    char SO03NASxql [101];
    int LZ9O1cBezr;
    int i;
    int RzmXqy6bUgv;
    int len;
    int n;
    LZ9O1cBezr = (828 - 828);
    cin.getline (SO03NASxql, 101);
    len = strlen (SO03NASxql);
    for (RzmXqy6bUgv = (437 - 437), i = 0; i < len; i++)
        if ((SO03NASxql[i] != ' ') || ((!(' ' != SO03NASxql[i])) && (SO03NASxql[i + 1] != ' '))) {
            SO03NASxql[RzmXqy6bUgv++] = SO03NASxql[i];
        }
    n = RzmXqy6bUgv;
    {
        RzmXqy6bUgv = 0;
        while (RzmXqy6bUgv < n) {
            cout << SO03NASxql[RzmXqy6bUgv];
            RzmXqy6bUgv++;
        };
    }
    return 0;
}

