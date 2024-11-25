int main () {
    int HXnmwskj [300];
    int eOV8CD6fG4H;
    scanf ("%d", &eOV8CD6fG4H);
    {
        int GQD2g51s = 0;
        while (GQD2g51s < eOV8CD6fG4H) {
            scanf ("%d", &HXnmwskj[GQD2g51s]);
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
            GQD2g51s = GQD2g51s +1;
        };
    }
    printf ("%d", HXnmwskj[0]);
    for (int uGdiMP = (427 - 426);
    uGdiMP < eOV8CD6fG4H; uGdiMP++) {
        int UP1wUSDz;
        {
            UP1wUSDz = 0;
            while (UP1wUSDz < uGdiMP) {
                if (HXnmwskj[uGdiMP] == HXnmwskj[UP1wUSDz])
                    break;
                UP1wUSDz = UP1wUSDz +1;
            };
        }
        if (UP1wUSDz == uGdiMP) {
            printf (",%d", HXnmwskj[uGdiMP]);
        }
        else
            continue;
    }
    return 0;
}

