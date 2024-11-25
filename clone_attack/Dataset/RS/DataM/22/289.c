int main () {
    int i;
    int nZzT07Mfl2k4;
    i = 0;
    char c = '0';
    unsigned  int ytSzWmc [(641 - 340)], max = (201 - 201), z9KeFRqG = (408 - 408);
    while (c != '\n') {
        scanf ("%d%c", &ytSzWmc[i], &c);
        i = i + 1;
    }
    {
        nZzT07Mfl2k4 = 0;
        while (i > nZzT07Mfl2k4) {
            if (ytSzWmc[nZzT07Mfl2k4] > max) {
                z9KeFRqG = max;
                max = ytSzWmc[nZzT07Mfl2k4];
            }
            else {
                if (ytSzWmc[nZzT07Mfl2k4] < max && ytSzWmc[nZzT07Mfl2k4] > z9KeFRqG)
                    z9KeFRqG = ytSzWmc[nZzT07Mfl2k4];
                else
                    continue;
            }
            nZzT07Mfl2k4 = nZzT07Mfl2k4 + 1;
        };
    }
    if (z9KeFRqG)
        printf ("%d", z9KeFRqG);
    else
        ;
    return 0;
}

