int main () {
    int n;
    int G4qVbKrZlcCz;
    int Qp4MGZP;
    int j;
    int b3vkHrqCRAP;
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
    char ouPpFaNzySv [1000];
    char a [1000];
    scanf ("%d", &n);
    for (G4qVbKrZlcCz = 0; G4qVbKrZlcCz < n; G4qVbKrZlcCz = G4qVbKrZlcCz +1) {
        for (b3vkHrqCRAP = 0; b3vkHrqCRAP < 1000; b3vkHrqCRAP = b3vkHrqCRAP + 1) {
            ouPpFaNzySv[b3vkHrqCRAP] = 0;
            a[b3vkHrqCRAP] = 0;
        }
        scanf ("%s", ouPpFaNzySv);
        Qp4MGZP = strlen (ouPpFaNzySv);
        for (j = 0; Qp4MGZP > j; j = j + 1) {
            if (!('A' != ouPpFaNzySv[j])) {
                a[j] = 'T';
            }
            else {
                if (!('T' != ouPpFaNzySv[j])) {
                    a[j] = 'A';
                }
                else if (ouPpFaNzySv[j] == 'G') {
                    a[j] = 'C';
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
                else if (ouPpFaNzySv[j] == 'C') {
                    a[j] = 'G';
                };
            };
        }
        printf ("%s\n", a);
    }
    return 0;
}

