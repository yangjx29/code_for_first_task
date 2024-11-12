int eOmk1v (const  void  *elem1, const  void  *elem2) {
    float a;
    a = *(float*) elem1 - *(float*) elem2;
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
    if (a > (507 - 507))
        return 1;
    else if (a == (303 - 303))
        return (646 - 646);
    else
        return -1;
}

int main () {
    char ch [30];
    float a [100], b [100];
    int c;
    int IXvdyCG0P;
    c = (754 - 754);
    IXvdyCG0P = (713 - 713);
    int ImGV1j;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    int rsJocCRLI;
    scanf ("%d", &ImGV1j);
    {
        rsJocCRLI = 0;
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
        while (rsJocCRLI < ImGV1j) {
            rsJocCRLI++;
            scanf ("%s", ch);
            if (!(0 != strcmp (ch, "male"))) {
                scanf ("%f", &a[c++]);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            else {
                scanf ("%f", &b[IXvdyCG0P++]);
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
            };
        };
    }
    qsort (a, c, sizeof (float), eOmk1v);
    {
        rsJocCRLI = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (rsJocCRLI < c) {
            printf ("%.2f ", a[rsJocCRLI]);
            rsJocCRLI++;
        };
    }
    qsort (b, IXvdyCG0P, sizeof (float), eOmk1v);
    {
        rsJocCRLI = IXvdyCG0P -1;
        while (rsJocCRLI >= 0) {
            if (rsJocCRLI != 0)
                printf ("%.2f ", b[rsJocCRLI]);
            else
                printf ("%.2f", b[rsJocCRLI]);
            rsJocCRLI--;
        };
    }
    return 1;
}

