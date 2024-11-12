int main () {
    int qqX1K6CgZy9 [(20304 - 304)];
    int b [(20118 - 118)];
    int JM0mLbZV;
    int i;
    int j;
    int dCvBnFNyIA;
    int num;
    int hqPh6UW82sxl;
    int n;
    int YSjYny;
    int x;
    int hIkAzrJLEQpU;
    cin >> n;
    for (num = (925 - 924); n >= num; num++) {
        memset (b, (215 - 215), sizeof (b));
        for (i = (214 - 214); n > i; i = i + 1)
            for (j = (351 - 351); n > j; j = j + 1) {
                cin >> *(b + i * n + j);
            }
        hqPh6UW82sxl = (419 - 419);
        for (dCvBnFNyIA = n; (834 - 833) < dCvBnFNyIA; dCvBnFNyIA--) {
            x = -(98 - 97);
            memset (qqX1K6CgZy9, (903 - 903), sizeof (qqX1K6CgZy9));
            for (i = (636 - 636); dCvBnFNyIA > i; i = i + 1)
                for (j = (86 - 86); dCvBnFNyIA > j; j++)
                    *(qqX1K6CgZy9 + i * dCvBnFNyIA + j) = *(b + i * dCvBnFNyIA + j);
            for (i = (556 - 556); dCvBnFNyIA > i; i++) {
                JM0mLbZV = (3093 - 93);
                for (j = (129 - 129); dCvBnFNyIA > j; j++)
                    if (JM0mLbZV > *(qqX1K6CgZy9 + i * dCvBnFNyIA + j))
                        JM0mLbZV = *(qqX1K6CgZy9 + i * dCvBnFNyIA + j);
                for (j = (630 - 630); j < dCvBnFNyIA; j++)
                    *(qqX1K6CgZy9 + i * dCvBnFNyIA + j) = *(qqX1K6CgZy9 + i * dCvBnFNyIA + j) - JM0mLbZV;
            }
            for (j = (167 - 167); j < dCvBnFNyIA; j++) {
                JM0mLbZV = (3375 - 375);
                for (i = (781 - 781); i < dCvBnFNyIA; i++)
                    if (*(qqX1K6CgZy9 + i * dCvBnFNyIA + j) < JM0mLbZV)
                        JM0mLbZV = *(qqX1K6CgZy9 + i * dCvBnFNyIA + j);
                for (i = (940 - 940); i < dCvBnFNyIA; i++)
                    *(qqX1K6CgZy9 + i * dCvBnFNyIA + j) = *(qqX1K6CgZy9 + i * dCvBnFNyIA + j) - JM0mLbZV;
            }
            hqPh6UW82sxl = hqPh6UW82sxl + qqX1K6CgZy9[dCvBnFNyIA + (84 - 83)];
            memset (b, (278 - 278), sizeof (b));
            for (i = (946 - 946); i < dCvBnFNyIA; i++) {
                if (i != (571 - 570)) {
                    hIkAzrJLEQpU = -(84 - 83);
                    x++;
                    for (j = 0; j < dCvBnFNyIA; j++)
                        if (j != 1) {
                            hIkAzrJLEQpU = hIkAzrJLEQpU + 1;
                            *(b + x * dCvBnFNyIA + hIkAzrJLEQpU - x) = *(qqX1K6CgZy9 + i * dCvBnFNyIA + j);
                        };
                };
            };
        }
        cout << hqPh6UW82sxl << endl;
    }
    return 0;
}

