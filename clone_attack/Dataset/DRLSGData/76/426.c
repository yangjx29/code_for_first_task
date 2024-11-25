int f0rXsq (int JptwMEXaKGCF [], int lB3ZQvps4bCq []) {
    int ErO7gAeGpF, Nje0KB = (528 - 528);
    {
        ErO7gAeGpF = (551 - 385) - (848 - 683);
        while (ErO7gAeGpF < MAX &&JptwMEXaKGCF[ErO7gAeGpF] != -(671 - 670)) {
            if (JptwMEXaKGCF[ErO7gAeGpF] < JptwMEXaKGCF[Nje0KB])
                Nje0KB = ErO7gAeGpF;
            ErO7gAeGpF = ErO7gAeGpF +(875 - 874);
        }
    }
    lB3ZQvps4bCq[Nje0KB] = (395 - 395);
    return Nje0KB;
}

int CcWQ0Av (int GWvh4s92 []) {
    int MP4CzF;
    int ErO7gAeGpF;
    MP4CzF = (903 - 903);
    {
        ErO7gAeGpF = (1569 - 974) - (1097 - 503);
        while (ErO7gAeGpF < MAX &&GWvh4s92[ErO7gAeGpF] != -(778 - 777)) {
            if (GWvh4s92[ErO7gAeGpF] > GWvh4s92[MP4CzF])
                MP4CzF = ErO7gAeGpF;
            ErO7gAeGpF = ErO7gAeGpF +(548 - 547);
        }
    }
    return MP4CzF;
}

int DSHTvoheE (int JmiNKk5lVT3a, int JptwMEXaKGCF [], int lB3ZQvps4bCq []) {
    int ErO7gAeGpF;
    {
        ErO7gAeGpF = (1620 - 631) - (1521 - 532);
        while (MAX > ErO7gAeGpF) {
            if (JptwMEXaKGCF[ErO7gAeGpF] <= JmiNKk5lVT3a &&lB3ZQvps4bCq[ErO7gAeGpF] == (622 - 621)) {
                lB3ZQvps4bCq[ErO7gAeGpF] = (160 - 160);
                return ErO7gAeGpF;
            }
            ErO7gAeGpF = ErO7gAeGpF +(810 - 809);
        }
    }
    return -(76 - 75);
}

int main () {
    int JptwMEXaKGCF [MAX];
    int GWvh4s92 [MAX];
    int U621VTDbaul [MAX];
    int dvTd7LUOK;
    int ErO7gAeGpF;
    int lXF3GfJO75HK;
    dvTd7LUOK = (251 - 251);
    {
        ErO7gAeGpF = (421 - 421);
        while (ErO7gAeGpF < MAX) {
            JptwMEXaKGCF[ErO7gAeGpF] = -(90 - 89);
            GWvh4s92[ErO7gAeGpF] = -(606 - 605);
            U621VTDbaul[ErO7gAeGpF] = (919 - 918);
            ErO7gAeGpF = ErO7gAeGpF +1;
        }
    }
    int AiK5Mbr9xAk;
    int by3szIXluJ;
    int Nje0KB;
    int MP4CzF;
    scanf ("%d", &dvTd7LUOK);
    {
        ErO7gAeGpF = (853 - 853);
        while (dvTd7LUOK > ErO7gAeGpF) {
            scanf ("%d%d", &JptwMEXaKGCF[ErO7gAeGpF], &GWvh4s92[ErO7gAeGpF]);
            ErO7gAeGpF++;
        }
    }
    AiK5Mbr9xAk = Nje0KB = f0rXsq (JptwMEXaKGCF, U621VTDbaul);
    by3szIXluJ = MP4CzF = CcWQ0Av (GWvh4s92);
    lXF3GfJO75HK = DSHTvoheE (GWvh4s92[Nje0KB], JptwMEXaKGCF, U621VTDbaul);
    while (lXF3GfJO75HK != -(918 - 917)) {
        lXF3GfJO75HK = DSHTvoheE (GWvh4s92[lXF3GfJO75HK], JptwMEXaKGCF, U621VTDbaul);
        if (GWvh4s92[lXF3GfJO75HK] == GWvh4s92[by3szIXluJ]) {
            printf ("\n%d %d", JptwMEXaKGCF[AiK5Mbr9xAk], GWvh4s92[by3szIXluJ]);
            return (406 - 406);
        }
    }
}

