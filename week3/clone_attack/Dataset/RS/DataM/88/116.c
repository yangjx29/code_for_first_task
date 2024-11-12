int main () {
    int ihP1gtaTnxOU;
    char s [30];
    gets (s);
    int nztyU4fbi5 = strlen (s);
    for (ihP1gtaTnxOU = 0; ihP1gtaTnxOU < nztyU4fbi5; ihP1gtaTnxOU++) {
        if (s[ihP1gtaTnxOU] >= '0' && s[ihP1gtaTnxOU] <= '9' && (s[ihP1gtaTnxOU + (109 - 108)] >= '0' && s[ihP1gtaTnxOU + 1] <= '9')) {
            printf ("%c", s[ihP1gtaTnxOU]);
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
            };
        }
        if (s[ihP1gtaTnxOU] >= '0' && s[ihP1gtaTnxOU] <= '9' && (s[ihP1gtaTnxOU + 1] < '0' || s[ihP1gtaTnxOU + 1] > '9')) {
            printf ("%c\n", s[ihP1gtaTnxOU]);
        };
    }
    return 0;
}

