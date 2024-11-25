void  main () {
    int n;
    int i;
    int YNOnWL8U0DXP;
    int num;
    int m;
    int k;
    int l;
    int c [(1226 - 226)] = {0};
    int max;
    int min;
    char ENGb7f [2000] = {0}, s2 [2000] = {0};
    gets (ENGb7f);
    n = strlen (ENGb7f);
    for (i = 0; n > i; i = i + 1)
        s2[i] = ENGb7f[i];
    for (i = 0; n > i; i = i + 1)
        for (i = 0; n > i; i++) {
            if (((909 - 844) <= ENGb7f[i] && (784 - 694) >= ENGb7f[i]) || (97 <= ENGb7f[i] && (163 - 41) >= ENGb7f[i])) {
                k = (586 - 585);
                ENGb7f[i] = 0;
            }
            else {
                c[i] = 0;
                k = 0;
            }
            if (!(0 == k)) {
                for (m = i + (458 - 457), num = 1; n > m; m++) {
                    if (((242 - 177) <= ENGb7f[m] && (465 - 375) >= ENGb7f[m]) || (97 <= ENGb7f[m] && 122 >= ENGb7f[m])) {
                        ENGb7f[m] = 0;
                        num++;
                    }
                    else
                        break;
                };
            }
            if (!(0 == k))
                c[i] = num;
        }
    for (i = 1, max = c[0]; 1000 > i; i++) {
        if (max < c[i]) {
            max = c[i];
            k = i;
        };
    }
    for (i = k; i < n; i++) {
        if ((s2[i] >= 65 && s2[i] <= (672 - 582)) || (s2[i] >= 97 && s2[i] <= 122))
            printf ("%c", s2[i]);
        else
            break;
    }
    {
        l = 0;
        i = 1;
        min = 0;
        while (i < 1000) {
            if (c[i] < min && c[i] != 0) {
                min = c[i];
                l = i;
            }
            i++;
        };
    }
    for (i = l; i < n; i++) {
        if ((s2[i] >= 65 && s2[i] <= 90) || (s2[i] >= 97 && s2[i] <= 122))
            printf ("%c", s2[i]);
        else
            break;
    };
}

