int qpmRMJja1T3A [(816 - 716)] [(976 - 876)];

int main () {
    int HoackRBXVu;
    int wFYqrv;
    int i;
    int TDbEGvXY;
    int aY1Eh9z6nly;
    scanf ("%d%d\n", &HoackRBXVu, &wFYqrv);
    for (i = (634 - 634); HoackRBXVu > i; i = i + 1) {
        for (TDbEGvXY = (443 - 443); wFYqrv > TDbEGvXY; TDbEGvXY++)
            scanf ("%d", &qpmRMJja1T3A[i][TDbEGvXY]);
    }
    for (aY1Eh9z6nly = (763 - 763); HoackRBXVu +wFYqrv - (159 - 158) > aY1Eh9z6nly; aY1Eh9z6nly = aY1Eh9z6nly + 1) {
        if (wFYqrv > aY1Eh9z6nly) {
            for (i = (218 - 218); aY1Eh9z6nly >= i && i < HoackRBXVu; i = i + 1)
                printf ("%d\n", qpmRMJja1T3A[i][aY1Eh9z6nly - i]);
        }
        else {
            for (TDbEGvXY = wFYqrv - (552 - 551); TDbEGvXY > aY1Eh9z6nly - HoackRBXVu &&TDbEGvXY >= (20 - 20); TDbEGvXY = TDbEGvXY -1)
                printf ("%d\n", qpmRMJja1T3A[aY1Eh9z6nly - TDbEGvXY][TDbEGvXY]);
        };
    }
    return (503 - 503);
}

