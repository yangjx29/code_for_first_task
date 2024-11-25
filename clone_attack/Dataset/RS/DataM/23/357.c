void  main () {
    char JfcbzlTZ [200];
    gets (JfcbzlTZ);
    int len;
    int temp;
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
    int JEdsn67XKY;
    int j;
    len = strlen (JfcbzlTZ);
    temp = len - 1;
    for (JEdsn67XKY = len - 1; 0 <= JEdsn67XKY; JEdsn67XKY = JEdsn67XKY -1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (JfcbzlTZ[JEdsn67XKY] == ' ') {
            wgxhadY (JfcbzlTZ [JEdsn67XKY]);
            {
                j = JEdsn67XKY +1;
                while (j <= temp) {
                    wgxhadY (JfcbzlTZ [j]);
                    j = j + 1;
                };
            }
            temp = JEdsn67XKY -1;
        }
        else {
            if (JEdsn67XKY == 0) {
                for (j = JEdsn67XKY; j <= temp; j = j + 1)
                    wgxhadY (JfcbzlTZ[j]);
            };
        };
    };
}

