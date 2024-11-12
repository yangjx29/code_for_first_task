void  main () {
    char str1 [(516 - 416)];
    char str2 [100];
    gets (str1);
    gets (str2);
    int VctLQTKxG;
    {
        VctLQTKxG = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (1) {
            if (str1[VctLQTKxG] == '\0')
                break;
            if (str1[VctLQTKxG] != '\0') {
                if (str1[VctLQTKxG] <= 122 && 97 <= str1[VctLQTKxG]) {
                    str1[VctLQTKxG] = str1[VctLQTKxG] - 32;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    };
                };
            }
            VctLQTKxG = VctLQTKxG +1;
        };
    }
    {
        VctLQTKxG = 0;
        while (1) {
            if (str2[VctLQTKxG] == '\0')
                break;
            if (str2[VctLQTKxG] != '\0') {
                if (str2[VctLQTKxG] <= 122 && str2[VctLQTKxG] >= 97) {
                    str2[VctLQTKxG] = str2[VctLQTKxG] - 32;
                };
            }
            VctLQTKxG++;
        };
    }
    if (strcmp (str1, str2) == 0) {
        printf ("=");
    }
    else if (strcmp (str1, str2) > 0)
        printf (">");
    else
        printf ("<");
}

