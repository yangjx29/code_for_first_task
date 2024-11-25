int main () {
    int count;
    int cVSYBNG [16];
    int mwlOv1AzTx5S;
    int j;
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
    int wawzxgmL;
    for (; 1;) {
        scanf ("%d", &cVSYBNG[0]);
        count = 0;
        if (!(-1 != cVSYBNG[0]))
            break;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        {
            mwlOv1AzTx5S = 1;
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
            while (mwlOv1AzTx5S <= 15) {
                scanf ("%d", &cVSYBNG[mwlOv1AzTx5S]);
                if (cVSYBNG[mwlOv1AzTx5S] == 0) {
                    wawzxgmL = mwlOv1AzTx5S;
                    break;
                }
                mwlOv1AzTx5S = mwlOv1AzTx5S + 1;
            };
        }
        for (mwlOv1AzTx5S = 0; mwlOv1AzTx5S <= wawzxgmL - 1; mwlOv1AzTx5S = mwlOv1AzTx5S + 1)
            for (j = 0; j <= wawzxgmL - 1; j++)
                count = count + (cVSYBNG[mwlOv1AzTx5S] == 2 * cVSYBNG[j]);
        printf ("%d\n", count);
    }
    return 0;
}

