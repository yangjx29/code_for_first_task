int main () {
    int GTJCPIVihD;
    int oG70ir;
    int i, j, z, a, c;
    cin >> GTJCPIVihD >> oG70ir;
    for (i = GTJCPIVihD -1;; i = i + GTJCPIVihD -1) {
        a = i;
        z = 1;
        {
            j = 1;
            while (GTJCPIVihD -1 >= j) {
                c = a * GTJCPIVihD / (GTJCPIVihD -1) + oG70ir;
                if (c % (GTJCPIVihD -1) == 0) {
                    a = c;
                    z++;
                }
                else
                    break;
                j++;
            };
        }
        if (z == GTJCPIVihD) {
            a = a * GTJCPIVihD / (GTJCPIVihD -1) + oG70ir;
            break;
        };
    }
    cout << a;
    return 0;
}

