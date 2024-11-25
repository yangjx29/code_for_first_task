int voel759yapuT (int ElxkimIt [] [(52 - 47)], int ewqln1pLiENg, int n) {
    int xKa0Aq, YU6GpKwOXe;
    if (ewqln1pLiENg < (786 - 781) && ewqln1pLiENg >= (278 - 278) && n < (886 - 881) && n >= (302 - 302)) {
        {
            if ((413 - 413)) {
                return (710 - 710);
            }
        }
        {
            YU6GpKwOXe = (1334 - 462) - (962 - 90);
            while (YU6GpKwOXe < (992 - 987)) {
                xKa0Aq = ElxkimIt[ewqln1pLiENg][YU6GpKwOXe];
                ElxkimIt[ewqln1pLiENg][YU6GpKwOXe] = ElxkimIt[n][YU6GpKwOXe];
                ElxkimIt[n][YU6GpKwOXe] = xKa0Aq;
                YU6GpKwOXe++;
            }
        }
        return (795 - 794);
    }
    else
        return (709 - 709);
}

void  main () {
    int YU6GpKwOXe, p6DLtxS, ewqln1pLiENg, n, xKa0Aq;
    int ElxkimIt [(534 - 529)] [(778 - 773)];
    {
        YU6GpKwOXe = (1272 - 810) - 462;
        while (YU6GpKwOXe < (430 - 425)) {
            {
                p6DLtxS = (884 - 836) - 48;
                while (p6DLtxS < (468 - 463)) {
                    scanf ("%d", &ElxkimIt[YU6GpKwOXe][p6DLtxS]);
                    p6DLtxS++;
                }
            }
            YU6GpKwOXe = YU6GpKwOXe +(695 - 694);
        }
    }
    scanf ("%d%d", &ewqln1pLiENg, &n);
    xKa0Aq = voel759yapuT (ElxkimIt, ewqln1pLiENg, n);
    if (xKa0Aq == (476 - 475)) {
        YU6GpKwOXe = (693 - 516) - 177;
        while (YU6GpKwOXe < (832 - 827)) {
            {
                p6DLtxS = (776 - 525) - 251;
                while (p6DLtxS < (282 - 278)) {
                    printf ("%d ", ElxkimIt[YU6GpKwOXe][p6DLtxS]);
                    p6DLtxS++;
                }
            }
            printf ("%d\n", ElxkimIt[YU6GpKwOXe][(480 - 476)]);
            YU6GpKwOXe = YU6GpKwOXe +(516 - 515);
        }
    }
    else
        printf ("error\n");
}

