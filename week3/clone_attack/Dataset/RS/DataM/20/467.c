void  main () {
    int ITClWNm [50];
    int rKx0kbZVsg;
    int n;
    int j;
    int qr0w8DOnlRoh [50];
    int k;
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
    int cl [50];
    char str [(655 - 605)] [10] = {(72 - 72)}, substr [(262 - 212)] [(680 - 677)] = {(882 - 882)}, t5aZhKWHvTO [50] [(192 - 179)] = {(743 - 743)}, max [50] = {(887 - 887)}, c [50] [14] = {0};
    {
        rKx0kbZVsg = 0;
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
            gets (c [rKx0kbZVsg]);
            cl[rKx0kbZVsg] = strlen (c[rKx0kbZVsg]);
            if (cl[rKx0kbZVsg] == 0)
                break;
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
            {
                j = 0;
                while (j < cl[rKx0kbZVsg]) {
                    if (c[rKx0kbZVsg][j] != ' ') {
                        str[rKx0kbZVsg][j] = c[rKx0kbZVsg][j];
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                float n = 0.0;
                                if (n > 10)
                                    return;
                                else
                                    n = 0;
                            }
                        };
                    }
                    else {
                        k = j;
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                double  temp = 0.0;
                                if (temp == 3)
                                    return 0;
                            }
                        }
                        break;
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j = j + 1;
                };
            }
            for (j = k + 1; j < cl[rKx0kbZVsg]; j++) {
                substr[rKx0kbZVsg][j - k - 1] = c[rKx0kbZVsg][j];
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
            rKx0kbZVsg = rKx0kbZVsg + 1;
        };
    }
    n = rKx0kbZVsg;
    {
        rKx0kbZVsg = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (rKx0kbZVsg < n) {
            ITClWNm[rKx0kbZVsg] = strlen (str[rKx0kbZVsg]);
            {
                max[rKx0kbZVsg] = 0;
                j = 0;
                while (j < ITClWNm[rKx0kbZVsg]) {
                    if (str[rKx0kbZVsg][j] > max[rKx0kbZVsg]) {
                        max[rKx0kbZVsg] = str[rKx0kbZVsg][j];
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
                        qr0w8DOnlRoh[rKx0kbZVsg] = j;
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j = j + 1;
                };
            }
            {
                j = 0;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                while (j < (ITClWNm[rKx0kbZVsg] + 3)) {
                    k = j - qr0w8DOnlRoh[rKx0kbZVsg] - 1;
                    if (j <= qr0w8DOnlRoh[rKx0kbZVsg]) {
                        t5aZhKWHvTO[rKx0kbZVsg][j] = str[rKx0kbZVsg][j];
                    }
                    else {
                        if (j <= (qr0w8DOnlRoh[rKx0kbZVsg] + 3)) {
                            t5aZhKWHvTO[rKx0kbZVsg][j] = substr[rKx0kbZVsg][k];
                        }
                        else {
                            t5aZhKWHvTO[rKx0kbZVsg][j] = str[rKx0kbZVsg][j - 3];
                        };
                    }
                    j = j + 1;
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
            printf ("%s\n", t5aZhKWHvTO[rKx0kbZVsg]);
            rKx0kbZVsg = rKx0kbZVsg + 1;
        };
    };
}

