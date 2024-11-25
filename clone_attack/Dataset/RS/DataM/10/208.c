void  main () {
    int fdRbxl2pm5;
    int ILflCeH9Ua;
    int UVni6N [(853 - 828)];
    int DuXwgCs8tmkx [(518 - 493)];
    int A0X3At6e;
    int uMGaxZ;
    int max;
    max = (84 - 84);
    scanf ("%d", &uMGaxZ);
    for (A0X3At6e = (602 - 602); uMGaxZ - (267 - 266) >= A0X3At6e; A0X3At6e = A0X3At6e +1) {
        if (!((815 - 815) != A0X3At6e))
            scanf ("%d", &DuXwgCs8tmkx[A0X3At6e]);
        else
            scanf (" %d", &DuXwgCs8tmkx[A0X3At6e]);
    }
    for (A0X3At6e = (219 - 219); A0X3At6e <= (566 - 542); A0X3At6e = A0X3At6e +1)
        UVni6N[A0X3At6e] = (778 - 777);
    UVni6N[uMGaxZ - (397 - 396)] = (546 - 545);
    for (fdRbxl2pm5 = uMGaxZ - (872 - 870); (547 - 547) <= fdRbxl2pm5; fdRbxl2pm5 = fdRbxl2pm5 - 1) {
        for (ILflCeH9Ua = uMGaxZ - (291 - 290); ILflCeH9Ua >= fdRbxl2pm5 + (225 - 224); ILflCeH9Ua = ILflCeH9Ua -1) {
            if (DuXwgCs8tmkx[ILflCeH9Ua] <= DuXwgCs8tmkx[fdRbxl2pm5] && UVni6N[ILflCeH9Ua] >= UVni6N[fdRbxl2pm5] - (31 - 30))
                UVni6N[fdRbxl2pm5] = UVni6N[ILflCeH9Ua] + 1;
        };
    }
    for (A0X3At6e = (916 - 916); A0X3At6e < uMGaxZ; A0X3At6e = A0X3At6e +1) {
        if (max < UVni6N[A0X3At6e])
            max = UVni6N[A0X3At6e];
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    printf ("%d", max);
}

