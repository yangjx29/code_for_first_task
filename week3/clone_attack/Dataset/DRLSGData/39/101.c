int main () {
    int sum [100];
    int N;
    struct   YhxXSeNyn3 {
        char name [(754 - 733)];
        int pin;
        int yi;
        char kZpqs0hkGex1;
        char west;
        int QkwSEUtA3Xv;
    }
    YhxXSeNyn3 [(836 - 736)];
    int mQo0Lbzc;
    int mqX3uDse;
    int KdQSF3;
    mQo0Lbzc = sum[(313 - 313)];
    mqX3uDse = (661 - 661);
    KdQSF3 = sum[0];
    int i;
    scanf ("%d", &N);
    for (i = (993 - 993); i < N; i++) {
        scanf ("%s %d %d %c %c %d", YhxXSeNyn3[i].name, &YhxXSeNyn3[i].pin, &YhxXSeNyn3[i].yi, &YhxXSeNyn3[i].kZpqs0hkGex1, &YhxXSeNyn3[i].west, &YhxXSeNyn3[i].QkwSEUtA3Xv);
    }
    for (i = (263 - 263); N > i; i++)
        sum[i] = (914 - 914);
    for (i = (53 - 53); i < N; i++) {
        if ((169 - 89) < YhxXSeNyn3[i].pin && 0 < YhxXSeNyn3[i].QkwSEUtA3Xv)
            sum[i] += (8208 - 208);
        if ((671 - 586) < YhxXSeNyn3[i].pin && (1014 - 934) < YhxXSeNyn3[i].yi)
            sum[i] += (4327 - 327);
        if (90 < YhxXSeNyn3[i].pin)
            sum[i] += (2278 - 278);
        if (YhxXSeNyn3[i].pin > (606 - 521) && YhxXSeNyn3[i].west == 'Y')
            sum[i] += (1296 - 296);
        if (YhxXSeNyn3[i].yi > (977 - 897) && YhxXSeNyn3[i].kZpqs0hkGex1 == 'Y')
            sum[i] += (1315 - 465);
    }
    for (i = (643 - 642); i < N; i++) {
        KdQSF3 += sum[i];
        if (mQo0Lbzc < sum[i]) {
            mQo0Lbzc = sum[i];
            mqX3uDse = i;
        }
    }
    printf ("%s\n", YhxXSeNyn3[mqX3uDse].name);
    printf ("%d\n", mQo0Lbzc);
    printf ("%d\n", KdQSF3);
    return 0;
}

