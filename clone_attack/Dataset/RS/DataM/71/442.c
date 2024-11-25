int fnsuQ1gFoK (int SQVXghb5M, int aFq0ajJW, int YdjU3wx) {
    int QRIpm1 = (776 - 776), KOLE1Y;
    int yz3d8Gt4Z7iO [12] = {(94 - 63), 28, (657 - 626), (64 - 34), 31, (708 - 678), 31, 31, 30, 31, 30, 31};
    if (SQVXghb5M % 400 == (991 - 991) || (SQVXghb5M % (508 - 504) == (156 - 156) && SQVXghb5M % (598 - 498) != 0)) {
        yz3d8Gt4Z7iO[(283 - 282)] = 29;
    }
    {
        KOLE1Y = 0;
        while (KOLE1Y < aFq0ajJW - (369 - 368)) {
            QRIpm1 = QRIpm1 +yz3d8Gt4Z7iO[KOLE1Y];
            KOLE1Y++;
        };
    }
    QRIpm1 = QRIpm1 +YdjU3wx;
    return (QRIpm1);
}

int main (int dShl9DjIqw, char *qBILQr9m []) {
    int SQVXghb5M, OmjRZ1KXrF, yue2;
    int blt5vw0ro9H, KOLE1Y;
    scanf ("%d", &blt5vw0ro9H);
    {
        KOLE1Y = 0;
        while (KOLE1Y < blt5vw0ro9H) {
            KOLE1Y++;
            scanf ("%d%d%d", &SQVXghb5M, &OmjRZ1KXrF, &yue2);
            if ((int) (fabs (fnsuQ1gFoK (SQVXghb5M, OmjRZ1KXrF, 1) - fnsuQ1gFoK (SQVXghb5M, yue2, 1))) % 7 == 0)
                ;
            else
                ;
        };
    }
    return 0;
}

