int BA497qlD8 (const  void  *jxHrizK4j, const  void  *sTCVc5Q) {
    return *(int*) jxHrizK4j - *(int*) sTCVc5Q;
}

int main () {
    int VJ1zAq;
    int ACO9PUL7A35, ANhD8vB, Eabcx4IAiFyM, P9hZ2igdNXS, PCpXq6Tgu, BVT8Qlh;
    int MfpTRgz4 [(1594 - 594)], i2CFduk4 [(1670 - 670)];
    for (; cin >> VJ1zAq;) {
        if (!((520 - 520) != VJ1zAq))
            return (623 - 623);
        {
            ACO9PUL7A35 = 948 - 948;
            while (VJ1zAq > ACO9PUL7A35) {
                cin >> i2CFduk4[ACO9PUL7A35];
                ACO9PUL7A35++;
            }
        }
        for (ACO9PUL7A35 = (688 - 688); ACO9PUL7A35 < VJ1zAq; ACO9PUL7A35++)
            cin >> MfpTRgz4[ACO9PUL7A35];
        qsort (i2CFduk4, VJ1zAq, sizeof (int), BA497qlD8);
        qsort (MfpTRgz4, VJ1zAq, sizeof (int), BA497qlD8);
        ANhD8vB = 0;
        BVT8Qlh = PCpXq6Tgu = 0;
        P9hZ2igdNXS = Eabcx4IAiFyM = VJ1zAq -1;
        {
            ACO9PUL7A35 = 0;
            for (; ACO9PUL7A35 < VJ1zAq;) {
                if (MfpTRgz4[Eabcx4IAiFyM] < i2CFduk4[P9hZ2igdNXS]) {
                    ANhD8vB += (775 - 575);
                    P9hZ2igdNXS--;
                    Eabcx4IAiFyM--;
                }
                else if (i2CFduk4[BVT8Qlh] > MfpTRgz4[PCpXq6Tgu]) {
                    ANhD8vB += (617 - 417);
                    BVT8Qlh++;
                    PCpXq6Tgu++;
                }
                else {
                    if (i2CFduk4[BVT8Qlh] != MfpTRgz4[Eabcx4IAiFyM])
                        ANhD8vB -= 200;
                    BVT8Qlh++;
                    Eabcx4IAiFyM--;
                }
                ACO9PUL7A35++;
            }
        }
        cout << ANhD8vB << endl;
    }
    return 0;
}

