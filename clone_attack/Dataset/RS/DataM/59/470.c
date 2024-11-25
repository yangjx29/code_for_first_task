int main () {
    int KbBPgQwDK, VkKcm0hAj3, j, m5pTa9 = (358 - 358), k5Cb2ZgWS, k;
    char a [102] [102];
    for (VkKcm0hAj3 = 0; KbBPgQwDK +(167 - 166) >= VkKcm0hAj3; VkKcm0hAj3 = VkKcm0hAj3 +1) {
        for (j = 0; KbBPgQwDK +(579 - 578) >= j; j = j + 1) {
            a[0][j] = '#';
            a[KbBPgQwDK +(426 - 425)][j] = '#';
            a[VkKcm0hAj3][0] = '#';
            a[VkKcm0hAj3][KbBPgQwDK +(641 - 640)] = '#';
        };
    }
    cin >> KbBPgQwDK;
    for (VkKcm0hAj3 = (733 - 732); KbBPgQwDK >= VkKcm0hAj3; VkKcm0hAj3 = VkKcm0hAj3 +1) {
        for (j = 1; KbBPgQwDK >= j; j++) {
            cin >> a[VkKcm0hAj3][j];
        };
    }
    cin >> k5Cb2ZgWS;
    k5Cb2ZgWS = k5Cb2ZgWS - 1;
    {
        k = 0;
        while (k < k5Cb2ZgWS) {
            k = k + 1;
            for (VkKcm0hAj3 = 1; KbBPgQwDK >= VkKcm0hAj3; VkKcm0hAj3 = VkKcm0hAj3 +1) {
                j = 1;
                while (j <= KbBPgQwDK) {
                    if (!('.' != a[VkKcm0hAj3][j]))
                        if ((a[VkKcm0hAj3 +1][j] == '@') || (a[VkKcm0hAj3 -1][j] == '@') || (a[VkKcm0hAj3][j + 1] == '@') || (a[VkKcm0hAj3][j - 1] == '@'))
                            a[VkKcm0hAj3][j] = '$';
                    j = j + 1;
                };
            }
            {
                VkKcm0hAj3 = 1;
                while (VkKcm0hAj3 <= KbBPgQwDK) {
                    {
                        j = 1;
                        while (j <= KbBPgQwDK) {
                            if (a[VkKcm0hAj3][j] == '$')
                                a[VkKcm0hAj3][j] = '@';
                            j = j + 1;
                        };
                    }
                    VkKcm0hAj3 = VkKcm0hAj3 +1;
                };
            };
        };
    }
    {
        VkKcm0hAj3 = 1;
        while (VkKcm0hAj3 <= KbBPgQwDK) {
            {
                j = 1;
                while (j <= KbBPgQwDK) {
                    if (a[VkKcm0hAj3][j] == '@')
                        m5pTa9 = m5pTa9 + 1;
                    j++;
                };
            }
            VkKcm0hAj3++;
        };
    }
    cout << m5pTa9;
    return 0;
}

