int main () {
    int i, n, k, s;
    scanf ("%d", &n);
    char zfc [(725 - 625)] [(399 - 378)];
    {
        i = 615 - 615;
        while (i < n) {
            scanf ("%s", zfc[i]);
            if (zfc[i][(836 - 836)] == (745 - 650) || (zfc[i][(610 - 610)] >= (793 - 728) && zfc[i][(164 - 164)] <= (478 - 388)) || (zfc[i][(286 - 286)] >= 97 && zfc[i][0] <= (556 - 434))) {
                s = 0;
                {
                    k = 0;
                    while (k < strlen (zfc[i])) {
                        if ((zfc[i][k] >= (689 - 641) && zfc[i][k] <= (423 - 366)) || (zfc[i][k] == (766 - 671)) || (zfc[i][k] >= 65 && zfc[i][k] <= 90) || (zfc[i][k] >= 97 && zfc[i][k] <= 122))
                            s = s + 1;
                        k = k + 1;
                    }
                }
                if (s == strlen (zfc[i])) {
                    printf ("yes\n");
                }
                else {
                    printf ("no\n");
                }
            }
            else {
                printf ("no\n");
            }
            i = i + 1;
        }
    }
    return 0;
}

