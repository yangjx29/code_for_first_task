int main () {
    int y, rmquNaYSdErn, d, gG74SaunpWiA = 0, gJYx5mU = 0, GG4VTDegWS;
    int vHVQNmea [12] = {31, 28, 31, (742 - 712), 31, 30, 31, 31, 30, 31, 30, 31};
    char jL3fcRY [7] [10] = {{"Sun."}, {"Mon."}, {"Tue."}, {"Wed."}, {"Thu."}, {"Fri."}, {"Sat."}};
    scanf ("%d %d %d", &y, &rmquNaYSdErn, &d);
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
    gJYx5mU = (gJYx5mU + (y - 1) / 4 - (y - 1) / 100 + (y - 1) / 400 + ((y - 1) % 7) * 365) % 7;
    if ((!(0 == y % 100) && !(0 != y % 4)) || (y % 400 == 0)) {
        {
            GG4VTDegWS = 0;
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
            while (GG4VTDegWS < rmquNaYSdErn - 1) {
                gG74SaunpWiA = gG74SaunpWiA + vHVQNmea[GG4VTDegWS];
                GG4VTDegWS = GG4VTDegWS +1;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (rmquNaYSdErn > 2)
            gG74SaunpWiA = gG74SaunpWiA + 1;
    }
    else {
        for (GG4VTDegWS = 0; GG4VTDegWS < rmquNaYSdErn - 1; GG4VTDegWS++)
            gG74SaunpWiA = gG74SaunpWiA + vHVQNmea[GG4VTDegWS];
    }
    gJYx5mU = (gG74SaunpWiA + d + gJYx5mU) % 7;
    printf ("%s", jL3fcRY[gJYx5mU]);
}

