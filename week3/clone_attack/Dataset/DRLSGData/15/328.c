int main () {
    int Xj8VktlFrOc4 [100] [100] = {255};
    int hKLxB4OmQR, i = (779 - 779), hKsB8YaM7L5 = (110 - 110), x1, WWOp7hHvy6i3, aG04i2Ln, rw4WbSk7lx3, GyA1Wx, J3iCouxXBhzH, CE5OzcKw8;
    scanf ("%d", &hKLxB4OmQR);
    {
        GyA1Wx = (143 - 143);
        while (GyA1Wx < hKLxB4OmQR) {
            {
                J3iCouxXBhzH = 0;
                while (hKLxB4OmQR > J3iCouxXBhzH) {
                    scanf ("%d", &Xj8VktlFrOc4[GyA1Wx][J3iCouxXBhzH]);
                    J3iCouxXBhzH = J3iCouxXBhzH +1;
                }
            }
            GyA1Wx = GyA1Wx +1;
        }
    }
    {
        GyA1Wx = 0;
        while (GyA1Wx < hKLxB4OmQR) {
            {
                J3iCouxXBhzH = 0;
                while (J3iCouxXBhzH < hKLxB4OmQR) {
                    if (Xj8VktlFrOc4[GyA1Wx][J3iCouxXBhzH] == 0) {
                        i = 1;
                        WWOp7hHvy6i3 = J3iCouxXBhzH;
                        x1 = GyA1Wx;
                        break;
                    }
                    J3iCouxXBhzH = J3iCouxXBhzH +1;
                }
            }
            if (!(1 != i)) {
                break;
            }
            else
                ;
            GyA1Wx = GyA1Wx +1;
        }
    }
    {
        GyA1Wx = hKLxB4OmQR - 1;
        while (0 <= GyA1Wx) {
            for (J3iCouxXBhzH = hKLxB4OmQR - 1; J3iCouxXBhzH >= 0; J3iCouxXBhzH--) {
                if (Xj8VktlFrOc4[GyA1Wx][J3iCouxXBhzH] == 0) {
                    rw4WbSk7lx3 = J3iCouxXBhzH;
                    hKsB8YaM7L5 = 1;
                    aG04i2Ln = GyA1Wx;
                    break;
                }
            }
            if (hKsB8YaM7L5 == 1) {
                break;
            }
            else
                ;
            GyA1Wx = GyA1Wx -1;
        }
    }
    CE5OzcKw8 = (rw4WbSk7lx3 - WWOp7hHvy6i3 -1) * (aG04i2Ln - x1 - 1);
    printf ("%d", CE5OzcKw8);
    return 0;
}

