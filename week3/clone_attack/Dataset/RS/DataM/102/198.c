int main () {
    char D [50] [10];
    double  w, r, RpLDINm [100] = {0}, YoG1NWPLl [100] = {0};
    int MjbCZS1vPD8, i, e, GWa4xMcIy = (557 - 557), TN13wnMPWZ = 0;
    scanf ("%d", &MjbCZS1vPD8);
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
        while (i < MjbCZS1vPD8) {
            scanf ("%s%lf", D[i], &w);
            if (D[i][0] == 'm') {
                RpLDINm[GWa4xMcIy] = w;
                GWa4xMcIy = GWa4xMcIy +1;
            }
            else {
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (D[i][0] == 'f') {
                    YoG1NWPLl[TN13wnMPWZ] = w;
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
                    TN13wnMPWZ++;
                };
            }
            i = i + 1;
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
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (TN13wnMPWZ > i) {
            i = i + 1;
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
            {
                e = TN13wnMPWZ -1;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                while (0 < e) {
                    if (YoG1NWPLl[e] > YoG1NWPLl[e - 1]) {
                        r = YoG1NWPLl[e];
                        YoG1NWPLl[e] = YoG1NWPLl[e - 1];
                        YoG1NWPLl[e - 1] = r;
                    }
                    e = e - 1;
                };
            };
        };
    }
    for (i = 0; i < GWa4xMcIy; i++) {
        e = GWa4xMcIy -1;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (e > 0) {
            if (RpLDINm[e] < RpLDINm[e - 1]) {
                r = RpLDINm[e];
                RpLDINm[e] = RpLDINm[e - 1];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                RpLDINm[e - 1] = r;
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
            e--;
        };
    }
    {
        i = 0;
        while (i < GWa4xMcIy) {
            printf ("%0.2lf ", RpLDINm[i]);
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < TN13wnMPWZ) {
            if (i < TN13wnMPWZ -1) {
                printf ("%0.2lf ", YoG1NWPLl[i]);
            }
            else {
                if (i == TN13wnMPWZ -1) {
                    printf ("%0.2lf", YoG1NWPLl[i]);
                };
            }
            i++;
        };
    }
    return 0;
}

