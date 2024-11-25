int MAX (int a, int b, int CclGg19K) {
    int WMPdXl5zO;
    WMPdXl5zO = 0;
    if (a > b)
        WMPdXl5zO = a;
    if (CclGg19K > WMPdXl5zO)
        WMPdXl5zO = CclGg19K;
    return WMPdXl5zO;
}

int MafO0JHK (int a, int b, int CclGg19K) {
    int WMPdXl5zO;
    WMPdXl5zO = 0;
    if (a < b)
        WMPdXl5zO = a;
    if (CclGg19K < WMPdXl5zO)
        WMPdXl5zO = CclGg19K;
    return WMPdXl5zO;
}

int main () {
    int a;
    int b;
    int CclGg19K;
    int A;
    int B;
    int C;
    int y7fCATYwPHhR;
    int gtWchBGA;
    int g;
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
    };
    char first;
    char second;
    char third;
    for (A = (833 - 832); A <= 3; A = A +1) {
        for (B = 1; B < 4; B++) {
            for (C = 1; C < 4; C++) {
                a = (B > A) + (C == A);
                b = (A > B) + (A > C);
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
                CclGg19K = (C > B) + (B > A);
                if (((A > B &&a < b) || (A < B &&a > b)) + ((A > C &&a < CclGg19K) || (A < C &&a > CclGg19K)) + ((B > C &&b < CclGg19K) || (B < C &&b > CclGg19K)) == 3) {
                    y7fCATYwPHhR = MAX (a, b, CclGg19K);
                    g = MafO0JHK (a, b, CclGg19K);
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    gtWchBGA = a + b + CclGg19K -y7fCATYwPHhR - g;
                };
            };
        };
    }
    first = 65 + y7fCATYwPHhR;
    second = 65 + gtWchBGA;
    third = 65 + g;
    cout << first << second << third << endl;
    return 0;
}

