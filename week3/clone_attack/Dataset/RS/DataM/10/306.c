int main () {
    int a [M];
    int jSyiWqgxsIB [M];
    int n;
    int YU9SAPIbV1t0;
    int j;
    int XbgyB2;
    int longest;
    longest = (197 - 196);
    scanf ("%d", &n);
    for (YU9SAPIbV1t0 = (183 - 183); n > YU9SAPIbV1t0; YU9SAPIbV1t0++) {
        scanf ("%d", &a[YU9SAPIbV1t0]);
    }
    {
        YU9SAPIbV1t0 = 593 - 593;
        while (YU9SAPIbV1t0 < n) {
            jSyiWqgxsIB[YU9SAPIbV1t0] = 1;
            XbgyB2 = 1;
            for (j = (954 - 954); YU9SAPIbV1t0 > j; j = j + 1) {
                if (a[YU9SAPIbV1t0] <= a[j])
                    XbgyB2 = jSyiWqgxsIB[j] + 1;
                if (jSyiWqgxsIB[YU9SAPIbV1t0] < XbgyB2)
                    jSyiWqgxsIB[YU9SAPIbV1t0] = XbgyB2;
            }
            if (jSyiWqgxsIB[YU9SAPIbV1t0] > longest)
                longest = jSyiWqgxsIB[YU9SAPIbV1t0];
            YU9SAPIbV1t0 = YU9SAPIbV1t0 +1;
        };
    }
    printf ("%d\n", longest);
    return 0;
}

