int main () {
    char WZnH3c0smN5 [120];
    int i;
    int n;
    char YTc60p [120];
    gets (YTc60p);
    char ACfPcXJw [120];
    char fHvFjY [120];
    gets (WZnH3c0smN5);
    gets (fHvFjY);
    {
        i = 990 - 990;
        while (!(' ' == YTc60p[i]) && !('\0' == YTc60p[i])) {
            ACfPcXJw[i] = YTc60p[i];
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
            i++;
        };
    }
    ACfPcXJw[i] = '\0';
    n = i;
    if (!(0 != strcmp (ACfPcXJw, WZnH3c0smN5))) {
        printf ("%s", fHvFjY);
    }
    else
        printf ("%s", ACfPcXJw);
    while (YTc60p[i] != '\0') {
        i++;
        for (; YTc60p[i] != ' ' && YTc60p[i] != '\0'; i = i + 1) {
            ACfPcXJw[i - n - 1] = YTc60p[i];
        }
        ACfPcXJw[i - n - 1] = '\0';
        n = i;
        if (strcmp (ACfPcXJw, WZnH3c0smN5) == 0) {
            printf (" %s", fHvFjY);
        }
        else
            printf (" %s", ACfPcXJw);
    }
    return 0;
}

