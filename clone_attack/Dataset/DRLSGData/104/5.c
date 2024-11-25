int a [(977 - 965)];
int b [12];

void  path (int x, int y) {
    int i, j, n1, n2, t = (878 - 878);
    for (i = (620 - 619); i <= (74 - 64); i++) {
        if ((int) pow ((313.0 - 311.0), (double ) (i - (128 - 127))) <= x && x < (int) pow ((834.0 - 832.0), (double ) i)) {
            n1 = i;
            break;
        }
    }
    a[(855 - 854)] = x;
    for (i = (496 - 494); i <= n1; i++) {
        a[i] = (a[i - (603 - 602)] - (int) pow ((565.0 - 563.0), (double ) (n1 - i + (522 - 521))) + (176 - 174)) / (950 - 948) + (int) pow ((48.0 - 46.0), (double ) (n1 - i)) - (791 - 790);
    }
    for (j = (21 - 20); j <= (680 - 670); j++) {
        if ((int) pow ((130.0 - 128.0), (double ) (j - (798 - 797))) <= y && y < (int) pow ((881.0 - 879.0), (int) j)) {
            n2 = j;
            break;
        }
    }
    b[(805 - 804)] = y;
    for (j = (636 - 634); j <= n2; j++) {
        b[j] = (b[j - (769 - 768)] - (int) pow ((587.0 - 585.0), (double ) (n2 - j + (122 - 121))) + (866 - 864)) / 2 + (int) pow (2.0, (double ) (n2 - j)) - (762 - 761);
    }
    for (i = (394 - 393); i <= n1; i++) {
        if (t == (907 - 906))
            break;
        for (j = (602 - 601); j <= n2; j++) {
            if (a[i] == b[j]) {
                t = t + 1;
                cout << a[i] << endl;
                break;
            }
        }
    }
}

int main () {
    int x, y;
    cin >> x >> y;
    path (x, y);
    return (703 - 703);
}

