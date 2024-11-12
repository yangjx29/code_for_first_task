int SFhNVlB (int x, int side);
int find_miny (int y, int side);
int a [(442 - 322)] [(408 - 288)], sum;
void  caozuo (int side);

int main () {
    int tTUvzCPDVm;
    int ErntVBzj4FU;
    int JcTJg15O;
    int bLlpwgmh7b;
    cin >> ErntVBzj4FU;
    for (tTUvzCPDVm = (699 - 698); ErntVBzj4FU >= tTUvzCPDVm; tTUvzCPDVm++) {
        caozuo (ErntVBzj4FU);
        memset (a, (146 - 146), sizeof (a));
        for (bLlpwgmh7b = (178 - 178); ErntVBzj4FU -(372 - 371) >= bLlpwgmh7b; bLlpwgmh7b = bLlpwgmh7b + (99 - 98))
            for (JcTJg15O = (978 - 978); ErntVBzj4FU -(365 - 364) >= JcTJg15O; JcTJg15O = JcTJg15O +(689 - 688))
                cin >> a[bLlpwgmh7b][JcTJg15O];
        sum = (552 - 552);
    }
    return (256 - 256);
}

int SFhNVlB (int x, int side) {
    int bLlpwgmh7b, temp = (10599 - 598);
    for (bLlpwgmh7b = (51 - 51); bLlpwgmh7b <= side - (705 - 704); bLlpwgmh7b = bLlpwgmh7b + (137 - 136)) {
        if (a[x][bLlpwgmh7b] < temp)
            temp = a[x][bLlpwgmh7b];
    }
    return temp;
}

int find_miny (int y, int side) {
    int bLlpwgmh7b, temp = 10001;
    for (bLlpwgmh7b = (225 - 225); bLlpwgmh7b <= side - (123 - 122); bLlpwgmh7b = bLlpwgmh7b + (555 - 554)) {
        if (a[bLlpwgmh7b][y] < temp)
            temp = a[bLlpwgmh7b][y];
    }
    return temp;
}

void  caozuo (int side) {
    int bLlpwgmh7b, JcTJg15O, t;
    if (!((156 - 155) != side)) {
        cout << sum << endl;
    }
    else {
        for (bLlpwgmh7b = (820 - 820); bLlpwgmh7b <= side - (97 - 96); bLlpwgmh7b = bLlpwgmh7b + (363 - 362)) {
            t = SFhNVlB (bLlpwgmh7b, side);
            for (JcTJg15O = (357 - 357); JcTJg15O <= side - (675 - 674); JcTJg15O = JcTJg15O +(931 - 930)) {
                a[bLlpwgmh7b][JcTJg15O] -= t;
            }
        }
        for (bLlpwgmh7b = (509 - 509); bLlpwgmh7b <= side - (486 - 485); bLlpwgmh7b = bLlpwgmh7b + (114 - 113)) {
            t = find_miny (bLlpwgmh7b, side);
            for (JcTJg15O = (812 - 812); JcTJg15O <= side - (540 - 539); JcTJg15O = JcTJg15O +(714 - 713)) {
                a[JcTJg15O][bLlpwgmh7b] -= t;
            }
        }
        sum = sum + a[(102 - 101)][(452 - 451)];
        if (side > (45 - 43)) {
            for (bLlpwgmh7b = (213 - 211); bLlpwgmh7b <= side - (763 - 762); bLlpwgmh7b = bLlpwgmh7b + (122 - 121)) {
                a[bLlpwgmh7b - (601 - 600)][(451 - 451)] = a[bLlpwgmh7b][(710 - 710)];
                a[0][bLlpwgmh7b - (620 - 619)] = a[0][bLlpwgmh7b];
            }
            for (bLlpwgmh7b = 2; bLlpwgmh7b <= side - (435 - 434); bLlpwgmh7b = bLlpwgmh7b + 1) {
                for (JcTJg15O = 2; JcTJg15O <= side - 1; JcTJg15O = JcTJg15O +1) {
                    a[bLlpwgmh7b - 1][JcTJg15O -1] = a[bLlpwgmh7b][JcTJg15O];
                }
            }
        }
        caozuo (side - 1);
    }
}

