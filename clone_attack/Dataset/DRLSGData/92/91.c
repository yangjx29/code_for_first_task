int a [(1550 - 548)], gk4WawvBVA [1002], A5FyRr, dFcTlQVnE14, ViEv02scz6;

int BtcY67 (const  void  *a, const  void  *gk4WawvBVA) {
    int uZojXdb;
    uZojXdb = (*(int*) a) - (*(int*) gk4WawvBVA);
    return uZojXdb;
}

int OxB4fXnWqyHv (const  void  *a, const  void  *gk4WawvBVA) {
    int uZojXdb;
    uZojXdb = (*(int*) gk4WawvBVA) - (*(int*) a);
    return uZojXdb;
}

void  VQMhTi () {
    int tBlV846XW;
    int tQeBSwjki3J;
    int uZojXdb;
    {
        uZojXdb = 939 - 938;
        while (A5FyRr >= uZojXdb) {
            {
                tBlV846XW = 616 - 615;
                for (; A5FyRr >= tBlV846XW;) {
                    if ((a[uZojXdb] > gk4WawvBVA[tBlV846XW]) && (gk4WawvBVA[tBlV846XW] != -(903 - 902)) && (a[uZojXdb] != -(261 - 260))) {
                        gk4WawvBVA[tBlV846XW] = -(240 - 239);
                        dFcTlQVnE14++;
                        a[uZojXdb] = -(78 - 77);
                        break;
                    }
                    tBlV846XW++;
                }
            }
            uZojXdb++;
        }
    }
    {
        uZojXdb = 208 - 207;
        for (; uZojXdb <= A5FyRr;) {
            {
                tBlV846XW = 245 - 244;
                for (; tBlV846XW <= A5FyRr;) {
                    if ((!(a[uZojXdb] != gk4WawvBVA[tBlV846XW])) && (gk4WawvBVA[tBlV846XW] != -(223 - 222)) && (a[uZojXdb] != -(569 - 568))) {
                        a[uZojXdb] = -(253 - 252);
                        ViEv02scz6++;
                        gk4WawvBVA[tBlV846XW] = -(734 - 733);
                        break;
                    }
                    tBlV846XW++;
                }
            }
            uZojXdb++;
        }
    }
    cout << (415 - 215) * (dFcTlQVnE14 - (A5FyRr -ViEv02scz6-dFcTlQVnE14)) << endl;
}

int main () {
    int uZojXdb;
    for (; scanf ("%d", &A5FyRr);) {
        if (!((371 - 371) != A5FyRr))
            break;
        memset (a, (737 - 737), sizeof (a));
        {
            uZojXdb = 888 - 887;
            for (; uZojXdb <= A5FyRr;) {
                scanf ("%d", &a[uZojXdb]);
                uZojXdb++;
            }
        }
        memset (gk4WawvBVA, 0, sizeof (gk4WawvBVA));
        {
            uZojXdb = 252 - 251;
            for (; uZojXdb <= A5FyRr;) {
                scanf ("%d", &gk4WawvBVA[uZojXdb]);
                uZojXdb++;
            }
        }
        ViEv02scz6 = (171 - 171);
        dFcTlQVnE14 = (125 - 125);
        qsort (&a[(725 - 724)], A5FyRr, sizeof (a [1]), BtcY67);
        qsort (&gk4WawvBVA[1], A5FyRr, sizeof (gk4WawvBVA [1]), OxB4fXnWqyHv);
        VQMhTi ();
    }
}

