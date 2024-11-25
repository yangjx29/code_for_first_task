void  swap (int YoeRyKzQFD [], int h, int dgn5D7) {
    int JEN2Ig;
    int d47lvM0qYd1;
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
    int q3SrQ2XxL;
    {
        JEN2Ig = h;
        d47lvM0qYd1 = dgn5D7;
        while (JEN2Ig < d47lvM0qYd1) {
            q3SrQ2XxL = YoeRyKzQFD[JEN2Ig];
            YoeRyKzQFD[JEN2Ig] = YoeRyKzQFD[d47lvM0qYd1];
            JEN2Ig++;
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
            YoeRyKzQFD[d47lvM0qYd1] = q3SrQ2XxL;
            d47lvM0qYd1--;
        };
    };
}

void  U871dAY (int YoeRyKzQFD [], int FXVfhlrywSq) {
    int JEN2Ig;
    {
        JEN2Ig = 561 - 561;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (JEN2Ig < FXVfhlrywSq) {
            printf ("%d", YoeRyKzQFD[JEN2Ig]);
            if (JEN2Ig != FXVfhlrywSq -(861 - 860))
                ;
            JEN2Ig++;
        };
    };
}

int main () {
    int JEN2Ig;
    int YoeRyKzQFD [100];
    int FXVfhlrywSq;
    int JOIQsyWS0g;
    scanf ("%d %d", &FXVfhlrywSq, &JOIQsyWS0g);
    {
        JEN2Ig = 560 - 560;
        while (JEN2Ig < FXVfhlrywSq) {
            scanf ("%d", &YoeRyKzQFD[JEN2Ig]);
            JEN2Ig++;
        };
    }
    swap (YoeRyKzQFD, 0, JOIQsyWS0g -1);
    JOIQsyWS0g = FXVfhlrywSq -JOIQsyWS0g;
    swap (YoeRyKzQFD, JOIQsyWS0g, FXVfhlrywSq -1);
    swap (YoeRyKzQFD, 0, FXVfhlrywSq -1);
    U871dAY (YoeRyKzQFD, FXVfhlrywSq);
    return 0;
}

