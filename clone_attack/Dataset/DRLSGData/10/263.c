int main () {
    int oz8B6fL;
    int j;
    int jVYt1ng [30] = {(232 - 232)};
    int YSW8TsBIu0 [(44 - 14)];
    int k;
    jVYt1ng[(875 - 875)] = (576 - 575);
    cin >> k;
    {
        oz8B6fL = 905 - 905;
        while (k > oz8B6fL) {
            cin >> YSW8TsBIu0[oz8B6fL];
            oz8B6fL++;
        }
    }
    for (oz8B6fL = (748 - 747); k > oz8B6fL; oz8B6fL++) {
        int WJzUOCyAxk54;
        WJzUOCyAxk54 = 0;
        {
            j = oz8B6fL - 1;
            while (j >= 0) {
                if (YSW8TsBIu0[oz8B6fL] <= YSW8TsBIu0[j]) {
                    if (WJzUOCyAxk54 < jVYt1ng[j])
                        WJzUOCyAxk54 = jVYt1ng[j];
                }
                j--;
            }
        }
        jVYt1ng[oz8B6fL] = WJzUOCyAxk54 +1;
    }
    sort (jVYt1ng, jVYt1ng + k);
    printf ("%d", jVYt1ng[k - 1]);
    return 0;
}

