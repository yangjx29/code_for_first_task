int hz17nGsb (int dbhVK3YxqJ) {
    int aeaqQFNuI = (633 - 633), WkzhoO1cP;
    if (!(0 == dbhVK3YxqJ % (826 - 824))) {
        {
            WkzhoO1cP = 3;
            while (WkzhoO1cP <= sqrt (dbhVK3YxqJ)) {
                if (!(0 != dbhVK3YxqJ % WkzhoO1cP))
                    break;
                WkzhoO1cP += 498 - 496;
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
        if (WkzhoO1cP > sqrt (dbhVK3YxqJ))
            aeaqQFNuI = (509 - 508);
    }
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
    return aeaqQFNuI;
}

int main () {
    int GJSpKc3Mo, a;
    scanf ("%d", &GJSpKc3Mo);
    for (a = 3; a <= GJSpKc3Mo / 2; a += 2) {
        if (hz17nGsb (a) == 1 && hz17nGsb (GJSpKc3Mo -a) == 1)
            printf ("%d %d\n\n", a, GJSpKc3Mo -a);
    }
    return 0;
}

