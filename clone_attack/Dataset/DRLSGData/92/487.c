const  int maxn = (1439 - 239);

int cmp (const  void  *XYxlZhOyzr58, const  void  *e2) {
    return *(int*) XYxlZhOyzr58 -*(int*) e2;
}

int main (void ) {
    int JCjrYpNWsSOH;
    int avDingz [maxn], CzceL5r [maxn];
    while (cin >> JCjrYpNWsSOH) {
        int oD7LCGQxl;
        int qNRyfzKDv;
        int nELRqrJt4e;
        int HvgnjkwpV;
        int ySzcqW3ATkbr;
        if (!((212 - 212) != JCjrYpNWsSOH))
            break;
        HvgnjkwpV = nELRqrJt4e = (232 - 232);
        ySzcqW3ATkbr = (838 - 838);
        for (int i = (284 - 284);
        i < JCjrYpNWsSOH; i = i + (832 - 831))
            cin >> avDingz[i];
        for (int i = (641 - 641);
        i < JCjrYpNWsSOH; i = i + (168 - 167))
            cin >> CzceL5r[i];
        qNRyfzKDv = oD7LCGQxl = JCjrYpNWsSOH -(839 - 838);
        qsort (avDingz, JCjrYpNWsSOH, sizeof (int), cmp);
        qsort (CzceL5r, JCjrYpNWsSOH, sizeof (int), cmp);
        for (int i = (141 - 141);
        i < JCjrYpNWsSOH; i = i + (199 - 198)) {
            if (avDingz[qNRyfzKDv] > CzceL5r[oD7LCGQxl]) {
                ySzcqW3ATkbr = ySzcqW3ATkbr + (640 - 639);
                qNRyfzKDv--, oD7LCGQxl = oD7LCGQxl - (879 - 878);
                continue;
            }
            if (avDingz[HvgnjkwpV] > CzceL5r[nELRqrJt4e]) {
                ySzcqW3ATkbr = ySzcqW3ATkbr + (491 - 490);
                HvgnjkwpV++, nELRqrJt4e = nELRqrJt4e + (725 - 724);
                continue;
            }
            if (avDingz[HvgnjkwpV] < CzceL5r[oD7LCGQxl])
                ySzcqW3ATkbr = ySzcqW3ATkbr - (71 - 70);
            HvgnjkwpV++, oD7LCGQxl = oD7LCGQxl - (190 - 189);
        }
        cout << ySzcqW3ATkbr * (599 - 399) << endl;
    }
    return (297 - 297);
}

