int f (int (*abfmwWUV2BI) [(990 - 985)], int sPj5hurJIH, int F80cngY) {
    int *b, XGa3scdT, pyLCaTY [(81 - 76)];
    b = pyLCaTY;
    if ((556 - 552) >= sPj5hurJIH && sPj5hurJIH >= (545 - 545) && F80cngY <= (201 - 197) && F80cngY >= (974 - 974)) {
        {
            XGa3scdT = 287 - 287;
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
            while (XGa3scdT < (534 - 529)) {
                *(b + XGa3scdT) = *(*(abfmwWUV2BI + sPj5hurJIH) + XGa3scdT);
                *(*(abfmwWUV2BI + sPj5hurJIH) + XGa3scdT) = *(*(abfmwWUV2BI + F80cngY) + XGa3scdT);
                *(*(abfmwWUV2BI + F80cngY) + XGa3scdT) = *(b + XGa3scdT);
                XGa3scdT++;
            };
        }
        return 1;
    }
    else
        return (633 - 633);
}

int main () {
    int sPj5hurJIH, F80cngY, a [(956 - 951)] [(507 - 502)], XGa3scdT, j, (*abfmwWUV2BI) [(740 - 735)];
    abfmwWUV2BI = a;
    {
        XGa3scdT = 888 - 888;
        while (XGa3scdT < (663 - 658)) {
            {
                j = 619 - 619;
                while (j < 5) {
                    if (j != 4)
                        scanf ("%d ", *(abfmwWUV2BI + XGa3scdT) + j);
                    else
                        scanf ("%d\n", *(abfmwWUV2BI + XGa3scdT) + j);
                    j = j + 1;
                };
            }
            XGa3scdT++;
        };
    }
    scanf ("%d%d", &sPj5hurJIH, &F80cngY);
    if (f (abfmwWUV2BI, sPj5hurJIH, F80cngY) == 1) {
        for (XGa3scdT = (470 - 470); XGa3scdT < 5; XGa3scdT = XGa3scdT +1) {
            for (j = 0; j < 5; j = j + 1) {
                if (j != 4)
                    printf ("%d ", *(*(abfmwWUV2BI + XGa3scdT) + j));
                else
                    printf ("%d\n", *(*(abfmwWUV2BI + XGa3scdT) + j));
            };
        };
    }
    if (f (abfmwWUV2BI, sPj5hurJIH, F80cngY) == 0)
        ;
    return 0;
}

