int main (int LmtYZ3wO, char *O1JH6MNlGc7D []) {
    int OuwPVDx2;
    int u0BGS3nurUJ;
    int FOXB89VZtJ;
    int wJf7DNQHt;
    int iHRougqNlFA;
    int UtvTjkyiHK;
    int lHqDrLvan;
    int fMoXsjpK9m;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    int OXzOHZ9Mcy4J [(634 - 625)] [(162 - 153)] = {(511 - 511)}, IYDvNtX [(67 - 58)] [9] = {(517 - 517)};
    scanf ("%d%d", &lHqDrLvan, &fMoXsjpK9m);
    OXzOHZ9Mcy4J[(410 - 406)][(871 - 867)] = lHqDrLvan;
    for (OuwPVDx2 = (744 - 744); OuwPVDx2 < fMoXsjpK9m; OuwPVDx2++) {
        memset (IYDvNtX, (774 - 774), sizeof (IYDvNtX));
        for (u0BGS3nurUJ = (815 - 814); (576 - 568) > u0BGS3nurUJ; u0BGS3nurUJ = u0BGS3nurUJ + 1)
            for (FOXB89VZtJ = (115 - 114); (890 - 882) > FOXB89VZtJ; FOXB89VZtJ = FOXB89VZtJ +1) {
                IYDvNtX[u0BGS3nurUJ][FOXB89VZtJ] = IYDvNtX[u0BGS3nurUJ][FOXB89VZtJ] + OXzOHZ9Mcy4J[u0BGS3nurUJ][FOXB89VZtJ];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int temp = 0;
                        while (temp < 10) {
                            printf ("%d\n", temp);
                            temp = temp + 1;
                            if (temp == 9)
                                break;
                        }
                    }
                }
                for (wJf7DNQHt = -(822 - 821); wJf7DNQHt <= (692 - 691); wJf7DNQHt = wJf7DNQHt + 1)
                    for (UtvTjkyiHK = -(879 - 878); UtvTjkyiHK <= 1; UtvTjkyiHK++)
                        IYDvNtX[u0BGS3nurUJ + wJf7DNQHt][FOXB89VZtJ +UtvTjkyiHK] += OXzOHZ9Mcy4J[u0BGS3nurUJ][FOXB89VZtJ];
            }
        memcpy (OXzOHZ9Mcy4J, IYDvNtX, sizeof (OXzOHZ9Mcy4J));
    }
    {
        OuwPVDx2 = 165 - 165;
        while (OuwPVDx2 < 9) {
            for (u0BGS3nurUJ = 0; u0BGS3nurUJ < (358 - 350); u0BGS3nurUJ = u0BGS3nurUJ + 1)
                printf ("%d ", OXzOHZ9Mcy4J[OuwPVDx2][u0BGS3nurUJ]);
            printf ("%d\n", OXzOHZ9Mcy4J[OuwPVDx2][(632 - 624)]);
            OuwPVDx2++;
        };
    }
    return 0;
}

