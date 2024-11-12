int main () {
    int iMyXip;
    int i;
    double  shu [100] [2];
    double  fMwaZSu4JQ = shu[0][1] / shu[0][0];
    scanf ("%d", &iMyXip);
    scanf ("%lf %lf", &shu[0][0], &shu[0][1]);
    {
        i = 1;
        while (i < iMyXip) {
            scanf ("%lf %lf", &shu[i][0], &shu[i][1]);
            if (shu[i][1] / shu[i][0] - fMwaZSu4JQ > 0.05) {
            }
            else if (fMwaZSu4JQ - shu[i][1] / shu[i][0] > 0.05) {
            }
            else {
            }
            i++;
        };
    }
    return 0;
}

