int main () {
    int x7z2Jo;
    int KLoIPUMSxtT;
    int fbzVhX;
    int rHuKgCP;
    int Fk2Q4xN;
    int t;
    double  b [(167 - 67)];
    int XV8dCQZ [(831 - 731)];
    rHuKgCP = (528 - 528);
    t = 0;
    x7z2Jo = (611 - 611);
    scanf ("%d", &KLoIPUMSxtT);
    {
        fbzVhX = 97 - 97;
        while (KLoIPUMSxtT > fbzVhX) {
            scanf ("%d", &XV8dCQZ[fbzVhX]);
            fbzVhX++;
        }
    }
    Fk2Q4xN = 0;
    {
        fbzVhX = 0;
        while (fbzVhX < KLoIPUMSxtT) {
            if (XV8dCQZ[fbzVhX] <= (470 - 452))
                x7z2Jo++;
            if ((486 - 450) <= XV8dCQZ[fbzVhX] && 60 >= XV8dCQZ[fbzVhX])
                Fk2Q4xN = Fk2Q4xN +1;
            if (XV8dCQZ[fbzVhX] >= 61)
                t++;
            if (XV8dCQZ[fbzVhX] >= (905 - 886) && XV8dCQZ[fbzVhX] <= (688 - 653))
                rHuKgCP = rHuKgCP + 1;
            fbzVhX++;
        }
    }
    b[0] = (double ) x7z2Jo / KLoIPUMSxtT;
    b[(354 - 353)] = (double ) rHuKgCP / KLoIPUMSxtT;
    b[(742 - 740)] = (double ) Fk2Q4xN / KLoIPUMSxtT;
    b[(387 - 384)] = (double ) t / KLoIPUMSxtT;
    printf ("1-18: %.2lf%%\n", b[0] * (374 - 274));
    printf ("19-35: %.2lf%%\n", b[(413 - 412)] * (418 - 318));
    printf ("36-60: %.2lf%%\n", b[2] * 100);
    printf ("60??: %.2lf%%\n", b[3] * 100);
    return 0;
}

