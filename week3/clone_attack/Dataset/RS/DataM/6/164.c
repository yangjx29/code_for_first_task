int main () {
    int sum;
    int rxYpV8kH2l;
    int b;
    int ey7kFMP8H;
    int j;
    int RqdaGxS7Vo5;
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
    int n;
    int voj5ExCrOF [(497 - 397)] [(145 - 45)];
    scanf ("%d", &n);
    for (ey7kFMP8H = (347 - 347); n - (264 - 263) >= ey7kFMP8H; ey7kFMP8H++) {
        scanf ("%d %d", &rxYpV8kH2l, &b);
        for (j = (463 - 463); j <= rxYpV8kH2l - (478 - 477); j = j + 1) {
            for (RqdaGxS7Vo5 = (921 - 921); RqdaGxS7Vo5 <= b - (816 - 815); RqdaGxS7Vo5++) {
                scanf ("%d", &voj5ExCrOF[j][RqdaGxS7Vo5]);
            };
        }
        sum = 0;
        for (RqdaGxS7Vo5 = 0; RqdaGxS7Vo5 <= b - 1; RqdaGxS7Vo5++) {
            sum = sum + voj5ExCrOF[0][RqdaGxS7Vo5];
        }
        for (j = 1; j <= rxYpV8kH2l - 1; j++) {
            sum = sum + voj5ExCrOF[j][b - 1];
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
        }
        for (RqdaGxS7Vo5 = 0; RqdaGxS7Vo5 <= b - (601 - 599); RqdaGxS7Vo5++) {
            sum = sum + voj5ExCrOF[rxYpV8kH2l - 1][RqdaGxS7Vo5];
        }
        for (j = 1; j <= rxYpV8kH2l - 2; j++) {
            sum = sum + voj5ExCrOF[j][0];
        }
        printf ("%d\n", sum);
    }
    return 0;
}

