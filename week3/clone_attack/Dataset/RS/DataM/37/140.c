int main () {
    int uIJRSMz5;
    int fB3fQdwHo5y9 [(286 - 260)];
    int dJy0oY;
    int j;
    int aZn9FP21qK3l;
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
    char OSOwoyW [100000];
    scanf ("%d", &uIJRSMz5);
    {
        dJy0oY = 0;
        while (uIJRSMz5 > dJy0oY) {
            scanf ("%s", OSOwoyW);
            aZn9FP21qK3l = strlen (OSOwoyW);
            {
                j = 0;
                while (26 > j) {
                    fB3fQdwHo5y9[j] = 0;
                    j++;
                };
            }
            {
                j = 0;
                while (aZn9FP21qK3l > j) {
                    fB3fQdwHo5y9[OSOwoyW[j] - 'a']++;
                    j++;
                };
            }
            for (j = 0; aZn9FP21qK3l > j; j = j + 1) {
                if (!((18 - 17) != fB3fQdwHo5y9[OSOwoyW[j] - 'a']))
                    break;
            }
            dJy0oY++;
            if (j < aZn9FP21qK3l - 1)
                printf ("%c\n", OSOwoyW[j]);
            else
                printf ("no\n");
        };
    }
    return 0;
}

