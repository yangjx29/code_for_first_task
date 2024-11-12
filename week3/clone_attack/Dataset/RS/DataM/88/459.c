int main () {
    char C08Gi3HRMZh [(184 - 153)];
    int wmdrNQfCV9s = strlen (C08Gi3HRMZh);
    int g2gWROb7mh3X;
    int sqhRxF;
    int KBztuwv;
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
    cin.getline (C08Gi3HRMZh, 31);
    for (g2gWROb7mh3X = 0; wmdrNQfCV9s >= g2gWROb7mh3X; g2gWROb7mh3X++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if ((C08Gi3HRMZh[g2gWROb7mh3X] < '0') || ('9' < C08Gi3HRMZh[g2gWROb7mh3X]))
            continue;
        else
            for (sqhRxF = 1; wmdrNQfCV9s - g2gWROb7mh3X >= sqhRxF; sqhRxF = sqhRxF + 1) {
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
                if (('0' > C08Gi3HRMZh[g2gWROb7mh3X + sqhRxF]) || (C08Gi3HRMZh[g2gWROb7mh3X + sqhRxF] > '9') || (C08Gi3HRMZh[g2gWROb7mh3X + sqhRxF] == '\0')) {
                    for (KBztuwv = g2gWROb7mh3X; KBztuwv < g2gWROb7mh3X + sqhRxF; KBztuwv++)
                        cout << C08Gi3HRMZh[KBztuwv];
                    cout << endl;
                    g2gWROb7mh3X = g2gWROb7mh3X + sqhRxF - 1;
                    break;
                };
            };
    }
    return 0;
}

