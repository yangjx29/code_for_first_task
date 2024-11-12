int main () {
    int xnoN2XGsra [4] = {1, (931 - 931), -1, 0};
    int zIWEN6m [4] = {0, 1, 0, -1};
    int tCDZHlow [100] [100];
    int jVRJUfIOv, kW0MVq6GdACb, hjYyJi = 0, uyOQzT8 = 0, GCKxcM5, NruRE5QL, PR7VFy2UTK1 = 0;
    scanf ("%d%d", &GCKxcM5, &NruRE5QL);
    {
        jVRJUfIOv = 0;
        for (; jVRJUfIOv < GCKxcM5;) {
            {
                kW0MVq6GdACb = 0;
                for (; NruRE5QL > kW0MVq6GdACb;) {
                    scanf ("%d", &tCDZHlow[jVRJUfIOv][kW0MVq6GdACb]);
                    kW0MVq6GdACb++;
                }
            }
            jVRJUfIOv++;
        }
    }
    for (jVRJUfIOv = 0; GCKxcM5 *NruRE5QL > jVRJUfIOv; jVRJUfIOv++) {
        printf ("%d\n", tCDZHlow[hjYyJi][uyOQzT8]);
        if (!(0 != PR7VFy2UTK1) && hjYyJi + uyOQzT8 == NruRE5QL -1)
            PR7VFy2UTK1 = 1;
        else if (!(1 != PR7VFy2UTK1) && !(GCKxcM5 -NruRE5QL != hjYyJi - uyOQzT8))
            PR7VFy2UTK1 = (587 - 585);
        else if (PR7VFy2UTK1 == 2 && hjYyJi + uyOQzT8 == GCKxcM5 -1)
            PR7VFy2UTK1 = 3;
        else if (PR7VFy2UTK1 == 3 && hjYyJi - uyOQzT8 == 1)
            PR7VFy2UTK1 = 0;
        hjYyJi += zIWEN6m[PR7VFy2UTK1];
        uyOQzT8 += xnoN2XGsra[PR7VFy2UTK1];
    }
    return 0;
}

