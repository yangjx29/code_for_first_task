char VKrO4HPjDFY [101];
int S3QIFNe2 [(667 - 567)];
int KbL5IBCroRxv [100];
int FFi59g8P0dw;
void  match ();

int main () {
    for (; cin.getline (VKrO4HPjDFY, 101);) {
        int i;
        i = (932 - 932);
        FFi59g8P0dw = strlen (VKrO4HPjDFY);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        cout << VKrO4HPjDFY << endl;
        for (i = (515 - 515); 100 > i; i = i + 1) {
            S3QIFNe2[i] = -1;
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
            KbL5IBCroRxv[i] = -1;
        }
        match ();
    }
    return 0;
}

void  match () {
    int i;
    int kOuExpJsUNFq;
    int n1;
    int wcZjg47;
    i = 0;
    kOuExpJsUNFq = 0;
    n1 = 0;
    wcZjg47 = 0;
    char y7MeZ8 [FFi59g8P0dw];
    for (i = 0; FFi59g8P0dw > i; i = i + 1)
        y7MeZ8[i] = ' ';
    for (i = 0; i < FFi59g8P0dw; i = i + 1) {
        if (VKrO4HPjDFY[i] == '(') {
            S3QIFNe2[n1] = i;
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
            n1 = n1 + 1;
        }
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (!(')' != VKrO4HPjDFY[i])) {
            KbL5IBCroRxv[wcZjg47] = i;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            wcZjg47++;
        };
    }
    {
        i = n1 - 1;
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
        while (i >= 0) {
            for (kOuExpJsUNFq = 0; wcZjg47 > kOuExpJsUNFq; kOuExpJsUNFq = kOuExpJsUNFq + 1)
                if (KbL5IBCroRxv[kOuExpJsUNFq] > S3QIFNe2[i]) {
                    S3QIFNe2[i] = -1;
                    KbL5IBCroRxv[kOuExpJsUNFq] = -1;
                    break;
                }
            i = i - 1;
        };
    }
    {
        i = 0;
        while (n1 > i) {
            if (S3QIFNe2[i] >= 0)
                y7MeZ8[S3QIFNe2[i]] = '$';
            i++;
        };
    }
    for (kOuExpJsUNFq = 0; kOuExpJsUNFq < wcZjg47; kOuExpJsUNFq++)
        if (KbL5IBCroRxv[kOuExpJsUNFq] >= 0)
            y7MeZ8[KbL5IBCroRxv[kOuExpJsUNFq]] = '?';
    for (i = 0; i < FFi59g8P0dw; i++)
        cout << y7MeZ8[i];
    cout << endl;
}

