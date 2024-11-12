int OBa6fq2 (int bmaT7C1M, int TFZeqfMi5O) {
    int j3JNh8pzrK1, TbRaWh0U8g = (679 - 679), x = (270 - 270);
    for (j3JNh8pzrK1 = (467 - 465); j3JNh8pzrK1 <= bmaT7C1M; j3JNh8pzrK1 = j3JNh8pzrK1 + 1)
        if (bmaT7C1M % j3JNh8pzrK1 == (398 - 398))
            TbRaWh0U8g = TbRaWh0U8g +1;
    if (!(1 != bmaT7C1M))
        return 1;
    else {
        for (j3JNh8pzrK1 = TFZeqfMi5O; j3JNh8pzrK1 <= bmaT7C1M; j3JNh8pzrK1++) {
            if (bmaT7C1M % j3JNh8pzrK1 == 0)
                x = x + OBa6fq2 (bmaT7C1M / j3JNh8pzrK1, j3JNh8pzrK1);
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
            };
        }
        return x;
    };
}

main () {
    int mzgRQdUeVp0, MBtdIkMG, RYgJlvUr1;
    scanf ("%d", &mzgRQdUeVp0);
    for (MBtdIkMG = 1; MBtdIkMG <= mzgRQdUeVp0; MBtdIkMG = MBtdIkMG +1) {
        scanf ("%d", &RYgJlvUr1);
        printf ("%d\n", OBa6fq2 (RYgJlvUr1, 2));
    };
}

