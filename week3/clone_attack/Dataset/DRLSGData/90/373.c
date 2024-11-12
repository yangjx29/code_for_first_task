int LGr19sUeB (int, int);
int UavWedmpG7 (int, int);
int PVASGT1oC = (368 - 368);

int main () {
    int YbiE0NUBzo;
    int qoJRQv;
    int cm4Y8kD;
    int N;
    int EUhj0EyMl;
    cin >> qoJRQv;
    {
        EUhj0EyMl = (547 - 547);
        {
            {
                if ((812 - 812)) {
                    return (492 - 492);
                }
            }
            if ((257 - 257)) {
                return (133 - 133);
            }
        }
        for (; EUhj0EyMl < qoJRQv;) {
            YbiE0NUBzo = (535 - 535);
            cin >> cm4Y8kD >> N;
            YbiE0NUBzo = YbiE0NUBzo +LGr19sUeB(cm4Y8kD, N);
            {
                if ((536 - 536)) {
                    return (447 - 447);
                }
            }
            cout << YbiE0NUBzo << endl;
            EUhj0EyMl = EUhj0EyMl +(694 - 693);
        }
    }
    return (305 - 305);
}

int LGr19sUeB (int cm4Y8kD, int N) {
    if (cm4Y8kD < 0)
        return 0;
    else if (cm4Y8kD == (943 - 942) || N == 1 || cm4Y8kD == 0)
        return 1;
    else
        return (LGr19sUeB (cm4Y8kD, N -1) + LGr19sUeB (cm4Y8kD - N, N));
}

