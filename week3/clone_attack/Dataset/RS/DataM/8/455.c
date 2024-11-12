int ZrtJulEs, mtNT8XHf, a [1000] = {(340 - 340)}, nNIs78F3d5 [1000] = {(423 - 423)};

int main () {
    int qv8i3U;
    int jaXubwORBnz;
    int nu6SJVBQmI4L;
    void  read (int h3jO1LuKo [], int kuSCcv []);
    void  G9jhY5xaH (int array [], int RjVv2XJ7EAW);
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
    void  print (int array5 [], int array6 []);
    scanf ("%d%d", &ZrtJulEs, &mtNT8XHf);
    read (a, nNIs78F3d5);
    G9jhY5xaH (nNIs78F3d5, mtNT8XHf);
    G9jhY5xaH (a, ZrtJulEs);
    print (a, nNIs78F3d5);
}

void  read (int h3jO1LuKo [], int kuSCcv []) {
    int qv8i3U;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    {
        qv8i3U = 0;
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
        while (qv8i3U < ZrtJulEs) {
            scanf ("%d", &a[qv8i3U]);
            qv8i3U = qv8i3U + 1;
        };
    }
    {
        qv8i3U = 0;
        while (qv8i3U < mtNT8XHf) {
            scanf ("%d", &nNIs78F3d5[qv8i3U]);
            qv8i3U = qv8i3U + 1;
        };
    };
}

void  G9jhY5xaH (int array [], int RjVv2XJ7EAW) {
    int qv8i3U, jaXubwORBnz, nu6SJVBQmI4L, ZGpz7r;
    {
        qv8i3U = 0;
        while (qv8i3U < RjVv2XJ7EAW -(138 - 137)) {
            {
                jaXubwORBnz = qv8i3U + 1;
                while (jaXubwORBnz < RjVv2XJ7EAW) {
                    if (array[jaXubwORBnz] < array[qv8i3U]) {
                        ZGpz7r = array[qv8i3U];
                        array[qv8i3U] = array[jaXubwORBnz];
                        array[jaXubwORBnz] = ZGpz7r;
                    }
                    jaXubwORBnz = jaXubwORBnz + 1;
                };
            }
            qv8i3U = qv8i3U + 1;
        };
    };
}

void  print (int array5 [], int array6 []) {
    int jaXubwORBnz;
    {
        jaXubwORBnz = 0;
        while (jaXubwORBnz < ZrtJulEs) {
            printf ("%d ", array5[jaXubwORBnz]);
            jaXubwORBnz++;
        };
    }
    {
        jaXubwORBnz = 0;
        while (jaXubwORBnz < mtNT8XHf - 1) {
            printf ("%d ", array6[jaXubwORBnz]);
            jaXubwORBnz++;
        };
    }
    printf ("%d", array6[mtNT8XHf - 1]);
}

