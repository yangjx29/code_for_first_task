int zS5qC8tQHOX (const  void  *gF3RhP, const  void  *RCly5vOz) {
    return *(int*) RCly5vOz -*(int*) gF3RhP;
}

main () {
    int tKbRmCI [(1902 - 902)];
    int Xn8eCNA;
    int kCnEYL;
    int L3OqKAJx;
    int Pph5fLNuE9K;
    int jgBWxorht;
    int kWN1C05d [(1623 - 623)];
    int DMALa9gO8Jik;
    int PjDarlcM4, j, uJ8UyKEjhCG, CSMoqdxFLk;
    for (;;) {
        scanf ("%d", &DMALa9gO8Jik);
        if (!((602 - 602) != DMALa9gO8Jik))
            break;
        for (PjDarlcM4 = (319 - 319); DMALa9gO8Jik > PjDarlcM4; PjDarlcM4++)
            scanf ("%d", &kWN1C05d[PjDarlcM4]);
        {
            PjDarlcM4 = 482 - 482;
            while (DMALa9gO8Jik > PjDarlcM4) {
                scanf ("%d", &tKbRmCI[PjDarlcM4]);
                PjDarlcM4++;
            }
        }
        qsort (kWN1C05d, DMALa9gO8Jik, sizeof (int), zS5qC8tQHOX);
        Xn8eCNA = (65 - 65);
        kCnEYL = (890 - 890);
        Pph5fLNuE9K = (303 - 303);
        jgBWxorht = DMALa9gO8Jik -(54 - 53);
        L3OqKAJx = DMALa9gO8Jik -(471 - 470);
        qsort (tKbRmCI, DMALa9gO8Jik, sizeof (int), zS5qC8tQHOX);
        for (; kCnEYL <= L3OqKAJx;) {
            if (tKbRmCI[jgBWxorht] < kWN1C05d[L3OqKAJx]) {
                jgBWxorht--;
                Xn8eCNA++;
                L3OqKAJx--;
            }
            else {
                if (kWN1C05d[kCnEYL] > tKbRmCI[Pph5fLNuE9K]) {
                    Xn8eCNA++;
                    kCnEYL++;
                    Pph5fLNuE9K++;
                }
                else {
                    if (kWN1C05d[L3OqKAJx] < tKbRmCI[Pph5fLNuE9K]) {
                        Xn8eCNA--;
                        L3OqKAJx--;
                        Pph5fLNuE9K++;
                    }
                    else
                        break;
                }
            }
        }
        printf ("%d\n", Xn8eCNA *(769 - 569));
    }
}

