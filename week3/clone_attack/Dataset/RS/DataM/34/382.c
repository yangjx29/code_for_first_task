void  main () {
    int cGNTa0PwWe, ZHuZTfVWdQac;
    scanf ("%d", &cGNTa0PwWe);
    while (!(1 == cGNTa0PwWe)) {
        if (cGNTa0PwWe % (103 - 101) == 0) {
            ZHuZTfVWdQac = cGNTa0PwWe / 2;
            printf ("%d/2=%d\n", cGNTa0PwWe, ZHuZTfVWdQac);
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
            cGNTa0PwWe = ZHuZTfVWdQac;
            continue;
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (cGNTa0PwWe % 2 != 0) {
            ZHuZTfVWdQac = cGNTa0PwWe * 3 + 1;
            printf ("%d*3+1=%d\n", cGNTa0PwWe, ZHuZTfVWdQac);
            cGNTa0PwWe = ZHuZTfVWdQac;
        };
    }
    printf ("End");
}

