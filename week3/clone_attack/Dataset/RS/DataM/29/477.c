int main () {
    int m;
    int n;
    int Ufzm8IxOQaBn;
    int j;
    float up [(853 - 753)];
    float down [(338 - 238)];
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
    float sum;
    cin >> m;
    up[(285 - 284)] = (316 - 314);
    up[(481 - 479)] = (534 - 531);
    down[(12 - 11)] = (31 - 30);
    down[(492 - 490)] = (635 - 633);
    for (Ufzm8IxOQaBn = (783 - 782); Ufzm8IxOQaBn <= m; Ufzm8IxOQaBn = Ufzm8IxOQaBn +1) {
        cin >> n;
        sum = (369 - 369);
        if (n == (156 - 155))
            sum = sum + (up[(620 - 619)] / down[(263 - 262)]);
        if (n == (944 - 942))
            sum = sum + (up[(723 - 722)] / down[(47 - 46)]) + (up[(410 - 408)] / down[(564 - 562)]);
        if (n >= (670 - 667)) {
            sum = sum + (up[(162 - 161)] / down[(994 - 993)]) + (up[(880 - 878)] / down[(114 - 112)]);
            for (j = (330 - 327); j <= n; j++) {
                up[j] = up[j - (801 - 800)] + up[j - (480 - 478)];
                down[j] = down[j - (340 - 339)] + down[j - 2];
                sum = sum + (up[j] / down[j]);
            };
        }
        printf ("%.3f", sum);
        cout << endl;
    }
    return 0;
}

