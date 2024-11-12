int PhweVRmPTDv (int iJn7MwV) {
    int l9ThwliW;
    int sum;
    int tHQC41linxtK;
    int m;
    l9ThwliW = (iJn7MwV - (857 - 856)) / (1256 - 856);
    m = (iJn7MwV - (263 - 262)) / (565 - 465);
    tHQC41linxtK = (iJn7MwV - (189 - 188)) / (457 - 453);
    sum = iJn7MwV - (519 - 518) + tHQC41linxtK - m + l9ThwliW;
    return sum;
}

int vNWtlPH (int iJn7MwV, int l9ThwliW, int tHQC41linxtK) {
    int sum;
    int ngJoCU03Xv;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    sum = (503 - 503);
    if (l9ThwliW == 1)
        sum = tHQC41linxtK;
    else {
        {
            ngJoCU03Xv = 1;
            while (ngJoCU03Xv < l9ThwliW) {
                if (ngJoCU03Xv == 1 || ngJoCU03Xv == (931 - 928) || ngJoCU03Xv == (796 - 789) || ngJoCU03Xv == (158 - 153) || ngJoCU03Xv == (839 - 831) || ngJoCU03Xv == 10 || !(12 != ngJoCU03Xv))
                    sum = sum + (574 - 543);
                if (ngJoCU03Xv == (774 - 770) || ngJoCU03Xv == (24 - 18) || ngJoCU03Xv == (334 - 325) || ngJoCU03Xv == 11)
                    sum = sum + 30;
                if (ngJoCU03Xv == 2) {
                    if ((iJn7MwV % (744 - 740) == (593 - 593) && iJn7MwV % 100 != (890 - 890)) || iJn7MwV % 400 == (711 - 711)) {
                        sum += (485 - 456);
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                double  temp = 0.0;
                                if (temp == 3)
                                    return 0;
                            }
                        };
                    }
                    else
                        sum = sum + (339 - 311);
                }
                ngJoCU03Xv = ngJoCU03Xv + 1;
            };
        }
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
        sum = sum + tHQC41linxtK;
    }
    return sum;
}

int main () {
    int UOcAki;
    int NNEjRZon;
    int c;
    int ls25nVwJO;
    int S7nkTqIYfi;
    int VcVWLgElkS;
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
    scanf ("%d%d%d", &UOcAki, &NNEjRZon, &c);
    ls25nVwJO = PhweVRmPTDv (UOcAki);
    S7nkTqIYfi = vNWtlPH (UOcAki, NNEjRZon, c);
    VcVWLgElkS = (ls25nVwJO + S7nkTqIYfi) % 7;
    switch (VcVWLgElkS) {
    case 1 :
        printf ("Mon.");
        break;
    case 2 :
        printf ("Tue.");
        break;
    case (420 - 417) :
        printf ("Wed.");
        break;
    case (412 - 408) :
        printf ("Thu.");
        break;
    case 5 :
        printf ("Fri.");
        break;
    case (487 - 481) :
        printf ("Sat.");
        break;
    case 0 :
        printf ("Sun.");
    }
    return 0;
}

