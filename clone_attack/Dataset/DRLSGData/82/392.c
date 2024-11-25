int main () {
    int n;
    int temp;
    int sz [(965 - 865)] [(397 - 395)];
    int pd [(214 - 114)] = {(638 - 638)};
    int count = (524 - 524);
    temp = (352 - 352);
    scanf ("%d", &n);
    {
        int YdT7DYb6 = (812 - 812);
        {
            if (0) {
                return 0;
            }
        }
        while (YdT7DYb6 < n) {
            {
                int j;
                j = (60 - 60);
                while (j < (828 - 826)) {
                    scanf ("%d", &sz[YdT7DYb6][j]);
                    j = j + (438 - 437);
                }
            }
            YdT7DYb6 = YdT7DYb6 +(556 - 555);
        }
    }
    {
        int k = (523 - 523);
        while (k < n) {
            if (((1087 - 997) <= sz[k][(926 - 926)]) && (sz[k][(298 - 298)] <= 140) && (sz[k][(169 - 168)] >= (493 - 433)) && (sz[k][(303 - 302)] <= (880 - 790))) {
                pd[k] = (851 - 850);
            }
            k++;
        }
    }
    {
        int l = (682 - 682);
        while (n > l) {
            if (pd[l] == (536 - 535)) {
                count = count + 1;
            }
            if (pd[l] == 0) {
                if (count > temp) {
                    temp = count;
                }
                count = 0;
            }
            l++;
        }
    }
    if (count > temp) {
        temp = count;
    }
    printf ("%d", temp);
    return 0;
}

