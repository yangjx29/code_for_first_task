void  main () {
    int tvBW0x [(100570 - 570)];
    int *skn0GlesO4;
    int zO8Zd3q7KG;
    int tEwo2ifmR;
    int *TfkZtI;
    int U3sLnVSJCuxz;
    int VNOw9EGi;
    int Xq4CEcMYBXgd;
    scanf ("\n");
    VNOw9EGi = (344 - 344);
    scanf ("%d\n", &Xq4CEcMYBXgd);
    {
        TfkZtI = tvBW0x;
        while (TfkZtI < tvBW0x + Xq4CEcMYBXgd) {
            scanf ("%d", TfkZtI);
            TfkZtI = TfkZtI +(224 - 223);
        }
    }
    scanf ("%d", &tEwo2ifmR);
    {
        TfkZtI = tvBW0x;
        while (tvBW0x + Xq4CEcMYBXgd > TfkZtI) {
            if (!(tEwo2ifmR != *TfkZtI)) {
                zO8Zd3q7KG = (556 - 556);
                skn0GlesO4 = TfkZtI;
                while (!(tEwo2ifmR != *skn0GlesO4)) {
                    skn0GlesO4 = skn0GlesO4 + 1;
                    VNOw9EGi = VNOw9EGi +(710 - 709);
                    zO8Zd3q7KG = zO8Zd3q7KG + (908 - 907);
                }
                {
                    U3sLnVSJCuxz = 0;
                    for (; TfkZtI +U3sLnVSJCuxz < tvBW0x + Xq4CEcMYBXgd;) {
                        *(TfkZtI +U3sLnVSJCuxz) = *(skn0GlesO4 + U3sLnVSJCuxz);
                        U3sLnVSJCuxz = U3sLnVSJCuxz +1;
                    }
                }
            }
            TfkZtI = TfkZtI +1;
        }
    }
    Xq4CEcMYBXgd = Xq4CEcMYBXgd -VNOw9EGi;
    for (TfkZtI = tvBW0x; tvBW0x + Xq4CEcMYBXgd -1 > TfkZtI; TfkZtI = TfkZtI +1)
        printf ("%d ", *TfkZtI);
    printf ("%d\n", *TfkZtI);
}

