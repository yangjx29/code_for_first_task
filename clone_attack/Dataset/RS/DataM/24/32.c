int main () {
    int uVCE07;
    int UuvtiO58w;
    int min;
    int count;
    int u9w0P3;
    uVCE07 = 0;
    UuvtiO58w = 0;
    min = 20;
    count = 0;
    char AVGX47 [1000];
    char *Qv1jGUg;
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
    char *ge0ryWuvU;
    int AhSxIL87U5, y;
    for (; (AVGX47[uVCE07] = cin.get ()) != '\n';)
        uVCE07++;
    for (u9w0P3 = 0; u9w0P3 < uVCE07; u9w0P3++) {
        if (AVGX47[u9w0P3] == ',' || !(' ' != AVGX47[u9w0P3])) {
            if (count > UuvtiO58w) {
                UuvtiO58w = count;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                Qv1jGUg = &AVGX47[u9w0P3 - count];
            }
            if (count < min) {
                min = count;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                ge0ryWuvU = &AVGX47[u9w0P3 - count];
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
            count = 0;
            if (AVGX47[u9w0P3] == ',')
                u9w0P3++;
        }
        else
            count++;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    if (count > UuvtiO58w) {
        UuvtiO58w = count;
        Qv1jGUg = &AVGX47[u9w0P3 - count];
    }
    if (count < min) {
        min = count;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        ge0ryWuvU = &AVGX47[u9w0P3 - count];
    }
    for (AhSxIL87U5 = 0; AhSxIL87U5 < UuvtiO58w; AhSxIL87U5++)
        cout << *(Qv1jGUg +AhSxIL87U5);
    cout << endl;
    for (y = 0; y < min; y++)
        cout << *(ge0ryWuvU + y);
    cout << endl;
    return 0;
}

