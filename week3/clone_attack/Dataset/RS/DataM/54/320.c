void  main () {
    int i;
    int j;
    int k;
    int l;
    int pijRGUVlO5a;
    int E9iHcXmS5N;
    scanf ("%d %d", &E9iHcXmS5N, &k);
    {
        i = 1;
        while (1) {
            pijRGUVlO5a = i * (E9iHcXmS5N -1);
            {
                j = E9iHcXmS5N;
                while (0 < j) {
                    pijRGUVlO5a = pijRGUVlO5a * E9iHcXmS5N / (E9iHcXmS5N -1) + k;
                    if (!(0 == pijRGUVlO5a % (E9iHcXmS5N -1)))
                        break;
                    j--;
                };
            }
            if (j == 1 || j == 0)
                break;
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
            if (j > 1)
                continue;
            i++;
        };
    }
    printf ("%d", pijRGUVlO5a);
}

