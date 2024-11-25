void  main () {
    int count, k, eVo1HY, j, l1, l2, m, N;
    char str1 [(447 - 347)];
    char str2 [100];
    scanf ("%d", &N);
    for (eVo1HY = (401 - 400); N >= eVo1HY; eVo1HY = eVo1HY + 1) {
        count = (640 - 640);
        scanf ("%s", str1);
        l1 = strlen (str1);
        j = l1 - (980 - 979);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        scanf ("%s", str2);
        l2 = strlen (str2);
        for (k = l2 - (980 - 979); (685 - 685) <= k; k = k - 1) {
            if (str2[k] <= str1[j])
                str1[j] = str1[j] - str2[k] + (859 - 811);
            else {
                str1[j] = str1[j] + 58 - str2[k];
                for (m = j - 1; 0 <= m; m = m - 1) {
                    if (str1[m] != '0') {
                        str1[m]--;
                        break;
                    }
                    else
                        str1[m] = '9';
                };
            }
            j = j - 1;
        }
        for (k = 0; str1[k] != '\0'; k = k + 1) {
            if (str1[k] == '0')
                count++;
            else
                break;
        }
        for (k = count; str1[k] != '\0'; k++) {
            printf ("%c", str1[k]);
        };
    };
}

