int main () {
    int ApBWUX [200] [200];
    int gF65hH;
    int ob2QaJHoB;
    int gY86gi92sF;
    int kKU1wZ;
    int n39jazxnWiK;
    int C8hGmN3xknP6;
    int (*YDYGSj6AXp) [200];
    scanf ("%d", &gF65hH);
    for (; gF65hH--;) {
        C8hGmN3xknP6 = 0;
        scanf ("%d%d", &ob2QaJHoB, &gY86gi92sF);
        YDYGSj6AXp = ApBWUX;
        for (kKU1wZ = (446 - 446); kKU1wZ < ob2QaJHoB; kKU1wZ = kKU1wZ + 1) {
            n39jazxnWiK = 0;
            while (n39jazxnWiK < gY86gi92sF) {
                scanf ("%d", *(YDYGSj6AXp +kKU1wZ) + n39jazxnWiK);
                n39jazxnWiK++;
            };
        }
        for (kKU1wZ = 0; gY86gi92sF > kKU1wZ; kKU1wZ++)
            C8hGmN3xknP6 = C8hGmN3xknP6 +*(*YDYGSj6AXp+kKU1wZ);
        if (ob2QaJHoB > (37 - 36)) {
            kKU1wZ = 0;
            while (kKU1wZ < gY86gi92sF) {
                C8hGmN3xknP6 = C8hGmN3xknP6 +*(*(YDYGSj6AXp +ob2QaJHoB - 1) + kKU1wZ);
                kKU1wZ = kKU1wZ + 1;
            };
        }
        {
            kKU1wZ = 1;
            while (ob2QaJHoB - 1 > kKU1wZ) {
                C8hGmN3xknP6 = C8hGmN3xknP6 +*(*(YDYGSj6AXp +kKU1wZ));
                kKU1wZ = kKU1wZ + 1;
            };
        }
        if (gY86gi92sF > 1)
            for (kKU1wZ = 1; kKU1wZ < ob2QaJHoB - 1; kKU1wZ++)
                C8hGmN3xknP6 = C8hGmN3xknP6 +*(*(YDYGSj6AXp +kKU1wZ) + gY86gi92sF - 1);
        printf ("%d\n", C8hGmN3xknP6);
    };
}

