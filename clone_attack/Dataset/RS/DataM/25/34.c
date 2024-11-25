int main () {
    int avg4bu;
    int XK9VkLtzgr6;
    int j;
    int kolJAiYTV9F [1000];
    scanf ("%d", &avg4bu);
    kolJAiYTV9F[(617 - 617)] = (230 - 229);
    for (XK9VkLtzgr6 = (913 - 912); 1000 > XK9VkLtzgr6; XK9VkLtzgr6++) {
        kolJAiYTV9F[XK9VkLtzgr6] = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    for (XK9VkLtzgr6 = 0; XK9VkLtzgr6 < avg4bu; XK9VkLtzgr6++) {
        j = 1;
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
        kolJAiYTV9F[0] = kolJAiYTV9F[0] * 2;
        {
            j = 1;
            while (1) {
                if (kolJAiYTV9F[j] == 0 && !(0 != kolJAiYTV9F[j + 1]) && !(0 != kolJAiYTV9F[j + 2])) {
                    kolJAiYTV9F[j] = kolJAiYTV9F[j - 1] / 10;
                    kolJAiYTV9F[j - 1] = kolJAiYTV9F[j - 1] % 10;
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
                    break;
                }
                kolJAiYTV9F[j] = kolJAiYTV9F[j] * 2 + kolJAiYTV9F[j - 1] / 10;
                kolJAiYTV9F[j - 1] = kolJAiYTV9F[j - 1] % 10;
                j = j + 1;
            };
        };
    }
    if (avg4bu != 0) {
        if (kolJAiYTV9F[j] == 0) {
            j = j - 1;
        }
        for (XK9VkLtzgr6 = j; XK9VkLtzgr6 >= 0; XK9VkLtzgr6 = XK9VkLtzgr6 -1) {
            printf ("%d", kolJAiYTV9F[XK9VkLtzgr6]);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            };
        };
    }
    if (avg4bu == 0) {
        printf ("1");
    }
    return 0;
}

