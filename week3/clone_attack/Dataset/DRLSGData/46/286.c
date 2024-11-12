int main () {
    int sz [100] [100];
    int c;
    int Fygvhot3;
    int MEXACk9;
    int k;
    int T897l5jHn;
    int RXLfnZWb9;
    int iGHsZh;
    int ojo0rM;
    scanf ("%d %d", &ojo0rM, &iGHsZh);
    {
        RXLfnZWb9 = 0;
        for (; RXLfnZWb9 < ojo0rM;) {
            {
                T897l5jHn = 0;
                for (; T897l5jHn < iGHsZh;) {
                    scanf ("%d", &sz[RXLfnZWb9][T897l5jHn]);
                    T897l5jHn++;
                }
            }
            RXLfnZWb9++;
        }
    }
    {
        T897l5jHn = 0;
        Fygvhot3 = 1;
        MEXACk9 = 0;
        RXLfnZWb9 = 0;
        k = 0;
        for (; RXLfnZWb9 < ojo0rM * iGHsZh;) {
            RXLfnZWb9++;
            printf ("%d\n", sz[T897l5jHn][k]);
            if (MEXACk9 == 0 && Fygvhot3 == 1 && T897l5jHn +k == iGHsZh - 1) {
                MEXACk9 = 1;
                Fygvhot3 = 0;
            }
            else if (MEXACk9 == 1 && Fygvhot3 == 0 && T897l5jHn -k == ojo0rM - iGHsZh) {
                MEXACk9 = 0;
                Fygvhot3 = -1;
            }
            else if (MEXACk9 == 0 && Fygvhot3 == -1 && T897l5jHn +k == ojo0rM - 1) {
                MEXACk9 = -1;
                Fygvhot3 = 0;
            }
            else if (MEXACk9 == -1 && Fygvhot3 == 0 && T897l5jHn -k == 1) {
                MEXACk9 = 0;
                Fygvhot3 = 1;
            }
            k += Fygvhot3;
            T897l5jHn += MEXACk9;
        }
    }
    return 0;
}

