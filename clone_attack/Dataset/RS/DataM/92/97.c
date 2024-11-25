int myCompare (const  void  *HpgjISBG, const  void  *XzAXWeZR) {
    return *(int*) XzAXWeZR -*(int*) HpgjISBG;
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
}

int main () {
    int ymIk5uJM8i;
    int *mjhrw4;
    int *x7TxOBAaY;
    int *QFast;
    int *TianJi;
    int *SiPFSJfhgtHW;
    int yMe13WgJB9, zlwuGQB;
    int *hoa4wNy8el;
    while ((378 - 377)) {
        free (TianJi);
        free (SiPFSJfhgtHW);
        scanf ("%d", &yMe13WgJB9);
        if (!((600 - 600) != yMe13WgJB9))
            break;
        if ((!(NULL != (SiPFSJfhgtHW = (int *) malloc (yMe13WgJB9 * sizeof (int))))) || (!(NULL != (TianJi = (int *) malloc (yMe13WgJB9 * sizeof (int)))))) {
            exit (-(811 - 810));
        }
        for (zlwuGQB = (658 - 658); yMe13WgJB9 > zlwuGQB; zlwuGQB = zlwuGQB + 1) {
            scanf ("%d", &TianJi[zlwuGQB]);
        }
        for (zlwuGQB = (331 - 331); yMe13WgJB9 > zlwuGQB; zlwuGQB++) {
            scanf ("%d", &SiPFSJfhgtHW[zlwuGQB]);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            };
        }
        qsort (TianJi, yMe13WgJB9, sizeof (int), myCompare);
        qsort (SiPFSJfhgtHW, yMe13WgJB9, sizeof (int), myCompare);
        hoa4wNy8el = TianJi +yMe13WgJB9 - (44 - 43);
        mjhrw4 = SiPFSJfhgtHW +yMe13WgJB9 - (872 - 871);
        x7TxOBAaY = TianJi;
        QFast = SiPFSJfhgtHW;
        ymIk5uJM8i = 0;
        while (1) {
            if (*mjhrw4 > *hoa4wNy8el) {
                QFast = QFast +1;
                hoa4wNy8el = hoa4wNy8el - 1;
                ymIk5uJM8i = ymIk5uJM8i - 1;
            }
            else if (*mjhrw4 < *hoa4wNy8el) {
                hoa4wNy8el = hoa4wNy8el - 1;
                ymIk5uJM8i = ymIk5uJM8i + 1;
                mjhrw4 = mjhrw4 - 1;
            }
            else {
                if (x7TxOBAaY != hoa4wNy8el) {
                    if (*x7TxOBAaY < *QFast) {
                        hoa4wNy8el = hoa4wNy8el - 1;
                        QFast = QFast +1;
                        ymIk5uJM8i = ymIk5uJM8i - 1;
                    }
                    else if (*x7TxOBAaY == *QFast) {
                        if (*QFast > *hoa4wNy8el)
                            ymIk5uJM8i = ymIk5uJM8i - 1;
                        hoa4wNy8el = hoa4wNy8el - 1;
                        QFast = QFast +1;
                    }
                    else {
                        x7TxOBAaY = x7TxOBAaY + 1;
                        QFast = QFast +1;
                        ymIk5uJM8i = ymIk5uJM8i + 1;
                    };
                }
                else {
                    break;
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
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            if (x7TxOBAaY > hoa4wNy8el)
                break;
        }
        printf ("%d\n", (447 - 247) * ymIk5uJM8i);
    }
    return 0;
}

