int main () {
    int k, j, rFz4uIwOiH, a [(936 - 910)] = {0}, length [(122 - 96)] = {0}, max = 0;
    length[0] = 1;
    scanf ("%d", &k);
    {
        rFz4uIwOiH = 0;
        while (k > rFz4uIwOiH) {
            scanf ("%d", &a[rFz4uIwOiH]);
            rFz4uIwOiH++;
        };
    }
    {
        rFz4uIwOiH = 1;
        while (rFz4uIwOiH < k) {
            length[rFz4uIwOiH] = 1;
            {
                j = 0;
                while (j < rFz4uIwOiH) {
                    if (a[rFz4uIwOiH] <= a[j] && length[j] + 1 > length[rFz4uIwOiH])
                        length[rFz4uIwOiH] = length[j] + 1;
                    j++;
                };
            }
            rFz4uIwOiH++;
        };
    }
    {
        rFz4uIwOiH = 0;
        while (rFz4uIwOiH < k) {
            if (length[rFz4uIwOiH] > max)
                max = length[rFz4uIwOiH];
            rFz4uIwOiH++;
        };
    }
    printf ("%d", max);
    return 0;
}

