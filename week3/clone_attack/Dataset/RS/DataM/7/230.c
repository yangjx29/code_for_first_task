int main () {
    int i = 0, XwaMsDU = 0, k = 0, m = 0, kGMbIaQ, jIWLgoX;
    char DeZvn5DT8CiX [256], Rt6nm5T [100], D3yhHQUuEpBo [100];
    gets (DeZvn5DT8CiX);
    gets (Rt6nm5T);
    gets (D3yhHQUuEpBo);
    {
        i = 0;
        while (i < strlen (DeZvn5DT8CiX)) {
            if (!(Rt6nm5T[0] != DeZvn5DT8CiX[i])) {
                k = i;
                jIWLgoX = i;
                {
                    XwaMsDU = 0;
                    while (XwaMsDU < strlen (Rt6nm5T)) {
                        if (!(DeZvn5DT8CiX[k] == Rt6nm5T[XwaMsDU])) {
                            break;
                        }
                        XwaMsDU = XwaMsDU +1;
                        k = k + 1;
                    };
                }
                if (XwaMsDU == strlen (Rt6nm5T)) {
                    m = 1;
                    break;
                };
            }
            i = i + 1;
        };
    }
    if (m == 1) {
        {
            i = 0;
            while (i < jIWLgoX) {
                printf ("%c", DeZvn5DT8CiX[i]);
                i = i + 1;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        printf ("%s", D3yhHQUuEpBo);
        {
            kGMbIaQ = Rt6nm5T;
            while (kGMbIaQ < strlen (DeZvn5DT8CiX)) {
                printf ("%c", DeZvn5DT8CiX[kGMbIaQ]);
                kGMbIaQ = kGMbIaQ + 1;
            };
        };
    }
    else {
        if (m == 0) {
            printf ("%s", DeZvn5DT8CiX);
        };
    }
    return 0;
}

