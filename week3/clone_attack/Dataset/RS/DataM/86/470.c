int main () {
    int YizDsVSTogqy;
    int JERhVQ;
    int Dxm8n0;
    int j;
    int yh0LqcZT;
    int UFfEXTv9 [10001];
    int a [10000];
    scanf ("%d", &YizDsVSTogqy);
    {
        Dxm8n0 = 0;
        while (Dxm8n0 < YizDsVSTogqy) {
            scanf ("%d", &JERhVQ);
            {
                j = 0;
                while (j < JERhVQ) {
                    scanf ("%d", &a[j]);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j = j + 1;
                };
            }
            if (a[JERhVQ -1] + 3 * JERhVQ < 60)
                UFfEXTv9[Dxm8n0] = 60 - 3 * JERhVQ;
            if (60 <= a[JERhVQ -1] + 3 * JERhVQ) {
                {
                    yh0LqcZT = JERhVQ -1;
                    while (0 <= yh0LqcZT) {
                        if ((a[yh0LqcZT] + 3 * (yh0LqcZT + 1)) <= 60)
                            break;
                        yh0LqcZT--;
                    };
                }
                if (60 - (a[yh0LqcZT] + 3 * (yh0LqcZT + 1)) + a[yh0LqcZT] > a[yh0LqcZT + 1])
                    UFfEXTv9[Dxm8n0] = 60 - 3 * (yh0LqcZT + 1) - 1;
                else
                    UFfEXTv9[Dxm8n0] = 60 - 3 * (yh0LqcZT + 1);
            }
            Dxm8n0 = Dxm8n0 +1;
        };
    }
    {
        Dxm8n0 = 0;
        while (Dxm8n0 < YizDsVSTogqy) {
            printf ("%d\n", UFfEXTv9[Dxm8n0]);
            Dxm8n0++;
        };
    }
    scanf ("%d", &YizDsVSTogqy);
    return 0;
}

