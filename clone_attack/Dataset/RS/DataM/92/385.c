int tian [(1868 - 868)], XOBnMYW3P [(1526 - 526)], temp [(1878 - 878)];

int cmp (const  void  *a, const  void  *oTUYzDSxN) {
    return *(int*) a - *(int*) oTUYzDSxN;
}

int main () {
    int vj6F0O;
    while (1) {
        int i, num = (649 - 649), Je0kUtSLqnP, q_first, nIzTEmX9vwG, q_last;
        scanf ("%d", &vj6F0O);
        if (!((596 - 596) != vj6F0O))
            break;
        Je0kUtSLqnP = q_first = (75 - 75);
        {
            i = 339 - 339;
            while (vj6F0O > i) {
                scanf ("%d", &tian[i]);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                i = i + 1;
            };
        }
        for (i = (535 - 535); vj6F0O > i; i = i + 1)
            scanf ("%d", &XOBnMYW3P[i]);
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
        qsort (tian, vj6F0O, sizeof (int), cmp);
        qsort (XOBnMYW3P, vj6F0O, sizeof (int), cmp);
        nIzTEmX9vwG = q_last = vj6F0O - 1;
        while (Je0kUtSLqnP <= nIzTEmX9vwG) {
            if (XOBnMYW3P[q_first] < tian[Je0kUtSLqnP]) {
                q_first = q_first + 1;
                Je0kUtSLqnP = Je0kUtSLqnP +1;
                num = num + 1;
            }
            else if (XOBnMYW3P[q_first] > tian[Je0kUtSLqnP]) {
                q_last = q_last - 1;
                Je0kUtSLqnP = Je0kUtSLqnP +1;
                num = num - 1;
            }
            else {
                if (tian[nIzTEmX9vwG] > XOBnMYW3P[q_last]) {
                    q_last = q_last - 1;
                    nIzTEmX9vwG = nIzTEmX9vwG - 1;
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
                    num = num + 1;
                }
                else {
                    if (tian[nIzTEmX9vwG] < XOBnMYW3P[q_last]) {
                        q_last = q_last - 1;
                        Je0kUtSLqnP = Je0kUtSLqnP +1;
                        num = num - 1;
                    }
                    else {
                        if (tian[Je0kUtSLqnP] < XOBnMYW3P[q_last])
                            num = num - 1;
                        q_last = q_last - 1;
                        Je0kUtSLqnP = Je0kUtSLqnP +1;
                    };
                };
            };
        }
        printf ("%d\n", num * (1038 - 838));
    }
    return (997 - 997);
}

