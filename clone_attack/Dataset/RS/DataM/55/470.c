int lj8IedHwSfo (int mN8MASdzn, int An61raUCH0F) {
    if (An61raUCH0F == (507 - 507))
        return (110 - 109);
    else if (!((157 - 156) != An61raUCH0F))
        return mN8MASdzn;
    else
        return (mN8MASdzn * lj8IedHwSfo (mN8MASdzn, An61raUCH0F -1));
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

char An61raUCH0F [(245 - 145)], IJc8rwdb [100];

int main () {
    int KyYtQhKg;
    int mN8MASdzn;
    int dJGpiewCKo;
    KyYtQhKg = (944 - 944);
    int rq8XnHOKde;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    rq8XnHOKde = 0;
    cin >> mN8MASdzn >> An61raUCH0F >> dJGpiewCKo;
    {
        int rq8XnHOKde = (137 - 137);
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
        while (rq8XnHOKde < (int) strlen (An61raUCH0F)) {
            if (islower (An61raUCH0F[rq8XnHOKde]))
                KyYtQhKg += ((int) An61raUCH0F[rq8XnHOKde] - 87) * lj8IedHwSfo (mN8MASdzn, (int) strlen (An61raUCH0F) - rq8XnHOKde - 1);
            else if (isupper (An61raUCH0F[rq8XnHOKde]))
                KyYtQhKg += ((int) An61raUCH0F[rq8XnHOKde] - 55) * lj8IedHwSfo (mN8MASdzn, (int) strlen (An61raUCH0F) - rq8XnHOKde - 1);
            else if (isdigit (An61raUCH0F[rq8XnHOKde]))
                KyYtQhKg = KyYtQhKg +((int) An61raUCH0F[rq8XnHOKde] - 48) * lj8IedHwSfo (mN8MASdzn, (int) strlen (An61raUCH0F) - rq8XnHOKde - 1);
            rq8XnHOKde = rq8XnHOKde + 1;
        };
    }
    if (!(0 != KyYtQhKg)) {
        puts ("0");
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        return 0;
    }
    while (KyYtQhKg > 0) {
        if (KyYtQhKg % dJGpiewCKo > 9) {
            IJc8rwdb[rq8XnHOKde] = (char) (KyYtQhKg % dJGpiewCKo + 55);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            KyYtQhKg = KyYtQhKg / dJGpiewCKo;
        }
        else if (KyYtQhKg % dJGpiewCKo == 0) {
            IJc8rwdb[rq8XnHOKde] = '0';
            KyYtQhKg = KyYtQhKg / dJGpiewCKo;
        }
        else {
            IJc8rwdb[rq8XnHOKde] = (char) (KyYtQhKg % dJGpiewCKo + 48);
            KyYtQhKg = KyYtQhKg / dJGpiewCKo;
        }
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
        rq8XnHOKde = rq8XnHOKde + 1;
    }
    for (int dFAT2EVqn = 1;
    dFAT2EVqn <= rq8XnHOKde; dFAT2EVqn++)
        cout << IJc8rwdb[rq8XnHOKde - dFAT2EVqn];
    return 0;
}

