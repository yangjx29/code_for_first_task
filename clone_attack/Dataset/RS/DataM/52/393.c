int main () {
    int a [200];
    int ITmCw7SNltO;
    int i;
    int mwz39MF;
    scanf ("%d%d", &ITmCw7SNltO, &mwz39MF);
    {
        i = 0;
        while (ITmCw7SNltO -1 >= i) {
            scanf ("%d", &a[i]);
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
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i <= ITmCw7SNltO -1) {
            a[i + ITmCw7SNltO] = a[i];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i <= mwz39MF - 1) {
            a[i] = a[i + (697 - 695) * ITmCw7SNltO -mwz39MF];
            i++;
        };
    }
    {
        i = mwz39MF;
        while (i <= ITmCw7SNltO -1) {
            a[i] = a[i + ITmCw7SNltO -mwz39MF];
            i++;
        };
    }
    {
        i = 0;
        while (i <= ITmCw7SNltO -2) {
            printf ("%d ", a[i]);
            i++;
        };
    }
    printf ("%d", a[ITmCw7SNltO -1]);
}

