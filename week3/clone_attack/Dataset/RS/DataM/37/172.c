main () {
    int *a;
    int *WXiKnt4aE6wJ;
    int YPeJgWX, ugMIuBwX, v367IWc8, cX9hzcgkfs, x;
    char bhmqbVd2H9S;
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
    a = (int *) malloc (26 * sizeof (int));
    WXiKnt4aE6wJ = (int *) malloc (26 * sizeof (int));
    scanf ("%d", &v367IWc8);
    scanf ("%c", &bhmqbVd2H9S);
    {
        YPeJgWX = 0;
        while (YPeJgWX < v367IWc8) {
            for (ugMIuBwX = 0; 26 > ugMIuBwX; ugMIuBwX = ugMIuBwX + 1) {
                *(a + ugMIuBwX) = 0;
                *(WXiKnt4aE6wJ +ugMIuBwX) = 0;
            }
            while ((bhmqbVd2H9S < 'a') || (bhmqbVd2H9S > 'z')) {
                scanf ("%c", &bhmqbVd2H9S);
            }
            ugMIuBwX = 1;
            while ((bhmqbVd2H9S >= 'a') && (bhmqbVd2H9S <= 'z')) {
                *(a + bhmqbVd2H9S - 'a') = *(a + bhmqbVd2H9S - 'a') + 1;
                if (*(a + bhmqbVd2H9S - 'a') == 1)
                    *(WXiKnt4aE6wJ +bhmqbVd2H9S - 'a') = ugMIuBwX;
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
                ugMIuBwX++;
                scanf ("%c", &bhmqbVd2H9S);
            }
            cX9hzcgkfs = 100002;
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
            x = -1;
            for (ugMIuBwX = 0; ugMIuBwX < 26; ugMIuBwX = ugMIuBwX + 1) {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                if ((*(a + ugMIuBwX) == 1) && (*(WXiKnt4aE6wJ +ugMIuBwX) < cX9hzcgkfs)) {
                    cX9hzcgkfs = *(WXiKnt4aE6wJ +ugMIuBwX);
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
                    x = ugMIuBwX;
                };
            }
            if (x < 0) {
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
            else {
                printf ("%c\n", 'a' + x);
            }
            YPeJgWX = YPeJgWX +1;
        };
    };
}

