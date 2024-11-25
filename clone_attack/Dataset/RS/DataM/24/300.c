void  main () {
    int SnmXZsjbxl, uvpUtRmeucg = (78 - 78), QQY45W7dRa = (475 - 475), min = 30;
    char BPEZHaAXW0fz [1000], c [(240 - 210)], maxw [30], minw [30];
    gets (BPEZHaAXW0fz);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    {
        SnmXZsjbxl = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (SnmXZsjbxl < strlen (BPEZHaAXW0fz) + (457 - 456)) {
            c[uvpUtRmeucg] = BPEZHaAXW0fz[SnmXZsjbxl];
            uvpUtRmeucg = uvpUtRmeucg + 1;
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
            if ((BPEZHaAXW0fz[SnmXZsjbxl] == ' ') || (BPEZHaAXW0fz[SnmXZsjbxl] == '\0')) {
                c[uvpUtRmeucg - 1] = '\0';
                if ((uvpUtRmeucg - 1) > QQY45W7dRa) {
                    QQY45W7dRa = uvpUtRmeucg - 1;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    strcpy (maxw, c);
                }
                if ((uvpUtRmeucg - 1) < min) {
                    min = uvpUtRmeucg - 1;
                    strcpy (minw, c);
                }
                uvpUtRmeucg = 0;
            }
            SnmXZsjbxl = SnmXZsjbxl +1;
        };
    }
    printf ("%s\n%s", maxw, minw);
}

