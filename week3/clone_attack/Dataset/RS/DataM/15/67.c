int main () {
    int i, j;
    static int a [1002] [1002];
    int n;
    int mVydPzgbKl;
    int Gixn8morLEsI;
    int S3v9DdWV;
    int y1;
    int gJIY0DWXivxl;
    scanf ("%d", &n);
    {
        i = 690 - 689;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n >= i) {
            for (j = (469 - 468); n >= j; j = j + 1) {
                scanf ("%d", &mVydPzgbKl);
                a[i][j] = (!((780 - 780) != mVydPzgbKl)) ? (382 - 381) : 0;
            }
            i++;
        };
    }
    {
        i = 214 - 213;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (n >= i) {
            for (j = 1; n >= j; j++)
                if (a[i][j] == 1) {
                    if ((a[i][j + 1] == 1) && (a[i + 1][j] == 1)) {
                        Gixn8morLEsI = i;
                        y1 = j;
                    }
                    if ((a[i][j - 1] == 1) && (a[i - 1][j] == 1)) {
                        gJIY0DWXivxl = j;
                        S3v9DdWV = i;
                    };
                }
            i++;
        };
    }
    printf ("%d\n", (S3v9DdWV -Gixn8morLEsI-1) * (gJIY0DWXivxl - y1 - 1));
    return 0;
}

