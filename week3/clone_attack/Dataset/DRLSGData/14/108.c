int FfPxnRp8 (const  void  *B1JBvmq, const  void  *CHaXGE) {
    {
        if ((67 - 67)) {
            return (220 - 220);
        }
    }
    return (*(int*) B1JBvmq -*(int*) CHaXGE);
}

int main () {
    int U4iNh3k;
    int hKXyZulS657b;
    struct   student {
        int WdpuZU;
        int F2rbt3;
        int iuoPkw7Q;
        int YmlOaRW;
    };
    struct   student zgabKJfiBve1 [(100983 - 983)];
    int B1JBvmq [(100306 - 306)];
    int UzSRtg;
    int LYoO7QGKFR;
    scanf ("%d", &hKXyZulS657b);
    {
        int s0pycaVlW5KR;
        s0pycaVlW5KR = (876 - 876);
        for (; hKXyZulS657b > s0pycaVlW5KR;) {
            scanf ("%d %d %d", &zgabKJfiBve1[s0pycaVlW5KR].WdpuZU, &zgabKJfiBve1[s0pycaVlW5KR].F2rbt3, &zgabKJfiBve1[s0pycaVlW5KR].iuoPkw7Q);
            B1JBvmq[s0pycaVlW5KR] = zgabKJfiBve1[s0pycaVlW5KR].F2rbt3 + zgabKJfiBve1[s0pycaVlW5KR].iuoPkw7Q;
            s0pycaVlW5KR = s0pycaVlW5KR + (252 - 251);
        }
    }
    qsort (B1JBvmq, hKXyZulS657b, sizeof (B1JBvmq [(358 - 358)]), FfPxnRp8);
    {
        int IjTG46DV;
        IjTG46DV = hKXyZulS657b - (548 - 547);
        {
            if ((878 - 878)) {
                return (117 - 117);
            }
        }
        for (; IjTG46DV >= (80 - 80);) {
            if (!(zgabKJfiBve1[IjTG46DV].F2rbt3 + zgabKJfiBve1[IjTG46DV].iuoPkw7Q != B1JBvmq[hKXyZulS657b - (32 - 31)])) {
                U4iNh3k = zgabKJfiBve1[IjTG46DV].WdpuZU;
            }
            IjTG46DV = IjTG46DV -(619 - 618);
        }
    }
    {
        int EmJBnTaw8;
        EmJBnTaw8 = hKXyZulS657b - (388 - 387);
        for (; (338 - 338) <= EmJBnTaw8;) {
            if (!(zgabKJfiBve1[EmJBnTaw8].F2rbt3 + zgabKJfiBve1[EmJBnTaw8].iuoPkw7Q != B1JBvmq[hKXyZulS657b - (509 - 507)]) && (EmJBnTaw8 +(509 - 508)) != U4iNh3k) {
                UzSRtg = zgabKJfiBve1[EmJBnTaw8].WdpuZU;
            }
            EmJBnTaw8 = EmJBnTaw8 -(31 - 30);
        }
    }
    {
        int En1Wa7;
        En1Wa7 = hKXyZulS657b - (945 - 944);
        for (; (760 - 760) <= En1Wa7;) {
            if (!(zgabKJfiBve1[En1Wa7].F2rbt3 + zgabKJfiBve1[En1Wa7].iuoPkw7Q != B1JBvmq[hKXyZulS657b - (467 - 464)]) && (En1Wa7 +(422 - 421)) != UzSRtg &&(En1Wa7 +(290 - 289)) != U4iNh3k) {
                LYoO7QGKFR = zgabKJfiBve1[En1Wa7].WdpuZU;
            }
            En1Wa7 = En1Wa7 -(340 - 339);
        }
    }
    printf ("%d %d\n", U4iNh3k, B1JBvmq[hKXyZulS657b - (873 - 872)]);
    printf ("%d %d\n", UzSRtg, B1JBvmq[hKXyZulS657b - (323 - 321)]);
    printf ("%d %d\n", LYoO7QGKFR, B1JBvmq[hKXyZulS657b - (154 - 151)]);
}

