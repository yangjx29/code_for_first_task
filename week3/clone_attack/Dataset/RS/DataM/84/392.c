int main () {
    int vxgbdRrcO [1000];
    int Qx0IAM4C;
    int ASul0myB;
    int e;
    int k;
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
    scanf ("%d", &Qx0IAM4C);
    for (ASul0myB = 0; Qx0IAM4C > ASul0myB; ASul0myB++) {
        scanf ("%d", &vxgbdRrcO[ASul0myB]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    for (k = Qx0IAM4C; 1 < k; k--) {
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
        for (ASul0myB = 0; k - 1 > ASul0myB; ASul0myB++) {
            if (vxgbdRrcO[ASul0myB] < vxgbdRrcO[ASul0myB +1]) {
                e = vxgbdRrcO[ASul0myB];
                vxgbdRrcO[ASul0myB] = vxgbdRrcO[ASul0myB +1];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                vxgbdRrcO[ASul0myB +1] = e;
            };
        };
    }
    printf ("%d\n%d\n", vxgbdRrcO[0], vxgbdRrcO[1]);
    return 0;
}

