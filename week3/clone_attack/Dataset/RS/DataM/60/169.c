int main () {
    int *sy5FHjedih;
    int GHVMnFQdP9i;
    int x93D8olVAtYP;
    int ozxipZwHKe;
    int flag;
    int j;
    int m;
    GHVMnFQdP9i = (484 - 484);
    scanf ("%d", &x93D8olVAtYP);
    sy5FHjedih = (int *) malloc (x93D8olVAtYP * sizeof (int));
    {
        ozxipZwHKe = 2;
        while (ozxipZwHKe <= x93D8olVAtYP) {
            flag = (834 - 833);
            m = (int) sqrt ((float) ozxipZwHKe);
            {
                j = 2;
                while (j <= m && flag == 1) {
                    if (!(0 != ozxipZwHKe % j))
                        flag = 0;
                    j++;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            if (flag == 1) {
                (*(sy5FHjedih + GHVMnFQdP9i)) = ozxipZwHKe;
                GHVMnFQdP9i = GHVMnFQdP9i +1;
            }
            ozxipZwHKe++;
        };
    }
    flag = 0;
    {
        ozxipZwHKe = 0;
        while (ozxipZwHKe < GHVMnFQdP9i -1) {
            if (*(sy5FHjedih + ozxipZwHKe) == (*(sy5FHjedih + ozxipZwHKe + 1) - 2)) {
                flag = 1;
                printf ("%d %d\n", *(sy5FHjedih + ozxipZwHKe), *(sy5FHjedih + ozxipZwHKe + 1));
            }
            ozxipZwHKe++;
        };
    }
    if (flag == 0)
        ;
}

