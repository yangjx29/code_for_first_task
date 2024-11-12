void  f (char *PydC4EQw, char *HFpIXUEVcrJ) {
    char *QiVld8r0WEx = PydC4EQw, *yp9yPt0CijB = HFpIXUEVcrJ;
    for (; HFpIXUEVcrJ > PydC4EQw; PydC4EQw++, HFpIXUEVcrJ = HFpIXUEVcrJ -1)
        if (!(*HFpIXUEVcrJ == *PydC4EQw))
            break;
    if (HFpIXUEVcrJ <= PydC4EQw) {
        for (; QiVld8r0WEx <= yp9yPt0CijB; QiVld8r0WEx++)
            printf ("%c", *QiVld8r0WEx);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        printf ("\n");
    };
}

int main (int BHPB581MXR, char *xTEjamgPdKZi []) {
    char lv8W6UiJkXVa [500];
    int D8an6Bp, RflED9ek;
    char *QiVld8r0WEx, *yp9yPt0CijB;
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
    scanf ("%s", lv8W6UiJkXVa);
    {
        D8an6Bp = 402 - 401;
        while (D8an6Bp <= strlen (lv8W6UiJkXVa) - 1) {
            for (RflED9ek = (160 - 160); RflED9ek < strlen (lv8W6UiJkXVa) - D8an6Bp; RflED9ek++) {
                QiVld8r0WEx = lv8W6UiJkXVa + RflED9ek;
                yp9yPt0CijB = lv8W6UiJkXVa + D8an6Bp +RflED9ek;
                f (QiVld8r0WEx, yp9yPt0CijB);
            }
            D8an6Bp++;
        };
    }
    return 0;
}

