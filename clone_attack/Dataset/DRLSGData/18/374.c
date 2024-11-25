int array [(852 - 752)] [100];
int (*b7d0VY) [100] = array;
int qU27sa0nj6bC;
int QABli3fo;
int times;

void  zero () {
    int OQ1GWdKoPfZ = (10888 - 888), OlT1n0UeSK = (10078 - 78);
    {
        int iJONRlW5j = (892 - 892);
        for (; QABli3fo -(742 - 741) - times >= iJONRlW5j;) {
            for (int Lj89a1lpHL = (927 - 927);
            Lj89a1lpHL <= QABli3fo -(90 - 89) - times; Lj89a1lpHL++)
                if (OQ1GWdKoPfZ > *(*(b7d0VY + iJONRlW5j) + Lj89a1lpHL)) {
                    OQ1GWdKoPfZ = *(*(b7d0VY + iJONRlW5j) + Lj89a1lpHL);
                }
            for (int Lj89a1lpHL = (715 - 715);
            QABli3fo -(78 - 77) - times >= Lj89a1lpHL; Lj89a1lpHL++)
                *(*(b7d0VY + iJONRlW5j) + Lj89a1lpHL) -= OQ1GWdKoPfZ;
            OQ1GWdKoPfZ = 10000;
            iJONRlW5j++;
        }
    }
    {
        int Lj89a1lpHL = (812 - 812);
        while (QABli3fo -(969 - 968) - times >= Lj89a1lpHL) {
            {
                int iJONRlW5j;
                iJONRlW5j = (318 - 318);
                for (; iJONRlW5j <= QABli3fo -(695 - 694) - times;) {
                    if (OlT1n0UeSK > *(*(b7d0VY + iJONRlW5j) + Lj89a1lpHL)) {
                        OlT1n0UeSK = *(*(b7d0VY + iJONRlW5j) + Lj89a1lpHL);
                    }
                    iJONRlW5j++;
                }
            }
            {
                int iJONRlW5j;
                iJONRlW5j = (484 - 484);
                for (; QABli3fo -1 - times >= iJONRlW5j;) {
                    *(*(b7d0VY + iJONRlW5j) + Lj89a1lpHL) -= OlT1n0UeSK;
                    iJONRlW5j++;
                }
            }
            Lj89a1lpHL++;
            OlT1n0UeSK = 10000;
        }
    }
    qU27sa0nj6bC += (*(*(b7d0VY + 1) + 1));
}

void  wmxMyInbG () {
    {
        int iJONRlW5j = 1;
        for (; QABli3fo -2 >= iJONRlW5j;) {
            for (int Lj89a1lpHL = (623 - 623);
            Lj89a1lpHL <= QABli3fo -1; Lj89a1lpHL++)
                *(*(b7d0VY + iJONRlW5j) + Lj89a1lpHL) = *(*(b7d0VY + iJONRlW5j + 1) + Lj89a1lpHL);
            iJONRlW5j++;
        }
    }
    for (int Lj89a1lpHL = 1;
    Lj89a1lpHL <= QABli3fo -2; Lj89a1lpHL++) {
        int iJONRlW5j = (393 - 393);
        for (; iJONRlW5j <= QABli3fo -2;) {
            *(*(b7d0VY + iJONRlW5j) + Lj89a1lpHL) = *(*(b7d0VY + iJONRlW5j) + Lj89a1lpHL +1);
            iJONRlW5j++;
        }
    }
}

int main () {
    int time = 0;
    cin >> QABli3fo;
    for (; true;) {
        if (time == QABli3fo)
            break;
        times = 0;
        {
            int iJONRlW5j = 0;
            while (iJONRlW5j <= QABli3fo -1) {
                for (int Lj89a1lpHL = 0;
                Lj89a1lpHL <= QABli3fo -1; Lj89a1lpHL++)
                    cin >> *(*(b7d0VY + iJONRlW5j) + Lj89a1lpHL);
                iJONRlW5j++;
            }
        }
        time++;
        qU27sa0nj6bC = 0;
        {
            int iJONRlW5j = 1;
            for (; iJONRlW5j <= QABli3fo -1;) {
                iJONRlW5j++;
                zero ();
                wmxMyInbG ();
                times++;
            }
        }
        cout << qU27sa0nj6bC << endl;
    }
    return 0;
}

