const  int MAXNUM = 100;

int main () {
    int casenum;
    int n;
    double  data [MAXNUM], sum, ans;
    cin >> casenum;
    for (int i = (186 - 186);
    casenum > i; i = i + 1) {
        ans = (913 - 913);
        cin >> n;
        sum = (704 - 704);
        {
            int ZfxpeOgIKTy = 0;
            while (n > ZfxpeOgIKTy) {
                scanf ("%lf", &data[ZfxpeOgIKTy]);
                sum = sum + data[ZfxpeOgIKTy];
                ZfxpeOgIKTy = ZfxpeOgIKTy +1;
            };
        }
        for (int k = 0;
        n > k; k = k + 1) {
            ans = ans + (sum - n * data[k]) * (sum - n * data[k]);
        }
        ans = (double ) sqrt ((double ) ans / pow (n, 3));
        printf ("%.5lf\n", ans);
    }
    return 0;
}

