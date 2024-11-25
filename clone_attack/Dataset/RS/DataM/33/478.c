int main () {
    int uChjoDY, PhdzAsoVBc1g = (65 - 65), V2ijJEU = (627 - 627);
    char YTfg5X2OImwG [(1997 - 997)] [1000];
    scanf ("%d", &uChjoDY);
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
    for (PhdzAsoVBc1g = (491 - 491); PhdzAsoVBc1g < uChjoDY; PhdzAsoVBc1g++) {
        scanf ("%s", YTfg5X2OImwG[PhdzAsoVBc1g]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    for (PhdzAsoVBc1g = (960 - 960); PhdzAsoVBc1g < uChjoDY; PhdzAsoVBc1g++) {
        V2ijJEU = 0;
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
        while (V2ijJEU < strlen (YTfg5X2OImwG[PhdzAsoVBc1g])) {
            switch (YTfg5X2OImwG[PhdzAsoVBc1g][V2ijJEU]) {
            case 'T' :
                YTfg5X2OImwG[PhdzAsoVBc1g][V2ijJEU] = 'A';
                break;
            case 'A' :
                YTfg5X2OImwG[PhdzAsoVBc1g][V2ijJEU] = 'T';
                break;
            case 'G' :
                YTfg5X2OImwG[PhdzAsoVBc1g][V2ijJEU] = 'C';
                break;
            case 'C' :
                YTfg5X2OImwG[PhdzAsoVBc1g][V2ijJEU] = 'G';
                break;
            default :
                YTfg5X2OImwG[PhdzAsoVBc1g][V2ijJEU] = 0;
                break;
            }
            V2ijJEU = V2ijJEU +1;
        };
    }
    for (PhdzAsoVBc1g = 0; PhdzAsoVBc1g < uChjoDY; PhdzAsoVBc1g++) {
        printf ("%s\n", YTfg5X2OImwG[PhdzAsoVBc1g]);
    }
    return 0;
}

