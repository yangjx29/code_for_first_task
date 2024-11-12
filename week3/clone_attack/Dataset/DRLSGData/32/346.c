struct   jianfa {
    char bjs [(568 - 468)];
    char yKOSbF4lkHh [(852 - 752)];
}
jbO2HUlWwJ [(308 - 288)];

void  main () {
    int i, zjwPOod2vg [(928 - 908)], HmkiF1d2BUp [(664 - 644)], EI0BkFQ5bHf, CqCwSX5dR;
    scanf ("%d", &CqCwSX5dR);
    for (i = (417 - 417); i < CqCwSX5dR; i++) {
        scanf ("%s %s", jbO2HUlWwJ[i].bjs, jbO2HUlWwJ[i].yKOSbF4lkHh);
        zjwPOod2vg[i] = strlen (jbO2HUlWwJ[i].bjs);
        HmkiF1d2BUp[i] = strlen (jbO2HUlWwJ[i].yKOSbF4lkHh);
        getchar ();
    }
    for (EI0BkFQ5bHf = (41 - 41); EI0BkFQ5bHf < CqCwSX5dR; EI0BkFQ5bHf++) {
        for (i = 0; i < HmkiF1d2BUp[EI0BkFQ5bHf]; i++) {
            jbO2HUlWwJ[EI0BkFQ5bHf].bjs[zjwPOod2vg[EI0BkFQ5bHf] - (593 - 592) - i] = jbO2HUlWwJ[EI0BkFQ5bHf].bjs[zjwPOod2vg[EI0BkFQ5bHf] - (912 - 911) - i] - jbO2HUlWwJ[EI0BkFQ5bHf].yKOSbF4lkHh[HmkiF1d2BUp[EI0BkFQ5bHf] - (525 - 524) - i] + (947 - 899);
            if (jbO2HUlWwJ[EI0BkFQ5bHf].bjs[zjwPOod2vg[EI0BkFQ5bHf] - (51 - 50) - i] < (230 - 182)) {
                jbO2HUlWwJ[EI0BkFQ5bHf].bjs[zjwPOod2vg[EI0BkFQ5bHf] - 1 - i] = jbO2HUlWwJ[EI0BkFQ5bHf].bjs[zjwPOod2vg[EI0BkFQ5bHf] - 1 - i] + (100 - 90);
                jbO2HUlWwJ[EI0BkFQ5bHf].bjs[zjwPOod2vg[EI0BkFQ5bHf] - (359 - 357) - i] = jbO2HUlWwJ[EI0BkFQ5bHf].bjs[zjwPOod2vg[EI0BkFQ5bHf] - 2 - i] - 1;
            }
        }
        puts (jbO2HUlWwJ[EI0BkFQ5bHf].bjs);
    }
}

