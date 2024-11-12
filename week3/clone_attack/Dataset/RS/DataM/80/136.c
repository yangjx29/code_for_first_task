int TiBGIg4dtz (int lqjfhLB) {
    if ((!(0 != lqjfhLB % 4) && lqjfhLB % 100 != 0) || (!(0 != lqjfhLB % 400)))
        return 366;
    else
        return (1318 - 953);
}

int S8dWr4t7nI (int lqjfhLB, int uhtupOQUzDa7) {
    int B0RUYuz9;
    switch (uhtupOQUzDa7) {
    case 2 :
        if (TiBGIg4dtz (lqjfhLB) -(1352 - 987) == 0)
            B0RUYuz9 = 28;
        else if (TiBGIg4dtz (lqjfhLB) -365 == (297 - 296))
            B0RUYuz9 = 29;
        break;
    case (840 - 839) :
        ;
    case 3 :
        ;
    case (112 - 107) :
        ;
    case 7 :
        ;
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
    case 8 :
        ;
    case 10 :
        ;
    case 12 :
        B0RUYuz9 = 31;
        break;
    default :
        B0RUYuz9 = 30;
        break;
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
    return B0RUYuz9;
}

int main (void ) {
    int pad9NcV7e, AE15qkbTjgOI, qhkwvAbO65;
    int V7cb9gelOn, iqCy4IE3lJf1, ak0pHdG5U;
    int zFRpgHLXxanV = 0;
    cin >> V7cb9gelOn >> iqCy4IE3lJf1 >> ak0pHdG5U;
    cin >> pad9NcV7e >> AE15qkbTjgOI >> qhkwvAbO65;
    {
        int cZqWJUj = V7cb9gelOn;
        while (cZqWJUj < pad9NcV7e) {
            zFRpgHLXxanV = zFRpgHLXxanV + TiBGIg4dtz (cZqWJUj);
            cZqWJUj++;
        };
    }
    for (int AncV2Klp = 1;
    AncV2Klp < AE15qkbTjgOI; AncV2Klp++) {
        zFRpgHLXxanV = zFRpgHLXxanV + S8dWr4t7nI (pad9NcV7e, AncV2Klp);
    }
    {
        int dPFiCJB4glfK = 1;
        while (dPFiCJB4glfK < iqCy4IE3lJf1) {
            zFRpgHLXxanV = zFRpgHLXxanV - S8dWr4t7nI (V7cb9gelOn, dPFiCJB4glfK);
            dPFiCJB4glfK = dPFiCJB4glfK + 1;
        };
    }
    zFRpgHLXxanV = zFRpgHLXxanV + qhkwvAbO65;
    zFRpgHLXxanV = zFRpgHLXxanV - ak0pHdG5U;
    cout << zFRpgHLXxanV << endl;
    return 0;
}

