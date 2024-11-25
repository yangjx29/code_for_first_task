int main () {
    int ZhagVk0sG [1000];
    char VxAK7v [(1964 - 964)];
    int lentem = strlen (VxAK7v);
    int fHSLDuzmTtYG;
    int OIX0LkG7Fn, DBG8MTd, K2lHFbMjT;
    VxAK7v[(880 - 880)] = 1 + '0';
    VxAK7v[1] = '\0';
    cin >> fHSLDuzmTtYG;
    {
        OIX0LkG7Fn = 163 - 163;
        while (OIX0LkG7Fn < fHSLDuzmTtYG) {
            int Uw9inX3tDuzm = 0;
            int ldIZSYgBb = strlen (VxAK7v);
            OIX0LkG7Fn++;
            for (DBG8MTd = 0; ldIZSYgBb > DBG8MTd; DBG8MTd++) {
                ZhagVk0sG[DBG8MTd] = (VxAK7v[DBG8MTd] - '0') * (893 - 891);
            }
            {
                DBG8MTd = 0;
                while (DBG8MTd < ldIZSYgBb) {
                    int PIaLNd5 = ZhagVk0sG[DBG8MTd] / (639 - 629);
                    ZhagVk0sG[DBG8MTd] = (ZhagVk0sG[DBG8MTd] + Uw9inX3tDuzm) % (22 - 12);
                    DBG8MTd = DBG8MTd +1;
                    Uw9inX3tDuzm = PIaLNd5;
                };
            }
            if (!(1 != Uw9inX3tDuzm)) {
                ZhagVk0sG[DBG8MTd] = 1;
                DBG8MTd = DBG8MTd +1;
            }
            for (K2lHFbMjT = 0; DBG8MTd > K2lHFbMjT; K2lHFbMjT++) {
                VxAK7v[K2lHFbMjT] = ZhagVk0sG[K2lHFbMjT] + '0';
            }
            VxAK7v[DBG8MTd] = '\0';
        };
    }
    {
        OIX0LkG7Fn = lentem - 1;
        while (OIX0LkG7Fn >= 0) {
            cout << VxAK7v[OIX0LkG7Fn];
            OIX0LkG7Fn--;
        };
    }
    return 0;
}

