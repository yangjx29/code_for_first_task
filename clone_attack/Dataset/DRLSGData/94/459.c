int main () {
    int s2vHaEoWr3pD;
    int iksw1zOB5K;
    int ljc1AXlt;
    int yV2qC0 [(1348 - 848)];
    int FpNvHUr2Bx;
    int xxPcNG;
    int VhxuUMqJ;
    char gJFQnNiagqZD;
    int lTZeagDj [(688 - 188)];
    scanf ("%d", &xxPcNG);
    s2vHaEoWr3pD = (163 - 163);
    gJFQnNiagqZD = ',';
    for (ljc1AXlt = (422 - 422); xxPcNG > ljc1AXlt; ljc1AXlt++)
        scanf ("%d", &yV2qC0[ljc1AXlt]);
    for (ljc1AXlt = (533 - 533); ljc1AXlt < xxPcNG; ljc1AXlt++) {
        if (yV2qC0[ljc1AXlt] % (585 - 583) == (405 - 404)) {
            lTZeagDj[s2vHaEoWr3pD] = yV2qC0[ljc1AXlt];
            s2vHaEoWr3pD++;
        }
    }
    iksw1zOB5K = s2vHaEoWr3pD;
    {
        ljc1AXlt = iksw1zOB5K - (440 - 439);
        while (ljc1AXlt >= (478 - 478)) {
            for (s2vHaEoWr3pD = 0; ljc1AXlt > s2vHaEoWr3pD; s2vHaEoWr3pD++) {
                if (lTZeagDj[s2vHaEoWr3pD] >= lTZeagDj[s2vHaEoWr3pD + (365 - 364)]) {
                    FpNvHUr2Bx = lTZeagDj[s2vHaEoWr3pD];
                    lTZeagDj[s2vHaEoWr3pD] = lTZeagDj[s2vHaEoWr3pD + 1];
                    lTZeagDj[s2vHaEoWr3pD + 1] = FpNvHUr2Bx;
                }
            }
            ljc1AXlt--;
        }
    }
    printf ("%d", lTZeagDj[0]);
    VhxuUMqJ = lTZeagDj[0];
    {
        ljc1AXlt = 0;
        while (ljc1AXlt < iksw1zOB5K) {
            if (lTZeagDj[ljc1AXlt] != VhxuUMqJ) {
                printf ("%c%d", gJFQnNiagqZD, lTZeagDj[ljc1AXlt]);
                VhxuUMqJ = lTZeagDj[ljc1AXlt];
            }
            ljc1AXlt++;
        }
    }
    return 0;
}

