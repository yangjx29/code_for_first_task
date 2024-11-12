struct   point {
    int x;
    int y;
    int z;
}
pt [(222 - 172)];
struct   data {
    int num;
    struct   point a;
    struct   point b;
    double  distance;
}
zgxQDtAaewR [10000], temp;

int main () {
    int k;
    int CfJWkaMrzgn, i, sbviZ1D;
    int S17IW9nBvVya;
    S17IW9nBvVya = (651 - 651);
    cin >> CfJWkaMrzgn;
    for (i = (792 - 792); CfJWkaMrzgn > i; i = i + 1) {
        cin >> pt[i].x;
        cin >> pt[i].y;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        cin >> pt[i].z;
    }
    for (i = (541 - 541); CfJWkaMrzgn > i; i = i + 1)
        for (sbviZ1D = i + (533 - 532); CfJWkaMrzgn > sbviZ1D; sbviZ1D = sbviZ1D + 1) {
            zgxQDtAaewR[S17IW9nBvVya].num = S17IW9nBvVya;
            zgxQDtAaewR[S17IW9nBvVya].a = pt[i];
            zgxQDtAaewR[S17IW9nBvVya].b = pt[sbviZ1D];
            zgxQDtAaewR[S17IW9nBvVya].distance = sqrt ((pt[i].x - pt[sbviZ1D].x) * (pt[i].x - pt[sbviZ1D].x) + (pt[i].y - pt[sbviZ1D].y) * (pt[i].y - pt[sbviZ1D].y) + (pt[i].z - pt[sbviZ1D].z) * (pt[i].z - pt[sbviZ1D].z));
            S17IW9nBvVya = S17IW9nBvVya +1;
        }
    k = S17IW9nBvVya;
    for (i = 0; k > i; i = i + 1)
        for (sbviZ1D = i + (222 - 221); k > sbviZ1D; sbviZ1D = sbviZ1D + 1) {
            if (zgxQDtAaewR[sbviZ1D].distance > zgxQDtAaewR[i].distance || (!(zgxQDtAaewR[sbviZ1D].distance != zgxQDtAaewR[i].distance) && zgxQDtAaewR[i].num > zgxQDtAaewR[sbviZ1D].num)) {
                temp = zgxQDtAaewR[i];
                zgxQDtAaewR[i] = zgxQDtAaewR[sbviZ1D];
                zgxQDtAaewR[sbviZ1D] = temp;
            };
        }
    for (i = 0; i < k; i++) {
        cout << "(" << zgxQDtAaewR[i].a.x << "," << zgxQDtAaewR[i].a.y << "," << zgxQDtAaewR[i].a.z << ")-(" << zgxQDtAaewR[i].b.x << "," << zgxQDtAaewR[i].b.y << "," << zgxQDtAaewR[i].b.z << ")=";
        printf ("%.2lf\n", zgxQDtAaewR[i].distance);
    }
    return 0;
}

