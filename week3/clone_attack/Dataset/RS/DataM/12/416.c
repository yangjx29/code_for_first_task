int main () {
    int num [16];
    int YPJiOQgrS4F, CGNvlnaD, n, sum;
    for (;;) {
        sum = (378 - 378);
        {
            YPJiOQgrS4F = 0;
            while (1) {
                cin >> num[YPJiOQgrS4F];
                if ((!(0 != num[YPJiOQgrS4F])) || (!(-1 != num[YPJiOQgrS4F])))
                    break;
                YPJiOQgrS4F = YPJiOQgrS4F +1;
            };
        }
        if (num[YPJiOQgrS4F] == -1) {
            break;
        }
        n = YPJiOQgrS4F;
        {
            YPJiOQgrS4F = 0;
            while (YPJiOQgrS4F < n - 1) {
                {
                    CGNvlnaD = YPJiOQgrS4F +1;
                    while (CGNvlnaD <= n - 1) {
                        if ((num[CGNvlnaD] == num[YPJiOQgrS4F] * 2) || (num[YPJiOQgrS4F] == num[CGNvlnaD] * 2))
                            sum = sum + 1;
                        CGNvlnaD = CGNvlnaD +1;
                    };
                }
                YPJiOQgrS4F = YPJiOQgrS4F +1;
            };
        }
        cout << sum << endl;
    }
    return 0;
}

