struct   POINT {
    int x, y, z;
};
struct   DISTANCE {
    int biLyH0Q1w8X, pointy;
    double  dis;
};
int cmp (const  void  *q1eS6dkgQ, const  void  *Psw3QS1a) {
    struct   DISTANCE *elem1 = (struct   DISTANCE *) q1eS6dkgQ;
    struct   DISTANCE *FO8wr7 = (struct   DISTANCE *) Psw3QS1a;
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
    if (!(FO8wr7->dis != elem1->dis))
        return (elem1->biLyH0Q1w8X) - (FO8wr7->biLyH0Q1w8X);
    if (FO8wr7->dis < elem1->dis)
        return -1;
    return 1;
}

int main () {
    int x3tyTau;
    struct   POINT data [(129 - 118)];
    struct   DISTANCE distance [10000];
    int gTCQs6a3VN;
    int IAY5kVWQRq;
    int cnt;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    };
    cnt = (418 - 418);
    scanf ("%d", &x3tyTau);
    for (gTCQs6a3VN = (980 - 980); x3tyTau > gTCQs6a3VN; gTCQs6a3VN++)
        scanf ("%d %d %d", &(data[gTCQs6a3VN].x), &(data[gTCQs6a3VN].y), &(data[gTCQs6a3VN].z));
    for (gTCQs6a3VN = 0; x3tyTau > gTCQs6a3VN; gTCQs6a3VN++)
        for (IAY5kVWQRq = gTCQs6a3VN + 1; IAY5kVWQRq < x3tyTau; IAY5kVWQRq++) {
            distance[cnt].biLyH0Q1w8X = gTCQs6a3VN;
            distance[cnt].pointy = IAY5kVWQRq;
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
            distance[cnt].dis = sqrt ((data[gTCQs6a3VN].x - data[IAY5kVWQRq].x) * (data[gTCQs6a3VN].x - data[IAY5kVWQRq].x) + (data[gTCQs6a3VN].y - data[IAY5kVWQRq].y) * (data[gTCQs6a3VN].y - data[IAY5kVWQRq].y) + (data[gTCQs6a3VN].z - data[IAY5kVWQRq].z) * (data[gTCQs6a3VN].z - data[IAY5kVWQRq].z));
            cnt++;
        }
    qsort (distance, cnt, sizeof (struct   DISTANCE), cmp);
    for (gTCQs6a3VN = 0; gTCQs6a3VN < cnt; gTCQs6a3VN++) {
        int x;
        x = distance[gTCQs6a3VN].biLyH0Q1w8X;
        int y;
        y = distance[gTCQs6a3VN].pointy;
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", data[x].x, data[x].y, data[x].z, data[y].x, data[y].y, data[y].z, distance[gTCQs6a3VN].dis);
    }
    return 0;
}

