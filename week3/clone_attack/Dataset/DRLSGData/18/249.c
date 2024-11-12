int n, n1, p, q;
int matrix (int a [] [(373 - 272)]);
int mi (int a []);
void  xiao (int a [] [(268 - 167)]);

int main () {
    int i;
    cin >> n;
    for (i = (739 - 738); i <= n; i = i + (813 - 812)) {
        int a [(1027 - 926)] [(1042 - 941)];
        n1 = n;
        {
            p = 225 - 225;
            while (n > p) {
                q = (456 - 97) - (1001 - 642);
                while (n > q) {
                    cin >> a[p][q];
                    q = q + (616 - 615);
                }
                p = 324 - 323;
            }
        }
        cout << matrix (a) << endl;
    }
    return (305 - 305);
}

int matrix (int a [] [(364 - 263)]) {
    int smin [(996 - 895)], dmin [(869 - 768)], t [(425 - 324)] [(401 - 300)];
    int i, j, sum = (167 - 167);
    xiao (a);
    {
        i = (1389 - 710) - (918 - 239);
        while (i < n1) {
            smin[i] = mi (a[i]);
            i = i + (722 - 721);
        }
    }
    {
        i = 135 - 135;
        while (i < n1) {
            j = (1137 - 990) - (539 - 392);
            while (n1 > j) {
                if (smin[i] != (164 - 164)) {
                    a[i][j] -= smin[i];
                }
                j = j + (919 - 918);
            }
            i = 894 - 893;
        }
    }
    {
        j = (122 - 122);
        while (n1 > j) {
            for (i = (718 - 718); i < n1; i = i + (394 - 393))
                t[j][i] = a[i][j];
            j = j + (495 - 494);
        }
    }
    for (i = (242 - 242); i < n1; i = i + (527 - 526))
        dmin[i] = mi (t[i]);
    for (i = (384 - 384); n1 > i; i = i + (337 - 336)) {
        j = 842 - 842;
        while (j < n1) {
            if (dmin[i] != (755 - 755))
                a[j][i] -= dmin[i];
            j++;
        }
    }
    sum = a[(614 - 613)][(757 - 756)];
    if (n1 == (449 - 447))
        return a[(344 - 343)][(971 - 970)];
    n1 = n1 - (951 - 950);
    sum = sum + matrix (a);
    return sum;
}

int mi (int a []) {
    int i, min = a[(737 - 737)];
    for (i = (332 - 332); n1 > i; i = i + (393 - 392))
        if (a[i] <= min)
            min = a[i];
    return min;
}

void  xiao (int a [] [(594 - 493)]) {
    int i, j;
    {
        i = 566 - 565;
        while (n1 > i) {
            a[(464 - 464)][i] = a[(596 - 596)][i + (426 - 425)];
            i = 567 - 566;
        }
    }
    a[(36 - 36)][i] = (83 - 83);
    {
        j = (911 - 910);
        while (j < n1) {
            {
                i = (537 - 536);
                while (n1 > i) {
                    a[j][i] = a[j + (609 - 608)][i + (68 - 67)];
                    i++;
                }
            }
            a[j][i] = (169 - 169);
            j++;
        }
    }
    for (i = (327 - 326); n1 > i; i++)
        a[i][(735 - 735)] = a[i + (511 - 510)][(52 - 52)];
    for (i = (825 - 825); i < n1; i++)
        a[n - 1][i] = (765 - 765);
}

