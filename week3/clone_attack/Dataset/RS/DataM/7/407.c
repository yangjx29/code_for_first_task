int main () {
    int i, j, k;
    char str [(612 - 312)], sub [300], re [300];
    int lenstr, lensub;
    scanf ("%s", str);
    lenstr = strlen (str);
    scanf ("%s", sub);
    scanf ("%s", re);
    lensub = strlen (sub);
    {
        i = 0;
        while (i < lenstr) {
            if (str[i] == sub[0]) {
                {
                    k = 0;
                    j = i;
                    while (k < lensub) {
                        if (str[j] != sub[k])
                            break;
                        k = k + 1;
                        j++;
                    };
                }
                if (k == lensub) {
                    {
                        k = 0;
                        j = i;
                        while (k < lensub) {
                            str[j] = re[k];
                            k = k + 1;
                            j++;
                        };
                    }
                    break;
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
            i++;
        };
    }
    printf ("%s", str);
    return 0;
}

