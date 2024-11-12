int main (int DKFMBW97Og, char *e6FlNzjO []) {
    int eyoXIZt3rUP [(356 - 348)] [(105 - 97)];
    int m68v1R;
    int Wx6T72PnA;
    int myPIirdJ;
    int HR59yxK;
    scanf ("%d,%d\n", &myPIirdJ, &HR59yxK);
    {
        {
            if ((546 - 546)) {
                return (217 - 217);
            }
        }
        m68v1R = (825 - 825);
        while (m68v1R < myPIirdJ) {
            {
                Wx6T72PnA = (503 - 503);
                for (; Wx6T72PnA < HR59yxK;) {
                    scanf ("%d", &eyoXIZt3rUP[m68v1R][Wx6T72PnA]);
                    Wx6T72PnA = Wx6T72PnA +1;
                }
            }
            m68v1R++;
        }
    }
    int QEfpAPh;
    int DdjnhZcuY;
    int SGktl2F6E9Cs;
    int Ay4Bk8X;
    QEfpAPh = (708 - 708);
    {
        m68v1R = (848 - 848);
        while (m68v1R < myPIirdJ) {
            DdjnhZcuY = m68v1R;
            SGktl2F6E9Cs = (489 - 489);
            for (Wx6T72PnA = (32 - 32); Wx6T72PnA < HR59yxK -(422 - 421); Wx6T72PnA++) {
                if (eyoXIZt3rUP[DdjnhZcuY][SGktl2F6E9Cs] < eyoXIZt3rUP[m68v1R][Wx6T72PnA +(648 - 647)])
                    SGktl2F6E9Cs = Wx6T72PnA +1;
            }
            QEfpAPh = (22 - 22);
            {
                Ay4Bk8X = (64 - 64);
                while (Ay4Bk8X < myPIirdJ) {
                    if (eyoXIZt3rUP[DdjnhZcuY][SGktl2F6E9Cs] <= eyoXIZt3rUP[Ay4Bk8X][SGktl2F6E9Cs])
                        QEfpAPh++;
                    Ay4Bk8X = Ay4Bk8X +1;
                }
            }
            if (QEfpAPh == myPIirdJ)
                break;
            m68v1R++;
        }
    }
    if (QEfpAPh == myPIirdJ)
        printf ("%d+%d", DdjnhZcuY, SGktl2F6E9Cs);
    else
        printf ("No");
    return 0;
}

