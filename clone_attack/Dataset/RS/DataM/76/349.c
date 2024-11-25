struct   qj {
    int a, b;
}
q [50001];

int main () {
    int pd4jRADcN;
    int smTBSxHvMGCP;
    int j;
    int m;
    int uGYKFbcSkgpo;
    scanf ("%d", &pd4jRADcN);
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
    for (smTBSxHvMGCP = 0; pd4jRADcN > smTBSxHvMGCP; smTBSxHvMGCP++) {
        scanf ("%d %d", &q[smTBSxHvMGCP].a, &q[smTBSxHvMGCP].b);
    }
    for (smTBSxHvMGCP = pd4jRADcN; smTBSxHvMGCP > 1; smTBSxHvMGCP--) {
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
        for (j = 0; j < smTBSxHvMGCP - 1; j++) {
            if (q[j + 1].a < q[j].a) {
                uGYKFbcSkgpo = q[j + 1].a;
                q[j + 1].a = q[j].a;
                q[j].a = uGYKFbcSkgpo;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                uGYKFbcSkgpo = q[j + 1].b;
                q[j + 1].b = q[j].b;
                q[j].b = uGYKFbcSkgpo;
            };
        };
    }
    m = q[0].b;
    smTBSxHvMGCP = 0;
    while (smTBSxHvMGCP < pd4jRADcN - 1) {
        if (m < q[smTBSxHvMGCP + 1].a) {
            return 0;
        }
        else if (q[smTBSxHvMGCP + 1].b > m) {
            m = q[smTBSxHvMGCP + 1].b;
        }
        else
            ;
        smTBSxHvMGCP += 1;
    }
    printf ("%d %d", q[0].a, m);
    return 0;
}

