int main () {
    int vX8kszmVW [52] = {0};
    char sCL9fG17qi [1000];
    int len;
    len = strlen (sCL9fG17qi);
    int E4wanV2E8iD;
    int i;
    E4wanV2E8iD = 0;
    scanf ("%s", sCL9fG17qi);
    {
        i = 0;
        while (i < len) {
            if (65 <= sCL9fG17qi[i] && sCL9fG17qi[i] <= 90) {
                vX8kszmVW[sCL9fG17qi[i] - 65]++;
                if (!(0 != E4wanV2E8iD))
                    E4wanV2E8iD = 1;
            }
            else {
                if (sCL9fG17qi[i] >= 97 && 122 >= sCL9fG17qi[i]) {
                    if (E4wanV2E8iD == 0)
                        E4wanV2E8iD = 1;
                    vX8kszmVW[sCL9fG17qi[i] - 71]++;
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
            i = i + 1;
        };
    }
    if (E4wanV2E8iD == 0)
        printf ("No\n");
    else {
        {
            i = 0;
            while (i < 26) {
                if (vX8kszmVW[i] > 0)
                    printf ("%c=%d\n", i + 65, vX8kszmVW[i]);
                i = i + 1;
            };
        }
        {
            i = 26;
            while (i < 52) {
                if (vX8kszmVW[i] > 0)
                    printf ("%c=%d\n", i + 71, vX8kszmVW[i]);
                i = i + 1;
            };
        };
    }
    return 0;
}

