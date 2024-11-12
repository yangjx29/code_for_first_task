int main () {
    int Um7NDt1laAq;
    int BYLbpRJoSq [10000];
    int *gfjZ1Sahkzgo = BYLbpRJoSq;
    int *xzbOWCqk = BYLbpRJoSq;
    int AXOVx9IWTgCE;
    int W3aNHtRiWsMO;
    int cF1SHQROmB;
    int UR0kA46;
    int Y84POnJek;
    Um7NDt1laAq = 0;
    scanf ("%d", &AXOVx9IWTgCE);
    {
        UR0kA46 = 1;
        while (UR0kA46 <= AXOVx9IWTgCE) {
            gfjZ1Sahkzgo = BYLbpRJoSq;
            xzbOWCqk = BYLbpRJoSq;
            scanf ("%d %d", &W3aNHtRiWsMO, &cF1SHQROmB);
            {
                Y84POnJek = 1;
                while (W3aNHtRiWsMO *cF1SHQROmB >= Y84POnJek) {
                    scanf ("%d", gfjZ1Sahkzgo++);
                    Y84POnJek = Y84POnJek +1;
                }
            }
            if (!(1 != W3aNHtRiWsMO)) {
                Y84POnJek = 0;
                while (cF1SHQROmB > Y84POnJek) {
                    Um7NDt1laAq += *(xzbOWCqk + Y84POnJek);
                    Y84POnJek = Y84POnJek +1;
                }
            }
            else {
                if (cF1SHQROmB == 1) {
                    Um7NDt1laAq += *xzbOWCqk;
                    Um7NDt1laAq += *(xzbOWCqk + W3aNHtRiWsMO -1);
                }
                else {
                    {
                        Y84POnJek = 0;
                        while (Y84POnJek < cF1SHQROmB) {
                            Um7NDt1laAq += *(xzbOWCqk + Y84POnJek);
                            Um7NDt1laAq += *(xzbOWCqk + W3aNHtRiWsMO *cF1SHQROmB - Y84POnJek -1);
                            Y84POnJek = Y84POnJek +1;
                        }
                    }
                    {
                        Y84POnJek = 1;
                        while (Y84POnJek <= W3aNHtRiWsMO -2) {
                            Um7NDt1laAq += *(xzbOWCqk + Y84POnJek *cF1SHQROmB);
                            Um7NDt1laAq += *(xzbOWCqk + Y84POnJek *cF1SHQROmB + cF1SHQROmB - 1);
                            Y84POnJek = Y84POnJek +1;
                        }
                    }
                }
            }
            printf ("%d\n", Um7NDt1laAq);
            Um7NDt1laAq = 0;
            UR0kA46 = UR0kA46 +1;
        }
    }
    return 0;
}

