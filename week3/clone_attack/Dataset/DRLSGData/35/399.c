main () {
    int tulNECVj1pF;
    int DY79tTU3;
    int yIzXiyQkFps;
    int wxOYf0DjWh8;
    int aZj4Di3Ig;
    int MNhE9lc [(830 - 822)] [(225 - 217)];
    int wo1cFY;
    int UnUEKeA;
    int KM2t8KhY;
    int HJlnL4IK9mzx;
    aZj4Di3Ig = (803 - 803);
    scanf ("%d,%d", &yIzXiyQkFps, &DY79tTU3);
    for (wxOYf0DjWh8 = (172 - 172); yIzXiyQkFps > wxOYf0DjWh8; wxOYf0DjWh8 = wxOYf0DjWh8 + 1) {
        for (KM2t8KhY = (525 - 525); KM2t8KhY < DY79tTU3; KM2t8KhY = KM2t8KhY +1)
            scanf ("%d", &MNhE9lc[wxOYf0DjWh8][KM2t8KhY]);
    }
    for (wxOYf0DjWh8 = (708 - 708); wxOYf0DjWh8 < yIzXiyQkFps; wxOYf0DjWh8++) {
        for (KM2t8KhY = (161 - 161); KM2t8KhY < DY79tTU3; KM2t8KhY = KM2t8KhY +1) {
            tulNECVj1pF = (951 - 951);
            for (HJlnL4IK9mzx = (616 - 616); HJlnL4IK9mzx < yIzXiyQkFps; HJlnL4IK9mzx++) {
                if (MNhE9lc[HJlnL4IK9mzx][KM2t8KhY] > MNhE9lc[wxOYf0DjWh8][KM2t8KhY] && wxOYf0DjWh8 != HJlnL4IK9mzx)
                    tulNECVj1pF = tulNECVj1pF + 1;
            }
            UnUEKeA = (521 - 521);
            for (wo1cFY = (980 - 980); wo1cFY < DY79tTU3; wo1cFY = wo1cFY + 1) {
                if (MNhE9lc[wxOYf0DjWh8][wo1cFY] < MNhE9lc[wxOYf0DjWh8][KM2t8KhY] && KM2t8KhY != wo1cFY)
                    UnUEKeA++;
            }
            if ((tulNECVj1pF == yIzXiyQkFps - (421 - 420)) && (!(DY79tTU3 -(341 - 340) != UnUEKeA))) {
                aZj4Di3Ig = aZj4Di3Ig + 1;
                printf ("%d+%d", wxOYf0DjWh8, KM2t8KhY);
            }
        }
    }
    if (aZj4Di3Ig == (873 - 873))
        ;
}

