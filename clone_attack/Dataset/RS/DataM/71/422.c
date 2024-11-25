int main () {
    int hJW4mb1ZN5t, i = (321 - 321), iZqHoFx = (103 - 103), yXQfJvN = (287 - 287), j4xkeG, u0mTBzG2 = 0;
    int obP2xKI [200], nuxrqC [200], fcGBlVgD [200];
    scanf ("%d", &hJW4mb1ZN5t);
    {
        i = 0;
        while (yXQfJvN < hJW4mb1ZN5t) {
            scanf ("%d %d %d", &obP2xKI[i], &nuxrqC[i], &fcGBlVgD[i]);
            if (nuxrqC[i] > fcGBlVgD[i]) {
                j4xkeG = nuxrqC[i];
                nuxrqC[i] = fcGBlVgD[i];
                fcGBlVgD[i] = j4xkeG;
            }
            u0mTBzG2 = 0;
            for (iZqHoFx = nuxrqC[i]; iZqHoFx < fcGBlVgD[i]; iZqHoFx = iZqHoFx + 1) {
                if (iZqHoFx == 2) {
                    if ((obP2xKI[i] % 400 == 0 || (!(0 != obP2xKI[i] % 4) && obP2xKI[i] % 100 != 0))) {
                        u0mTBzG2 += 29;
                    }
                    else
                        u0mTBzG2 = u0mTBzG2 + 28;
                }
                else if (!(1 != iZqHoFx) || iZqHoFx == (406 - 403) || iZqHoFx == 5 || !(7 != iZqHoFx) || iZqHoFx == 8 || iZqHoFx == 10 || iZqHoFx == 12) {
                    u0mTBzG2 = u0mTBzG2 + 31;
                }
                else if (iZqHoFx == 4 || iZqHoFx == 6 || iZqHoFx == 9 || iZqHoFx == 11) {
                    u0mTBzG2 += 30;
                };
            }
            i = i + 1;
            if (u0mTBzG2 % 7 == 0)
                ;
            else {
                if (u0mTBzG2 % 7 != 0)
                    printf ("NO\n");
            }
            yXQfJvN = yXQfJvN + 1;
        };
    }
    return 0;
}

