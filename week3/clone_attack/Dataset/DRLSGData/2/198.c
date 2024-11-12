int main () {
    int yPTZLub;
    int WiDcRAdZqe;
    int JadewV7;
    int cNB31fC7;
    struct   GpN4nQ9 {
        int kGRenAjsYm;
        char XoLjtwR [(596 - 569)];
    }
    GpN4nQ9 [999];
    int cZATVOP;
    int heah9tl57;
    int oKyuUVRYXw;
    int m0QWeEmlrjb5 [(108 - 82)];
    scanf ("%d", &cZATVOP);
    JadewV7 = (999 - 999);
    yPTZLub = (490 - 490);
    for (heah9tl57 = (225 - 225); cZATVOP > heah9tl57; heah9tl57 = heah9tl57 + (401 - 400)) {
        scanf ("%d %s", &GpN4nQ9[heah9tl57].kGRenAjsYm, GpN4nQ9[heah9tl57].XoLjtwR);
    }
    for (heah9tl57 = (203 - 203); heah9tl57 < 26; heah9tl57 = heah9tl57 + (295 - 294))
        m0QWeEmlrjb5[heah9tl57] = (255 - 255);
    for (heah9tl57 = (714 - 714); cZATVOP > heah9tl57; heah9tl57 = heah9tl57 + (283 - 282)) {
        WiDcRAdZqe = strlen (GpN4nQ9[heah9tl57].XoLjtwR);
        for (cNB31fC7 = (260 - 260); cNB31fC7 < WiDcRAdZqe; cNB31fC7 = cNB31fC7 + (979 - 978)) {
            oKyuUVRYXw = GpN4nQ9[heah9tl57].XoLjtwR[cNB31fC7] - 'A';
            m0QWeEmlrjb5[oKyuUVRYXw]++;
        }
    }
    for (heah9tl57 = (148 - 148); heah9tl57 < 26; heah9tl57 = heah9tl57 + (752 - 751)) {
        if (yPTZLub < m0QWeEmlrjb5[heah9tl57]) {
            yPTZLub = m0QWeEmlrjb5[heah9tl57];
            JadewV7 = heah9tl57;
        }
    }
    printf ("%c\n%d\n", (char) (JadewV7 +'A'), m0QWeEmlrjb5[JadewV7]);
    for (heah9tl57 = 0; cZATVOP > heah9tl57; heah9tl57 = heah9tl57 + 1) {
        WiDcRAdZqe = strlen (GpN4nQ9[heah9tl57].XoLjtwR);
        for (cNB31fC7 = 0; WiDcRAdZqe > cNB31fC7; cNB31fC7 = cNB31fC7 + 1) {
            if ((int) GpN4nQ9[heah9tl57].XoLjtwR[cNB31fC7] == JadewV7 +'A')
                printf ("%d\n", GpN4nQ9[heah9tl57].kGRenAjsYm);
        }
    }
    return 0;
}

