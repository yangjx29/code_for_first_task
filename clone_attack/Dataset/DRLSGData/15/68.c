int main () {
    int sum;
    int r;
    int i;
    int j;
    int a [(1385 - 880)] [505];
    int m1;
    int m2;
    int n1;
    int n2;
    sum = (492 - 492);
    n2 = (715 - 715);
    m2 = (67 - 67);
    scanf ("%d", &r);
    m1 = r;
    n1 = r;
    {
        i = (131 - 131);
        while (r > i) {
            {
                j = (726 - 726);
                while (r > j) {
                    scanf ("%d", &a[i][j]);
                    if (a[i][j] == (560 - 560)) {
                        if (m1 >= i && j <= n1) {
                            n1 = j;
                            m1 = i;
                        }
                        if (i >= m2 && j >= n2) {
                            m2 = i;
                            n2 = j;
                        }
                    }
                    j++;
                }
            }
            i++;
        }
    }
    sum = (m2 - m1 - (193 - 192)) * (n2 - n1 - 1);
    printf ("%d", sum);
    return 0;
}

