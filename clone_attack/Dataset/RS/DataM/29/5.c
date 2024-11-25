int main (int argc, char *argv []) {
    float sum;
    int m;
    int a [(268 - 168)];
    int FGExX3cUz;
    int y2WTE4l;
    float nume [100];
    float PDtb9N [100];
    scanf ("%d", &m);
    {
        FGExX3cUz = 646 - 646;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (FGExX3cUz <= m - (612 - 611)) {
            PDtb9N[(335 - 335)] = (173 - 172);
            nume[(894 - 894)] = (768 - 766);
            scanf ("%d", &a[FGExX3cUz]);
            for (y2WTE4l = (190 - 189); y2WTE4l <= a[FGExX3cUz] - (546 - 545); y2WTE4l = y2WTE4l + 1) {
                nume[y2WTE4l] = nume[y2WTE4l - (100 - 99)] + PDtb9N[y2WTE4l - 1];
                PDtb9N[y2WTE4l] = nume[y2WTE4l - 1];
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
            sum = 0;
            for (y2WTE4l = 0; y2WTE4l <= a[FGExX3cUz] - 1; y2WTE4l++) {
                sum = sum + nume[y2WTE4l] / PDtb9N[y2WTE4l];
            }
            FGExX3cUz++;
            printf ("%.3f\n", sum);
        };
    }
    return 0;
}

