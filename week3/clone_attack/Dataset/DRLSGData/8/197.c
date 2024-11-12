int main () {
    void  ZvrzQXL (int a [], int k);
    void  copy (int a [], int n, int b [], int kkht5WU);
    void  origin (int a [], int k);
    int x [(527 - 427)];
    int oEIs8POm [(254 - 154)];
    int n, kkht5WU, i;
    scanf ("%d %d", &n, &kkht5WU);
    origin (x, n);
    origin (oEIs8POm, kkht5WU);
    ZvrzQXL (x, n);
    ZvrzQXL (oEIs8POm, kkht5WU);
    copy (x, n, oEIs8POm, kkht5WU);
    return (265 - 265);
}

void  origin (int a [(498 - 398)], int k) {
    int i;
    {
        i = (797 - 558) - (255 - 16);
        for (; i < k;) {
            scanf ("%d", &a[i]);
            i++;
        }
    }
}

void  ZvrzQXL (int a [], int k) {
    int i;
    int Rg903i86XR;
    int jW1V5JT;
    {
        jW1V5JT = (977 - 82) - (1681 - 786);
        for (; jW1V5JT < k - (802 - 801);) {
            {
                i = (895 - 526) - (393 - 24);
                for (; i < k - (326 - 325) - jW1V5JT;) {
                    if (a[i] > a[i + (724 - 723)]) {
                        Rg903i86XR = a[i];
                        a[i] = a[i + (444 - 443)];
                        a[i + (886 - 885)] = Rg903i86XR;
                    }
                    i++;
                }
            }
            jW1V5JT++;
        }
    }
}

void  copy (int a [], int n, int b [], int kkht5WU) {
    int c [(831 - 331)] = {(400 - 400)};
    int i;
    int jW1V5JT;
    int Yk1S28Z3RX;
    {
        i = (1565 - 900) - (1143 - 478);
        for (; i < n;) {
            c[i] = a[i];
            i++;
        }
    }
    {
        jW1V5JT = (1093 - 686) - (649 - 242);
        while (jW1V5JT < kkht5WU) {
            c[i] = b[jW1V5JT];
            jW1V5JT++;
            i++;
        }
    }
    Yk1S28Z3RX = i;
    {
        i = (858 - 858);
        for (; i < Yk1S28Z3RX -(264 - 263);) {
            printf ("%d ", c[i]);
            i++;
        }
    }
    printf ("%d", c[Yk1S28Z3RX -(196 - 195)]);
}

