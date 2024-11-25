int main () {
    int m;
    int n;
    int D604zhV1 [(114 - 14)];
    int n2 [100];
    int wv6zx3Vi [200];
    int *vhYU0RGkS3 = &m, *p2 = &n;
    void  sort (int *p, int m []);
    void  Um3TxDC4tda (int *vhYU0RGkS3, int *p2, int MxKPdv [], int D47RTWUtIZ []);
    void  aetI8AY1 (int *vhYU0RGkS3, int *p2, int MxKPdv [], int D47RTWUtIZ [], int m []);
    void  put (int *vhYU0RGkS3, int *p2, int m []);
    Um3TxDC4tda (vhYU0RGkS3, p2, D604zhV1, n2);
    sort (vhYU0RGkS3, D604zhV1);
    sort (p2, n2);
    aetI8AY1 (vhYU0RGkS3, p2, D604zhV1, n2, wv6zx3Vi);
    put (vhYU0RGkS3, p2, wv6zx3Vi);
    return 0;
}

void  Um3TxDC4tda (int *vhYU0RGkS3, int *p2, int MxKPdv [], int D47RTWUtIZ []) {
    int i;
    scanf ("%d%d", vhYU0RGkS3, p2);
    {
        i = 0;
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
        while (i < *vhYU0RGkS3) {
            scanf ("%d", &MxKPdv[i]);
            i = i + 1;
        };
    }
    {
        i = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (*p2 > i) {
            scanf ("%d", &D47RTWUtIZ[i]);
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
            i = i + 1;
        };
    };
}

void  sort (int *p, int m []) {
    int i;
    int j;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    int k;
    for (i = 0; i < *p; i++) {
        j = i + 1;
        while (j < *p) {
            if (m[i] > m[j]) {
                k = m[i];
                m[i] = m[j];
                m[j] = k;
            }
            j = j + 1;
        };
    };
}

void  aetI8AY1 (int *vhYU0RGkS3, int *p2, int MxKPdv [], int D47RTWUtIZ [], int m []) {
    int i;
    int j;
    for (i = 0, j = 0; i < *vhYU0RGkS3; i++, j++)
        m[i] = MxKPdv[i];
    {
        j = 0;
        while (*vhYU0RGkS3 + *p2 > i) {
            m[i] = D47RTWUtIZ[j];
            j++;
            i++;
        };
    };
}

void  put (int *vhYU0RGkS3, int *p2, int m []) {
    int i;
    printf ("%d", m[0]);
    {
        i = 1;
        while (i < *vhYU0RGkS3 + *p2) {
            printf (" %d", m[i]);
            i++;
        };
    };
}

