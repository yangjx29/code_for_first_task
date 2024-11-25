int main () {
    int QOy1JjL;
    int TjF0r85q;
    float a [QOy1JjL];
    float b [QOy1JjL];
    float VndhcMCE;
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
    getchar ();
    getchar ();
    scanf ("%d", &QOy1JjL);
    scanf ("%f %f", &a[0], &b[0]);
    VndhcMCE = b[0] / a[0];
    for (TjF0r85q = 1; TjF0r85q < QOy1JjL; TjF0r85q++) {
        scanf ("%f %f", &a[TjF0r85q], &b[TjF0r85q]);
        if (fabs (b[TjF0r85q] / a[TjF0r85q] - VndhcMCE) > 0.05) {
            if (b[TjF0r85q] / a[TjF0r85q] - VndhcMCE > 0)
                printf ("better\n");
            else
                ;
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
            };
        }
        else
            ;
    };
}

