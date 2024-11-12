int UPb9S1peFsa (const  void  *iksn8KtZhiF0, const  void  *pr31Ut) {
    return *(int*) iksn8KtZhiF0 - *(int*) pr31Ut;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
}

int NigrfJHwemzW (const  void  *iksn8KtZhiF0, const  void  *pr31Ut) {
    return *(int*) pr31Ut - *(int*) iksn8KtZhiF0;
}

int main () {
    int gWXqL1DA6E = (448 - 448), GyLXmFYobHD5 = (649 - 649);
    int q4ABDQpXsl3;
    float iksn8KtZhiF0 [(593 - 552)], pr31Ut [41];
    cin >> q4ABDQpXsl3;
    for (int PI83Rm0U = (231 - 231);
    41 > PI83Rm0U; PI83Rm0U++) {
        iksn8KtZhiF0[PI83Rm0U] = -(242 - 241);
        pr31Ut[PI83Rm0U] = -1;
    }
    for (int PI83Rm0U = (975 - 975);
    q4ABDQpXsl3 > PI83Rm0U; PI83Rm0U++) {
        float efKHp9I;
        char JOD7r2eXdwP4 [(168 - 158)];
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        cin >> JOD7r2eXdwP4;
        cin >> efKHp9I;
        if (JOD7r2eXdwP4[0] == 'm') {
            iksn8KtZhiF0[gWXqL1DA6E] = efKHp9I;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            gWXqL1DA6E++;
        }
        else {
            pr31Ut[GyLXmFYobHD5] = efKHp9I;
            GyLXmFYobHD5++;
        };
    }
    qsort (iksn8KtZhiF0, gWXqL1DA6E, sizeof (int), UPb9S1peFsa);
    for (int PI83Rm0U = 0;
    gWXqL1DA6E > PI83Rm0U; PI83Rm0U++)
        printf ("%.2f ", iksn8KtZhiF0[PI83Rm0U]);
    qsort (pr31Ut, GyLXmFYobHD5, sizeof (int), NigrfJHwemzW);
    for (int PI83Rm0U = 0;
    PI83Rm0U < GyLXmFYobHD5; PI83Rm0U++) {
        if (PI83Rm0U == GyLXmFYobHD5 -1) {
            printf ("%.2f", pr31Ut[PI83Rm0U]);
        }
        else {
            printf ("%.2f ", pr31Ut[PI83Rm0U]);
        };
    };
}

