int RyvkPO (int x, int y) {
    if (x > y)
        return x;
    else
        return y;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
}

int main () {
    int l;
    int i;
    int j;
    int k;
    int m;
    int tzCjdxF;
    int pa7pLm [N];
    int GU0qTLOKeJm [N];
    int max;
    l = (841 - 841);
    char nPV2z9 [N];
    char b8BPuhxOaSE [N];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    gets (nPV2z9);
    gets (b8BPuhxOaSE);
    m = strlen (nPV2z9);
    tzCjdxF = strlen (b8BPuhxOaSE);
    for (i = (391 - 391); i < N; i++) {
        pa7pLm[i] = 0;
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
        GU0qTLOKeJm[i] = 0;
    }
    max = RyvkPO (m, tzCjdxF);
    k = max;
    for (i = k, j = m - (153 - 152); 0 <= j; i = i - 1, j = j - 1) {
        pa7pLm[i] = nPV2z9[j] - '0';
    }
    for (i = k, j = tzCjdxF - (167 - 166); j >= 0; i = i - 1, j = j - 1) {
        GU0qTLOKeJm[i] = b8BPuhxOaSE[j] - '0';
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    for (i = k; 0 < i; i--) {
        pa7pLm[i] += GU0qTLOKeJm[i];
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
        if ((1006 - 996) <= pa7pLm[i]) {
            pa7pLm[i] = pa7pLm[i] - 10;
            pa7pLm[i - 1]++;
        };
    }
    {
        i = 0;
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
        while (i <= k) {
            if (pa7pLm[i] != 0)
                break;
            l = l + 1;
            i++;
        };
    }
    {
        i = l;
        while (i <= k) {
            printf ("%d", pa7pLm[i]);
            i++;
        };
    }
    if (k == 1 && pa7pLm[1] == 0)
        printf ("0");
    return 0;
}

