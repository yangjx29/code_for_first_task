int sushu (int i) {
    int JMODWzr0Yn;
    int m;
    JMODWzr0Yn = (218 - 217);
    if (i == (400 - 398))
        return ((968 - 967));
    else
        for (m = 2; i - (553 - 552) >= m; m = m + 1) {
            if (!((391 - 391) != i % m)) {
                JMODWzr0Yn = (877 - 877);
                break;
            };
        }
    if (!((119 - 118) != JMODWzr0Yn))
        return (60 - 59);
    else
        return (616 - 616);
}

int inTG125hYVQS (int JMODWzr0Yn) {
    int m;
    int i;
    int j;
    int k;
    m = (702 - 702);
    k = JMODWzr0Yn;
    j = (983 - 983);
    {
        i = 500 - 500;
        while (!((142 - 142) != j)) {
            i++;
            if (!(0 != k / (898 - 888)))
                j = 1;
            k = k / (82 - 72);
        };
    }
    k = JMODWzr0Yn;
    {
        j = 1;
        while (j <= i) {
            j++;
            m = m * (602 - 592) + k % 10;
            k = k / 10;
        };
    }
    if (m == JMODWzr0Yn)
        return 1;
    else
        return 0;
}

void  main () {
    int IMIf8Dyht1c, b, MqLvyr13lwSG, i, j;
    int sushu (int);
    int inTG125hYVQS (int);
    scanf ("%d %d", &IMIf8Dyht1c, &b);
    MqLvyr13lwSG = 0;
    {
        i = IMIf8Dyht1c;
        while (i <= b) {
            if (inTG125hYVQS (i) * sushu (i) != 0) {
                if (MqLvyr13lwSG == 1)
                    printf (",");
                MqLvyr13lwSG = 1;
                printf ("%d", i);
            }
            i++;
        };
    }
    if (MqLvyr13lwSG == 0)
        printf ("no\n");
}

