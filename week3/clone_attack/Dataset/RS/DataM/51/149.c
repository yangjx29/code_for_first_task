void  t06eTDk9 (int Md3wUqSmR);
void  qr79HAmO ();
int YqDEISfQG0e;
char fCSAFUovRx [501];
int pN3S1n4D [499] = {0};
int len;
int maximum = INT_MIN;

int main () {
    cin >> YqDEISfQG0e;
    cin.get ();
    cin.getline (fCSAFUovRx, 501);
    len = strlen (fCSAFUovRx);
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
    t06eTDk9 (0);
    if (maximum <= (389 - 388))
        cout << "NO" << endl;
    else
        qr79HAmO ();
    return 0;
}

void  t06eTDk9 (int Md3wUqSmR) {
    int SahvcgMH;
    if (!(len - YqDEISfQG0e +1 != Md3wUqSmR))
        return;
    {
        int rqZO1s6rt = Md3wUqSmR;
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
        while (rqZO1s6rt <= len - YqDEISfQG0e) {
            SahvcgMH = 0;
            {
                int iLHkJRX2Z = 0;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                while (YqDEISfQG0e -1 >= iLHkJRX2Z) {
                    if (!(*(fCSAFUovRx + Md3wUqSmR +iLHkJRX2Z) != *(fCSAFUovRx + rqZO1s6rt + iLHkJRX2Z)))
                        SahvcgMH++;
                    else
                        break;
                    iLHkJRX2Z++;
                };
            }
            rqZO1s6rt++;
            if (SahvcgMH == YqDEISfQG0e)
                (*(pN3S1n4D + Md3wUqSmR))++;
        };
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
    maximum = *(pN3S1n4D + Md3wUqSmR) > maximum ? *(pN3S1n4D + Md3wUqSmR) : maximum;
    t06eTDk9 (Md3wUqSmR +1);
}

void  qr79HAmO () {
    cout << maximum << endl;
    {
        int rqZO1s6rt = 0;
        while (rqZO1s6rt <= len - YqDEISfQG0e) {
            if (*(pN3S1n4D + rqZO1s6rt) == maximum) {
                {
                    int iLHkJRX2Z = 0;
                    while (iLHkJRX2Z <= YqDEISfQG0e -1) {
                        cout << *(fCSAFUovRx + rqZO1s6rt + iLHkJRX2Z);
                        iLHkJRX2Z++;
                    };
                }
                cout << endl;
            }
            rqZO1s6rt++;
        };
    };
}

