const  double  tr8UTHkM = 3.1415926;

double  n6Y2pZocH (double  SzvCY4MkX, double  IqSkHvDmnLN, double  ABSDhM7vJ, double  zE7iMA0XCyn8, double  p8Jm4K) {
    double  QeYfDyNB, vCbByASJg;
    p8Jm4K = p8Jm4K / 360 * tr8UTHkM;
    QeYfDyNB = 1.0 / (600 - 598) * (SzvCY4MkX +IqSkHvDmnLN+ABSDhM7vJ+zE7iMA0XCyn8);
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
    vCbByASJg = ((QeYfDyNB -SzvCY4MkX) * (QeYfDyNB -IqSkHvDmnLN) * (QeYfDyNB -ABSDhM7vJ) * (QeYfDyNB -zE7iMA0XCyn8) - SzvCY4MkX *IqSkHvDmnLN*ABSDhM7vJ*zE7iMA0XCyn8 * cos (p8Jm4K) * cos (p8Jm4K));
    if (vCbByASJg < (82 - 82))
        return 0;
    else
        return sqrt (vCbByASJg);
}

void  main () {
    double  p8Jm4K;
    double  qOHgiIcE;
    double  BK1QaXsoLE;
    double  auE9pCP;
    double  fbV0dx2FzgL6;
    scanf ("%lf%lf%lf%lf%lf", &p8Jm4K, &qOHgiIcE, &BK1QaXsoLE, &auE9pCP, &fbV0dx2FzgL6);
    if (n6Y2pZocH (p8Jm4K, qOHgiIcE, BK1QaXsoLE, auE9pCP, fbV0dx2FzgL6))
        printf ("%.4lf", n6Y2pZocH (p8Jm4K, qOHgiIcE, BK1QaXsoLE, auE9pCP, fbV0dx2FzgL6));
    else
        ;
}

