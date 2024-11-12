int S4VNzOn7Q = (949 - 948);
int BiaLkrQM (char gwWxlZBYqtjC [(1477 - 977)], int KNyB0X);

int main () {
    char gwWxlZBYqtjC [500];
    char KNyB0X;
    cin.getline (gwWxlZBYqtjC, 500);
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
    KNyB0X = strlen (gwWxlZBYqtjC);
    BiaLkrQM (gwWxlZBYqtjC, KNyB0X);
    return 0;
}

int BiaLkrQM (char gwWxlZBYqtjC [500], int KNyB0X) {
    int YoCIiyR9YcV;
    int Kg4YV1;
    int i;
    int yLRYkzIFX7V;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    YoCIiyR9YcV = 0;
    Kg4YV1 = S4VNzOn7Q;
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
        while (KNyB0X > i) {
            while (!(gwWxlZBYqtjC[i + Kg4YV1] != gwWxlZBYqtjC[i - Kg4YV1 +1]) && (i - Kg4YV1 +1) >= 0 && i + Kg4YV1 < KNyB0X &&Kg4YV1 > 0)
                Kg4YV1--;
            if (!(0 != Kg4YV1)) {
                {
                    yLRYkzIFX7V = i - S4VNzOn7Q +1;
                    while (yLRYkzIFX7V <= i + S4VNzOn7Q) {
                        cout << gwWxlZBYqtjC[yLRYkzIFX7V];
                        yLRYkzIFX7V++;
                    };
                }
                cout << endl;
                YoCIiyR9YcV = 1;
            }
            Kg4YV1 = S4VNzOn7Q;
            i++;
        };
    }
    if (YoCIiyR9YcV == 1)
        BiaLkrQM (gwWxlZBYqtjC, KNyB0X);
    else
        return 0;
    S4VNzOn7Q = S4VNzOn7Q +1;
}

