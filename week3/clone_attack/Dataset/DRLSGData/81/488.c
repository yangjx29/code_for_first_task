int main () {
    int U5rmHh;
    int E07VJWin8R;
    int YS46oO;
    int *OIkL9H6paCgK;
    int l7W94Dn3fS [5] [5];
    int ylcuaKwnECZ;
    int UDzErKXf;
    int VxMmyQDrHq;
    U5rmHh = 1;
    OIkL9H6paCgK = &VxMmyQDrHq;
    {
        E07VJWin8R = 0;
        while (5 > E07VJWin8R) {
            {
                YS46oO = 0;
                while (5 > YS46oO) {
                    scanf ("%d", *(l7W94Dn3fS + E07VJWin8R) + YS46oO);
                    YS46oO = YS46oO +1;
                }
            }
            E07VJWin8R = E07VJWin8R +1;
        }
    }
    scanf ("%d %d", &ylcuaKwnECZ, &UDzErKXf);
    if (ylcuaKwnECZ > 4 || 0 > ylcuaKwnECZ || UDzErKXf > 4 || UDzErKXf < 0) {
        U5rmHh = 0;
    }
    else {
        {
            YS46oO = 0;
            while (YS46oO < 5) {
                *OIkL9H6paCgK = *(*(l7W94Dn3fS + ylcuaKwnECZ) + YS46oO);
                *(*(l7W94Dn3fS + ylcuaKwnECZ) + YS46oO) = *(*(l7W94Dn3fS + UDzErKXf) + YS46oO);
                *(*(l7W94Dn3fS + UDzErKXf) + YS46oO) = *OIkL9H6paCgK;
                YS46oO = YS46oO +1;
            }
        }
        {
            E07VJWin8R = 0;
            while (5 > E07VJWin8R) {
                {
                    YS46oO = 0;
                    while (YS46oO < 5) {
                        printf ("%d%c", *(*(l7W94Dn3fS + E07VJWin8R) + YS46oO), (YS46oO == 4) ? '\n' : ' ');
                        YS46oO = YS46oO +1;
                    }
                }
                E07VJWin8R = E07VJWin8R +1;
            }
        }
    }
    return U5rmHh;
}

