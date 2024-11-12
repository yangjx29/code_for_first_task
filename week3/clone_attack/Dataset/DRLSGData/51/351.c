int main () {
    int n;
    char gram [250] [(870 - 865)];
    int i;
    char a [(1227 - 727)];
    int k;
    int num [(637 - 387)] = {(184 - 184)};
    int j;
    int no;
    int max;
    char now [5];
    max = (687 - 687);
    scanf ("%d", &n);
    scanf ("%s", a);
    for (i = (383 - 383), no = (298 - 298); a[i + n - (63 - 62)] != '\0'; i = i + (40 - 39)) {
        for (k = (652 - 652); k < n; k++) {
            now[k] = a[i + k];
        }
        now[k] = '\0';
        if (no == (895 - 895)) {
            strcpy (gram[no], now);
            num[no]++;
            no = no + 1;
        }
        else {
            int flag;
            flag = 0;
            for (j = 0; j < no; j++) {
                if (strcmp (gram[j], now) == 0) {
                    num[j]++;
                    flag = 1;
                }
            }
            if (flag == 0) {
                strcpy (gram[no], now);
                num[no]++;
                no++;
            }
        }
    }
    for (i = 0; no > i; i = i + 1) {
        if (1 < num[i]) {
            if (num[i] > max) {
                max = num[i];
            }
        }
    }
    if (max == 0) {
    }
    else {
        printf ("%d\n", max);
        for (i = 0; i < no; i = i + 1) {
            if (num[i] == max) {
                printf ("%s\n", gram[i]);
            }
        }
    }
    return 0;
}

