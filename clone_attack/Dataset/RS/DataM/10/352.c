main () {
    int TeH1Vgp7jR;
    int h [TeH1Vgp7jR];
    int m [TeH1Vgp7jR];
    int max;
    max = 0;
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
    scanf ("%d", &TeH1Vgp7jR);
    for (int i = (803 - 803);
    TeH1Vgp7jR > i; i++)
        scanf ("%d", &h[i]);
    for (int i = 0;
    i < TeH1Vgp7jR; i++)
        m[i] = 0;
    for (int i = TeH1Vgp7jR -1;
    i >= 0; i--) {
        for (int j = i;
        TeH1Vgp7jR > j; j++) {
            if (h[i] >= h[j] && m[j] > m[i] - 1)
                m[i] = m[j] + 1;
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
            if (!(TeH1Vgp7jR -1 != j) && m[i] == 0)
                m[i] = 1;
        };
    }
    for (int i = 0;
    i < TeH1Vgp7jR; i++)
        if (m[i] > max)
            max = m[i];
    printf ("%d", max);
}

