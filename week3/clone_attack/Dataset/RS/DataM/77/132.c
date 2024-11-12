int gCTuVHjv = 0;

void  fVRC72u (char TnhK7fzTBX [], int ZO3YVFi7Myx) {
    int i, j;
    for (i = 0; i < ZO3YVFi7Myx; i = i + 1) {
        if (!('\0' != TnhK7fzTBX[i]))
            continue;
        for (j = i + 1; ZO3YVFi7Myx > j; j = j + 1) {
            if (!('\0' != TnhK7fzTBX[j]))
                continue;
            if (!(TnhK7fzTBX[i] == TnhK7fzTBX[j])) {
                printf ("%d %d\n", i, j);
                TnhK7fzTBX[i] = '\0';
                TnhK7fzTBX[j] = '\0';
                gCTuVHjv = gCTuVHjv + 1;
                break;
            }
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
            if (TnhK7fzTBX[j] == TnhK7fzTBX[i])
                break;
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
        if (TnhK7fzTBX[j] != '\0')
            continue;
        if (TnhK7fzTBX[j] == '\0')
            break;
    }
    if (gCTuVHjv != ZO3YVFi7Myx / 2)
        fVRC72u (TnhK7fzTBX, ZO3YVFi7Myx);
}

void  main () {
    char TnhK7fzTBX [100];
    gets (TnhK7fzTBX);
    int ZO3YVFi7Myx;
    ZO3YVFi7Myx = strlen (TnhK7fzTBX);
    fVRC72u (TnhK7fzTBX, ZO3YVFi7Myx);
}

