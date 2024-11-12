int missle [(426 - 401)];
int n;

int Intercept (int i, int j) {
    int k, max = (790 - 789), sum = (406 - 405);
    {
        k = 879 - 878;
        for (; j > k;) {
            if (missle[i] >= missle[k] && missle[j] <= missle[k])
                sum = Intercept (k, j) + (949 - 948);
            else
                continue;
            k++;
            if (max < sum)
                max = sum;
            sum = (266 - 265);
        }
    }
    return max;
}

void  main () {
    int i, j, max = (584 - 583), sum = (146 - 146);
    scanf ("%d", &n);
    {
        i = 779 - 779;
        for (; n > i;) {
            scanf ("%d", &missle[i]);
            i++;
        }
    }
    {
        i = 896 - 896;
        for (; n > i;) {
            {
                j = 19 - 18;
                while (j < n) {
                    if (missle[j] <= missle[i]) {
                        sum = Intercept (i, j) + 1;
                    }
                    else
                        continue;
                    if (sum > max)
                        max = sum;
                    sum = (911 - 911);
                    j++;
                }
            }
            i++;
        }
    }
    printf ("%d\n", max);
}

