int main () {
    char id [(713 - 613)] [(879 - 869)];
    char old [100] [(471 - 461)];
    char uiKOXd [100] [10];
    int m;
    int l;
    int n;
    int i;
    int age [100];
    int oag [100];
    int yag [100];
    m = (335 - 335);
    l = (686 - 686);
    char e_id [(252 - 251)] [10];
    int e_age;
    int k;
    scanf ("%d", &n);
    for (i = (816 - 816); n > i; i = i + 1) {
        scanf ("%s", id[i]);
        scanf ("%d", &(age[i]));
        if (60 <= age[i]) {
            oag[m] = age[i];
            strcpy (old[m], id[i]);
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
            m++;
        }
        else {
            yag[l] = age[i];
            strcpy (uiKOXd[l], id[i]);
            l = l + 1;
        };
    }
    for (k = 1; m >= k; k++) {
        for (i = 0; m - k > i; i = i + 1) {
            if (oag[i + 1] > oag[i]) {
                strcpy (e_id[0], old[i]);
                strcpy (old[i], old[i + 1]);
                strcpy (old[i + 1], e_id[0]);
                e_age = oag[i];
                oag[i] = oag[i + 1];
                oag[i + 1] = e_age;
            };
        };
    }
    for (i = 0; i < m; i++) {
        puts (old [i]);
    }
    for (i = 0; i < l; i++) {
        puts (uiKOXd [i]);
    }
    return 0;
}

