int main () {
    int c;
    int KFGa14czn;
    int FebTtmlOj8 [100000];
    int SWyZu9Ft2Md;
    c = 0;
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
    scanf ("%d", &KFGa14czn);
    {
        int YlGa9xtIjmZ = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (YlGa9xtIjmZ < KFGa14czn) {
            scanf ("%d", &FebTtmlOj8[YlGa9xtIjmZ]);
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
            YlGa9xtIjmZ++;
        };
    }
    scanf ("%d", &SWyZu9Ft2Md);
    for (int YlGa9xtIjmZ = 0;
    YlGa9xtIjmZ < KFGa14czn -c; YlGa9xtIjmZ++) {
        if (FebTtmlOj8[YlGa9xtIjmZ] == SWyZu9Ft2Md) {
            {
                int OT8n9hDcxH2 = YlGa9xtIjmZ;
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
                while (OT8n9hDcxH2 < KFGa14czn -c) {
                    FebTtmlOj8[OT8n9hDcxH2] = FebTtmlOj8[OT8n9hDcxH2 +1];
                    OT8n9hDcxH2++;
                };
            }
            c++;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            YlGa9xtIjmZ--;
        };
    }
    {
        int YlGa9xtIjmZ = 0;
        while (YlGa9xtIjmZ < KFGa14czn -c) {
            if (YlGa9xtIjmZ == KFGa14czn -c - 1)
                printf ("%d", FebTtmlOj8[YlGa9xtIjmZ]);
            else
                printf ("%d ", FebTtmlOj8[YlGa9xtIjmZ]);
            YlGa9xtIjmZ++;
        };
    }
    return 0;
}

