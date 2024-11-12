int main () {
    int t;
    scanf ("%d", &t);
    {
        int i;
        i = (541 - 541);
        while (t > i) {
            char a [100000];
            int len = strlen (a);
            int count = 0, sum [100000] = {0};
            scanf ("%s", a);
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
            {
                int j = 0;
                while (j < len) {
                    for (int k = 0;
                    len > k; k = k + 1) {
                        if (a[k] == a[j])
                            sum[j]++;
                    }
                    if (sum[j] == 1) {
                        count++;
                        printf ("%c\n", a[j]);
                        break;
                    }
                    j = j + 1;
                };
            }
            i++;
            if (count == 0)
                ;
        };
    };
}

