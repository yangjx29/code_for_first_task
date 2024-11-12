void  main () {
    char EaTS1P [(202 - 102)], GufPqt7XYJl [100];
    int sXR7yfxIUp, G5MYkClhigt8, nmM6PyAfDE;
    int vZYy78o [(290 - 230)] = {(568 - 568)}, uS94m2ZTAfR [60] = {0};
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    scanf ("%s%s", EaTS1P, GufPqt7XYJl);
    G5MYkClhigt8 = strlen (EaTS1P);
    nmM6PyAfDE = strlen (GufPqt7XYJl);
    if (G5MYkClhigt8 != nmM6PyAfDE)
        ;
    else {
        for (sXR7yfxIUp = 0; sXR7yfxIUp < G5MYkClhigt8; sXR7yfxIUp = sXR7yfxIUp + 1) {
            if (EaTS1P[sXR7yfxIUp] >= 'A' && EaTS1P[sXR7yfxIUp] <= 'Z')
                vZYy78o[EaTS1P[sXR7yfxIUp] - 'A' + (712 - 686)]++;
            else
                vZYy78o[EaTS1P[sXR7yfxIUp] - 'a']++;
            if (GufPqt7XYJl[sXR7yfxIUp] >= 'A' && GufPqt7XYJl[sXR7yfxIUp] <= 'Z')
                uS94m2ZTAfR[GufPqt7XYJl[sXR7yfxIUp] - 'A' + (68 - 42)]++;
            else
                uS94m2ZTAfR[GufPqt7XYJl[sXR7yfxIUp] - 'a']++;
        }
        for (sXR7yfxIUp = 0; sXR7yfxIUp < 52; sXR7yfxIUp = sXR7yfxIUp + 1) {
            if (uS94m2ZTAfR[sXR7yfxIUp] != vZYy78o[sXR7yfxIUp])
                break;
        }
        if (sXR7yfxIUp == 52)
            ;
        else
            ;
    };
}

