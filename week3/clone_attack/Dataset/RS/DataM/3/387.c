int main () {
    int a [1000];
    int Jv5GmRr;
    int sbNxKIvH;
    int j;
    int iAEv8MqlJQy;
    int l;
    int k;
    l = 0;
    scanf ("%d %d", &sbNxKIvH, &k);
    for (Jv5GmRr = 0; sbNxKIvH > Jv5GmRr; Jv5GmRr++) {
        scanf ("%d", &a[Jv5GmRr]);
    }
    iAEv8MqlJQy = a[0];
    {
        Jv5GmRr = 1;
        while (Jv5GmRr <= sbNxKIvH) {
            {
                j = 0;
                while (sbNxKIvH - Jv5GmRr > j) {
                    if (a[j + 1] < a[j]) {
                        iAEv8MqlJQy = a[j + 1];
                        a[j + 1] = a[j];
                        a[j] = iAEv8MqlJQy;
                    }
                    j++;
                };
            }
            Jv5GmRr++;
        };
    }
    for (Jv5GmRr = 0; sbNxKIvH > Jv5GmRr; Jv5GmRr++) {
        for (j = Jv5GmRr; j < sbNxKIvH; j++) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            if (a[Jv5GmRr] + a[j] == k) {
                l++;
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
                };
            };
        };
    }
    if (l == 0) {
        printf ("no");
    }
    else {
        printf ("yes");
    }
    return 0;
}

