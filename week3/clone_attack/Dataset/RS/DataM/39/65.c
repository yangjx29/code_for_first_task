struct   Node;
typedef struct   Node *b0wjkdWNAH8;

struct   Node {
    int Yvz6oPQ9s, c7UxhaXr, thesis, sum;
    char z4nefoB [20], jmHUTSY65uWn, FGi2jrmHx05M;
    b0wjkdWNAH8 GVSztN3x6eOW;
};
b0wjkdWNAH8 CvXJB8YRz9VN () {
    b0wjkdWNAH8 aMXEHa5q8sSJ;
    aMXEHa5q8sSJ = (b0wjkdWNAH8) malloc (sizeof (struct   Node));
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
    aMXEHa5q8sSJ->GVSztN3x6eOW = NULL;
    return aMXEHa5q8sSJ;
}

int main () {
    b0wjkdWNAH8 OUxXHqRn9Z6;
    b0wjkdWNAH8 aMXEHa5q8sSJ;
    b0wjkdWNAH8 NKrSGuUZehm9;
    b0wjkdWNAH8 maxn;
    OUxXHqRn9Z6 = NULL;
    aMXEHa5q8sSJ = NULL;
    NKrSGuUZehm9 = NULL;
    maxn = NULL;
    int sum;
    int jnWv5frujT9;
    int jSc9dJ1rN;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    int oMdp3F2NTv;
    sum = 0;
    NKrSGuUZehm9 = CvXJB8YRz9VN ();
    OUxXHqRn9Z6 = NKrSGuUZehm9;
    scanf ("%d", &jSc9dJ1rN);
    {
        jnWv5frujT9 = 1;
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
        while (jSc9dJ1rN >= jnWv5frujT9) {
            jnWv5frujT9 = jnWv5frujT9 + 1;
            aMXEHa5q8sSJ = (b0wjkdWNAH8) malloc (sizeof (struct   Node));
            if (!(NULL == aMXEHa5q8sSJ)) {
                scanf ("%s %d %d %c %c %d", &(aMXEHa5q8sSJ->z4nefoB), &(aMXEHa5q8sSJ->Yvz6oPQ9s), &(aMXEHa5q8sSJ->c7UxhaXr), &(aMXEHa5q8sSJ->FGi2jrmHx05M), &(aMXEHa5q8sSJ->jmHUTSY65uWn), &(aMXEHa5q8sSJ->thesis));
                aMXEHa5q8sSJ->sum = 0;
                if (80 < aMXEHa5q8sSJ->Yvz6oPQ9s && 0 < aMXEHa5q8sSJ->thesis)
                    aMXEHa5q8sSJ->sum = aMXEHa5q8sSJ->sum + 8000;
                if (aMXEHa5q8sSJ->Yvz6oPQ9s > 85 && aMXEHa5q8sSJ->c7UxhaXr > 80)
                    aMXEHa5q8sSJ->sum += 4000;
                if (aMXEHa5q8sSJ->Yvz6oPQ9s > 90)
                    aMXEHa5q8sSJ->sum += 2000;
                if (aMXEHa5q8sSJ->Yvz6oPQ9s > 85 && aMXEHa5q8sSJ->jmHUTSY65uWn == 'Y')
                    aMXEHa5q8sSJ->sum = aMXEHa5q8sSJ->sum + 1000;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (aMXEHa5q8sSJ->c7UxhaXr > 80 && aMXEHa5q8sSJ->FGi2jrmHx05M == 'Y')
                    aMXEHa5q8sSJ->sum = aMXEHa5q8sSJ->sum + 850;
                aMXEHa5q8sSJ->GVSztN3x6eOW = NULL;
                OUxXHqRn9Z6->GVSztN3x6eOW = aMXEHa5q8sSJ;
                sum += aMXEHa5q8sSJ->sum;
                OUxXHqRn9Z6 = aMXEHa5q8sSJ;
            };
        };
    }
    maxn = NKrSGuUZehm9->GVSztN3x6eOW;
    aMXEHa5q8sSJ = NKrSGuUZehm9->GVSztN3x6eOW;
    while (1) {
        if (aMXEHa5q8sSJ->sum > maxn->sum)
            maxn = aMXEHa5q8sSJ;
        if (aMXEHa5q8sSJ->GVSztN3x6eOW == NULL)
            break;
        aMXEHa5q8sSJ = aMXEHa5q8sSJ->GVSztN3x6eOW;
    }
    printf ("%s\n%d\n%d", maxn->z4nefoB, maxn->sum, sum);
    return 0;
}

