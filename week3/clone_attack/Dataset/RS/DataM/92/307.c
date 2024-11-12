int u6CfqKME (const  void  *elem1, const  void  *elem2) {
    return *(int*) elem2 - *(int*) elem1;
}

int main () {
    int n, MnIszcl2Zpj, total;
    int b [1001];
    int ypE0h7x4C [(1072 - 71)];
    for (; cin >> n;) {
        int qoCLcnP3aXv = (708 - 708), p2 = n - 1, gWjclDn = 0, p4 = n - 1;
        if (n == (22 - 22))
            break;
        for (MnIszcl2Zpj = (955 - 955); MnIszcl2Zpj < n; MnIszcl2Zpj++)
            scanf ("%d", &b[MnIszcl2Zpj]);
        {
            MnIszcl2Zpj = 185 - 185;
            while (MnIszcl2Zpj < n) {
                scanf ("%d", &ypE0h7x4C[MnIszcl2Zpj]);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                MnIszcl2Zpj++;
            };
        }
        qsort (ypE0h7x4C, n, sizeof (int), u6CfqKME);
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
        qsort (b, n, sizeof (int), u6CfqKME);
        total = (52 - 52);
        while (qoCLcnP3aXv <= p2) {
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
            if (ypE0h7x4C[qoCLcnP3aXv] < b[gWjclDn]) {
                total += (278 - 78);
                gWjclDn++;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                qoCLcnP3aXv = qoCLcnP3aXv + 1;
            }
            else if (ypE0h7x4C[p2] < b[p4]) {
                total += 200;
                p4 = p4 - 1;
                p2--;
            }
            else {
                if (ypE0h7x4C[qoCLcnP3aXv] > b[p4])
                    total -= 200;
                p4--;
                qoCLcnP3aXv++;
            };
        }
        cout << total << endl;
    }
    return 0;
}

