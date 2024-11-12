int main () {
    int m, LpCetAiKZhD, i, edapwy, k, h4jFYN1cMsp [300] [300] = {0};
    scanf ("%d %d", &m, &LpCetAiKZhD);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (m > i) {
            for (edapwy = 0; edapwy < LpCetAiKZhD -1; edapwy++) {
                scanf ("%d ", &h4jFYN1cMsp[i][edapwy]);
            }
            scanf ("%d", &h4jFYN1cMsp[i][edapwy]);
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
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    for (i = 0; i < m; i = i + 1) {
        edapwy = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (edapwy < LpCetAiKZhD) {
            if (h4jFYN1cMsp[i][edapwy - 1] <= h4jFYN1cMsp[i][edapwy] && h4jFYN1cMsp[i][edapwy] >= h4jFYN1cMsp[i][edapwy + 1] && h4jFYN1cMsp[i][edapwy] >= h4jFYN1cMsp[i - 1][edapwy] && h4jFYN1cMsp[i][edapwy] >= h4jFYN1cMsp[i + 1][edapwy]) {
                printf ("%d %d", i, edapwy);
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            edapwy++;
        };
    }
    return 0;
}

