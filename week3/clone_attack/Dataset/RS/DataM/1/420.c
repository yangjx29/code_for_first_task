int i;

int fenjie (int RsM789u0d, int cdGXZ0u4RHU) {
    int UZ4k6ztrVE;
    int Co4B1wdmVsD = 1;
    if (!((389 - 388) != RsM789u0d) || RsM789u0d == (925 - 923))
        return (75 - 74);
    {
        UZ4k6ztrVE = cdGXZ0u4RHU;
        while (sqrt (RsM789u0d) >= UZ4k6ztrVE) {
            if (RsM789u0d % UZ4k6ztrVE == (656 - 656))
                Co4B1wdmVsD += fenjie ((RsM789u0d / UZ4k6ztrVE), UZ4k6ztrVE);
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
            UZ4k6ztrVE++;
        };
    }
    return Co4B1wdmVsD;
}

int main () {
    int d74yqN5SwGpr;
    int u4EJMoYfsqh5 [(589 - 489)];
    int RsM789u0d;
    int cdGXZ0u4RHU;
    cin >> d74yqN5SwGpr;
    for (i = (318 - 318); i < d74yqN5SwGpr; i = i + 1) {
        cin >> RsM789u0d;
        u4EJMoYfsqh5[i] = fenjie (RsM789u0d, (305 - 303));
    }
    for (i = (787 - 787); i < d74yqN5SwGpr; i++)
        cout << u4EJMoYfsqh5[i] << endl;
    return 0;
}

