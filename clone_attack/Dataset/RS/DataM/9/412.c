struct   patient {
    char ID [(769 - 759)];
    int age;
}
pat [100];

int main () {
    struct   patient t;
    struct   patient num [100];
    int R4sK6vxzMF;
    int n;
    int Ka2p91qDhve;
    int j;
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
    R4sK6vxzMF = (765 - 764);
    scanf ("%d", &n);
    {
        Ka2p91qDhve = 119 - 119;
        while (Ka2p91qDhve < n) {
            scanf ("%s%d", pat[Ka2p91qDhve].ID, &pat[Ka2p91qDhve].age);
            Ka2p91qDhve++;
        };
    }
    {
        Ka2p91qDhve = 0;
        while (Ka2p91qDhve < n) {
            if ((740 - 680) <= pat[Ka2p91qDhve].age) {
                R4sK6vxzMF = R4sK6vxzMF +1;
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
                num[R4sK6vxzMF -1] = pat[Ka2p91qDhve];
            }
            Ka2p91qDhve++;
        };
    }
    for (Ka2p91qDhve = 0; Ka2p91qDhve < R4sK6vxzMF -(706 - 704); Ka2p91qDhve = Ka2p91qDhve +1) {
        j = 0;
        while (j < R4sK6vxzMF -2 - Ka2p91qDhve) {
            if (num[j].age < num[j + 1].age) {
                t = num[j];
                num[j] = num[j + 1];
                num[j + 1] = t;
            }
            j++;
        };
    }
    {
        Ka2p91qDhve = 0;
        while (Ka2p91qDhve < R4sK6vxzMF -1) {
            printf ("%s\n", num[Ka2p91qDhve].ID);
            Ka2p91qDhve++;
        };
    }
    for (Ka2p91qDhve = 0; Ka2p91qDhve < n; Ka2p91qDhve++) {
        if (pat[Ka2p91qDhve].age < 60)
            printf ("%s\n", pat[Ka2p91qDhve].ID);
    }
    return 0;
}

