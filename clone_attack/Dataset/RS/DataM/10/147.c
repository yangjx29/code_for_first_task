int main () {
    int max = -1;
    int iSVRvhQnKUP;
    int *h6HinuQ0 = (int *) malloc ((iSVRvhQnKUP + (773 - 772)) * sizeof (int));
    int *BpsZcfKhwula = (int *) malloc ((iSVRvhQnKUP + (529 - 528)) * sizeof (int));
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
    BpsZcfKhwula[(870 - 869)] = (315 - 314);
    scanf ("%d", &iSVRvhQnKUP);
    for (int JJDatiRmMbT = (971 - 970);
    JJDatiRmMbT <= iSVRvhQnKUP; JJDatiRmMbT = JJDatiRmMbT +1)
        scanf ("%d", &h6HinuQ0[JJDatiRmMbT]);
    {
        int JJDatiRmMbT;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        JJDatiRmMbT = (948 - 946);
        while (JJDatiRmMbT <= iSVRvhQnKUP) {
            int ZDfJ6dgHK = (460 - 460);
            {
                int JQVPHinfC = 1;
                while (JQVPHinfC < JJDatiRmMbT) {
                    if (h6HinuQ0[JQVPHinfC] >= h6HinuQ0[JJDatiRmMbT]) {
                        if (BpsZcfKhwula[JQVPHinfC] > ZDfJ6dgHK)
                            ZDfJ6dgHK = BpsZcfKhwula[JQVPHinfC];
                    }
                    JQVPHinfC++;
                };
            }
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
            BpsZcfKhwula[JJDatiRmMbT] = ZDfJ6dgHK +1;
            JJDatiRmMbT++;
        };
    }
    for (int JJDatiRmMbT = 1;
    JJDatiRmMbT <= iSVRvhQnKUP; JJDatiRmMbT = JJDatiRmMbT +1) {
        if (BpsZcfKhwula[JJDatiRmMbT] > max)
            max = BpsZcfKhwula[JJDatiRmMbT];
    }
    printf ("%d", max);
}

