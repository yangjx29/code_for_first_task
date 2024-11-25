int main () {
    int start;
    int end;
    int i;
    int j;
    int k;
    start = (206 - 206);
    end = 0;
    char a1 [257 * (940 - 938)];
    char a2 [257];
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
    char xho3WNE5m [257];
    gets (a1);
    gets (a2);
    gets (xho3WNE5m);
    {
        i = 0;
        while (a1[i] != 0) {
            if (a1[i] == a2[0]) {
                for (j = i + (708 - 707), k = 1; a2[k] != 0; j++, k++) {
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    if (!(a2[k] == a1[j])) {
                        break;
                    };
                }
                if (a2[k] == 0) {
                    start = i;
                    end = j;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    break;
                };
            }
            i++;
        };
    }
    if (start < end) {
        for (i = start, k = 0; xho3WNE5m[k] != 0; i++, k++) {
            a1[i] = xho3WNE5m[k];
        }
        {
            j = end;
            while (a1[j] != 0) {
                a1[i] = a1[j];
                j++;
                i++;
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
        a1[i] = 0;
    }
    printf (a1);
    return 0;
}

