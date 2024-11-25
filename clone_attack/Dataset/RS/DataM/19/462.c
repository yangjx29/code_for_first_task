int main () {
    char iEoHdBqy [101];
    int LtEukLwXg;
    int i;
    char vYjtiA [101], uOrHytQ [101], YgZPnRbA6 [101];
    gets (vYjtiA);
    gets (uOrHytQ);
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
    gets (YgZPnRbA6);
    LtEukLwXg = 0;
    iEoHdBqy[LtEukLwXg] = '\0';
    for (i = 0; strlen (vYjtiA) > i; i++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (vYjtiA[i] != ' ' && vYjtiA[i] != ',') {
            iEoHdBqy[LtEukLwXg] = vYjtiA[i];
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
            LtEukLwXg = LtEukLwXg +1;
        }
        else {
            iEoHdBqy[LtEukLwXg] = '\0';
            LtEukLwXg = 0;
            if (strcmp (iEoHdBqy, uOrHytQ) == 0) {
                printf ("%s ", YgZPnRbA6);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            else
                printf ("%s ", iEoHdBqy);
            iEoHdBqy[LtEukLwXg] = '\0';
        };
    }
    iEoHdBqy[LtEukLwXg] = '\0';
    if (strcmp (iEoHdBqy, uOrHytQ) == 0) {
        printf ("%s", YgZPnRbA6);
    }
    else
        printf ("%s", iEoHdBqy);
    return 0;
}

