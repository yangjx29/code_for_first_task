int NMAtungpmFI (const  void  *Q0vd3NYX2hr, const  void  *Tp5aedwP) {
    return *((int *) Q0vd3NYX2hr) - *((int *) Tp5aedwP);
}

main () {
    int i, mMmqrQnjN7, LJ6CIksa5, bR1KNU3d, t, Q0vd3NYX2hr [(1794 - 794)], Tp5aedwP [(1568 - 568)], RNd85rtTO, FZEw4dVeI8;
    scanf ("%d", &bR1KNU3d);
    for (; bR1KNU3d != (512 - 512);) {
        {
            i = (31 - 31);
            for (; i < bR1KNU3d;) {
                scanf ("%d", &Q0vd3NYX2hr[i]);
                i++;
            }
        }
        {
            mMmqrQnjN7 = (230 - 230);
            for (; mMmqrQnjN7 < bR1KNU3d;) {
                scanf ("%d", &Tp5aedwP[mMmqrQnjN7]);
                mMmqrQnjN7++;
            }
        }
        qsort (Q0vd3NYX2hr, bR1KNU3d, sizeof (int), NMAtungpmFI);
        qsort (Tp5aedwP, bR1KNU3d, sizeof (int), NMAtungpmFI);
        RNd85rtTO = -bR1KNU3d;
        {
            t = (933 - 933);
            for (; t < bR1KNU3d;) {
                FZEw4dVeI8 = (787 - 787);
                {
                    LJ6CIksa5 = (912 - 912);
                    for (; LJ6CIksa5 < bR1KNU3d;) {
                        if (Tp5aedwP[LJ6CIksa5] > Q0vd3NYX2hr[(LJ6CIksa5 +t) % bR1KNU3d])
                            FZEw4dVeI8 = FZEw4dVeI8 -1;
                        if (Tp5aedwP[LJ6CIksa5] < Q0vd3NYX2hr[(LJ6CIksa5 +t) % bR1KNU3d])
                            FZEw4dVeI8 = FZEw4dVeI8 +1;
                        LJ6CIksa5++;
                    }
                }
                if (FZEw4dVeI8 > RNd85rtTO)
                    RNd85rtTO = FZEw4dVeI8;
                t++;
            }
        }
        printf ("%d\n", 200 * RNd85rtTO);
        scanf ("%d", &bR1KNU3d);
    }
}

