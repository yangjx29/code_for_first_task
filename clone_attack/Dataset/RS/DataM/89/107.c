int main () {
    int i;
    int eIG7A1;
    int pWibRjq;
    int eMxNHS9Rf3;
    int kuCMBRPhSl;
    int Swu6pK0nAS;
    int iFrOC40cHDS [10000];
    int zAc7javY0 [10000];
    scanf ("%d", &Swu6pK0nAS);
    memset (iFrOC40cHDS, 0, sizeof (iFrOC40cHDS));
    memset (zAc7javY0, 0, sizeof (zAc7javY0));
    for (; 1;) {
        scanf ("%d%d", &i, &eIG7A1);
        if ((i == 0) && (eIG7A1 == 0))
            break;
        zAc7javY0[eIG7A1]++;
        iFrOC40cHDS[i] = 1;
    }
    eMxNHS9Rf3 = 0;
    {
        i = 0;
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
        while (i < Swu6pK0nAS) {
            if ((iFrOC40cHDS[i] == 0) && (zAc7javY0[i] == Swu6pK0nAS -1)) {
                printf ("%d", i);
                eMxNHS9Rf3 = 1;
            }
            i++;
        };
    }
    if (eMxNHS9Rf3 == 0)
        printf ("NOT FOUND");
}

