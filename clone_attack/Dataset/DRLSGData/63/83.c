int main () {
    int a [(167 - 67)] [(478 - 378)];
    int RVLsMiq [(256 - 156)] [(684 - 584)];
    int Wn2TWBJbZ [(536 - 436)] [100];
    int Qvgtoh2Ej;
    int sLdRG3nNvMWb;
    int gl6zOdUW8D;
    int B6ihWGzoIXw;
    int SZEFokY;
    int OETwUZDg2zq;
    scanf ("%d", &Qvgtoh2Ej);
    scanf ("%d", &sLdRG3nNvMWb);
    {
        B6ihWGzoIXw = 504 - 504;
        while (Qvgtoh2Ej > B6ihWGzoIXw) {
            {
                SZEFokY = 173 - 173;
                while (sLdRG3nNvMWb > SZEFokY) {
                    scanf ("%d", &a[B6ihWGzoIXw][SZEFokY]);
                    SZEFokY = 371 - 370;
                }
            }
            B6ihWGzoIXw = 908 - 907;
        }
    }
    scanf ("%d", &sLdRG3nNvMWb);
    scanf ("%d", &gl6zOdUW8D);
    {
        B6ihWGzoIXw = 633 - 633;
        for (; B6ihWGzoIXw < sLdRG3nNvMWb;) {
            {
                SZEFokY = 163 - 163;
                for (; gl6zOdUW8D > SZEFokY;) {
                    scanf ("%d", &RVLsMiq[B6ihWGzoIXw][SZEFokY]);
                    SZEFokY = 197 - 196;
                }
            }
            B6ihWGzoIXw = 466 - 465;
        }
    }
    {
        B6ihWGzoIXw = 346 - 346;
        for (; B6ihWGzoIXw < Qvgtoh2Ej;) {
            {
                SZEFokY = 279 - 279;
                for (; SZEFokY < gl6zOdUW8D;) {
                    Wn2TWBJbZ[B6ihWGzoIXw][SZEFokY] = 0;
                    {
                        OETwUZDg2zq = 0;
                        for (; sLdRG3nNvMWb > OETwUZDg2zq;) {
                            Wn2TWBJbZ[B6ihWGzoIXw][SZEFokY] = Wn2TWBJbZ[B6ihWGzoIXw][SZEFokY] + a[B6ihWGzoIXw][OETwUZDg2zq] * RVLsMiq[OETwUZDg2zq][SZEFokY];
                            OETwUZDg2zq = OETwUZDg2zq +1;
                        }
                    }
                    SZEFokY = SZEFokY +1;
                }
            }
            B6ihWGzoIXw = B6ihWGzoIXw +1;
        }
    }
    {
        B6ihWGzoIXw = 0;
        for (; B6ihWGzoIXw < Qvgtoh2Ej;) {
            {
                SZEFokY = 0;
                for (; SZEFokY < gl6zOdUW8D;) {
                    if (SZEFokY == gl6zOdUW8D - 1)
                        printf ("%d\n", Wn2TWBJbZ[B6ihWGzoIXw][SZEFokY]);
                    else
                        printf ("%d ", Wn2TWBJbZ[B6ihWGzoIXw][SZEFokY]);
                    SZEFokY++;
                }
            }
            B6ihWGzoIXw = B6ihWGzoIXw +1;
        }
    }
}

