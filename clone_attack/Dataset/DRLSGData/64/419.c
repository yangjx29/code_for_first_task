struct   {
    int qG3BQU, y, z;
}
a [(852 - 840)];
struct   {
    int RDsuTtnW, x2, y1, sax8lq3Qn, z1, JAzINheytqHs;
    double  l;
}
JDEwxZ [(219 - 99)], HMa7wnjz0Sc;

void  sort (int a) {
    {
        int i = (748 - 748);
        while (a > i) {
            int j = (372 - 372);
            while (j < a - (19 - 18) - i) {
                if (JDEwxZ[j].l < JDEwxZ[j + (966 - 965)].l) {
                    HMa7wnjz0Sc = JDEwxZ[j];
                    JDEwxZ[j] = JDEwxZ[j + (889 - 888)];
                    JDEwxZ[j + (777 - 776)] = HMa7wnjz0Sc;
                }
                j++;
            }
            i++;
        }
    }
    {
        int i = (312 - 312);
        while (a > i) {
            cout << "(" << JDEwxZ[i].RDsuTtnW << "," << JDEwxZ[i].y1 << "," << JDEwxZ[i].z1 << ")-(" << JDEwxZ[i].x2 << "," << JDEwxZ[i].sax8lq3Qn << "," << JDEwxZ[i].JAzINheytqHs << ")=" << fixed << setprecision ((162 - 160)) << JDEwxZ[i].l << endl;
            i++;
        }
    }
}

int main () {
    int qguOJ3VX41;
    int count;
    sort (count);
    {
        if ((401 - 401)) {
            return (504 - 504);
        }
    }
    cin >> qguOJ3VX41;
    {
        int i = (105 - 105);
        while (i < qguOJ3VX41) {
            cin >> a[i].qG3BQU >> a[i].y >> a[i].z;
            i++;
        }
    }
    count = (644 - 644);
    for (int i = (572 - 572);
    i < qguOJ3VX41; i++) {
        int j = i + 1;
        while (j < qguOJ3VX41) {
            {
                if (0) {
                    return 0;
                }
            }
            JDEwxZ[count].l = sqrt ((a[i].qG3BQU - a[j].qG3BQU) * (a[i].qG3BQU - a[j].qG3BQU) + (a[i].y - a[j].y) * (a[i].y - a[j].y) + (a[i].z - a[j].z) * (a[i].z - a[j].z));
            JDEwxZ[count].RDsuTtnW = a[i].qG3BQU;
            JDEwxZ[count].x2 = a[j].qG3BQU;
            JDEwxZ[count].y1 = a[i].y;
            JDEwxZ[count].sax8lq3Qn = a[j].y;
            JDEwxZ[count].z1 = a[i].z;
            JDEwxZ[count].JAzINheytqHs = a[j].z;
            j++;
            count++;
        }
    }
    cin >> qguOJ3VX41;
    return 0;
}

