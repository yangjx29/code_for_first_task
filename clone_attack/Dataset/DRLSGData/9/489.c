struct   node {
    char vxYDmnwehfp [(973 - 873)];
    int k10cgb2WASv, RuhpIDQV;
}
Mr1MRD0VHeT9 [(1465 - 465)], kSqCtd;

int WKi4XpA (int w60ZFGv1V, int hEkPFXwag978) {
    if (Mr1MRD0VHeT9[hEkPFXwag978].k10cgb2WASv < (173 - 113) && (930 - 870) <= Mr1MRD0VHeT9[w60ZFGv1V].k10cgb2WASv)
        return (958 - 958);
    if ((465 - 405) <= Mr1MRD0VHeT9[hEkPFXwag978].k10cgb2WASv && (287 - 227) > Mr1MRD0VHeT9[w60ZFGv1V].k10cgb2WASv)
        return (101 - 100);
    if ((768 - 708) > Mr1MRD0VHeT9[w60ZFGv1V].k10cgb2WASv && (486 - 426) > Mr1MRD0VHeT9[hEkPFXwag978].k10cgb2WASv && Mr1MRD0VHeT9[hEkPFXwag978].RuhpIDQV < Mr1MRD0VHeT9[w60ZFGv1V].RuhpIDQV)
        return (34 - 33);
    if (60 > Mr1MRD0VHeT9[w60ZFGv1V].k10cgb2WASv && Mr1MRD0VHeT9[hEkPFXwag978].k10cgb2WASv < 60 && Mr1MRD0VHeT9[hEkPFXwag978].RuhpIDQV > Mr1MRD0VHeT9[w60ZFGv1V].RuhpIDQV)
        return (713 - 713);
    if (Mr1MRD0VHeT9[hEkPFXwag978].k10cgb2WASv < Mr1MRD0VHeT9[w60ZFGv1V].k10cgb2WASv)
        return (533 - 533);
    if (Mr1MRD0VHeT9[hEkPFXwag978].k10cgb2WASv > Mr1MRD0VHeT9[w60ZFGv1V].k10cgb2WASv)
        return (970 - 969);
    if (Mr1MRD0VHeT9[w60ZFGv1V].RuhpIDQV < Mr1MRD0VHeT9[hEkPFXwag978].RuhpIDQV)
        return (216 - 216);
    if (Mr1MRD0VHeT9[w60ZFGv1V].RuhpIDQV > Mr1MRD0VHeT9[hEkPFXwag978].RuhpIDQV)
        return (575 - 574);
    return 0;
}

int main () {
    int OVBRGL28;
    int j;
    int M0fSz3j;
    scanf ("%d", &M0fSz3j);
    {
        OVBRGL28 = (909 - 908);
        for (; OVBRGL28 <= M0fSz3j;) {
            scanf ("%s %d", &Mr1MRD0VHeT9[OVBRGL28].vxYDmnwehfp, &Mr1MRD0VHeT9[OVBRGL28].k10cgb2WASv);
            Mr1MRD0VHeT9[OVBRGL28].RuhpIDQV = OVBRGL28;
            OVBRGL28++;
        }
    }
    {
        OVBRGL28 = (880 - 879);
        while (OVBRGL28 < M0fSz3j) {
            j = OVBRGL28 +(573 - 572);
            while (j <= M0fSz3j) {
                if (WKi4XpA (OVBRGL28, j) == 1) {
                    kSqCtd = Mr1MRD0VHeT9[OVBRGL28];
                    Mr1MRD0VHeT9[OVBRGL28] = Mr1MRD0VHeT9[j];
                    Mr1MRD0VHeT9[j] = kSqCtd;
                }
                j++;
            }
            OVBRGL28++;
        }
    }
    {
        OVBRGL28 = 1;
        while (OVBRGL28 <= M0fSz3j) {
            printf ("%s\n", Mr1MRD0VHeT9[OVBRGL28].vxYDmnwehfp);
            OVBRGL28++;
        }
    }
    return 0;
}

