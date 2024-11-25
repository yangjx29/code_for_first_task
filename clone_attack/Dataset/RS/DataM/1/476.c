int SnY4XoBv2K = (795 - 795), Ut8Lioq = 0, IRNf7SUaZ = 1;

void  wCSapf (int Ut8Lioq, int SnY4XoBv2K) {
    int GXCSZhvy3;
    {
        GXCSZhvy3 = Ut8Lioq;
        while (sqrt (SnY4XoBv2K) >= GXCSZhvy3) {
            if (SnY4XoBv2K % GXCSZhvy3 == 0) {
                IRNf7SUaZ = IRNf7SUaZ +1;
                wCSapf (GXCSZhvy3, SnY4XoBv2K / GXCSZhvy3);
            }
            GXCSZhvy3 = GXCSZhvy3 +1;
        };
    };
}

int main () {
    int B4fbWjwe3Sn;
    cin >> B4fbWjwe3Sn;
    while (B4fbWjwe3Sn) {
        B4fbWjwe3Sn = B4fbWjwe3Sn -1;
        cin >> SnY4XoBv2K;
        wCSapf (2, SnY4XoBv2K);
        cout << IRNf7SUaZ << endl;
        IRNf7SUaZ = 1;
    };
}

