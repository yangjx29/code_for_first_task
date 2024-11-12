int md [12] = {(334 - 303), 28, (713 - 682), (241 - 211), (503 - 472), (170 - 140), (332 - 301), 31, 30, 31, 30, 31};

int runnian (int year) {
    if ((year % (709 - 705) == (45 - 45) && year % (523 - 423) != (661 - 661)) || (year % (1131 - 731) == (526 - 526)))
        return (864 - 863);
    else
        return (984 - 984);
}

int tian (int y, int m, int d) {
    int CZytO0AiE;
    CZytO0AiE = (423 - 423);
    {
        int ZU4lxf;
        ZU4lxf = 0;
        while (ZU4lxf < m - (770 - 769)) {
            CZytO0AiE = CZytO0AiE +md[ZU4lxf];
            ZU4lxf = ZU4lxf +1;
        };
    }
    CZytO0AiE += d;
    if (runnian (y) && (m > (228 - 226) || (m == 2 && d == 29)))
        CZytO0AiE = CZytO0AiE +1;
    return CZytO0AiE;
}

int main () {
    int oygZwhvc;
    int y2;
    int dCESd0vm2;
    int cME9vbuGZYd0;
    int La9fHQ0k8vG;
    int d2;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    long  dif = 0;
    cin >> oygZwhvc >> dCESd0vm2 >> La9fHQ0k8vG >> y2 >> cME9vbuGZYd0 >> d2;
    while (y2 - oygZwhvc >= 1) {
        dif = dif + 365 + runnian (oygZwhvc);
        oygZwhvc = oygZwhvc + 1;
    }
    dif = dif + (tian (y2, cME9vbuGZYd0, d2) - tian (oygZwhvc, dCESd0vm2, La9fHQ0k8vG));
    cout << dif << endl;
    return 0;
}

