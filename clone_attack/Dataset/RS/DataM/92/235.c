int tianji [1000];
int qiwang [1000];

int cmp (const  void  *MRUQTEGeOCu, const  void  *b) {
    return -(*(int*) MRUQTEGeOCu -*(int*) b);
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

int main () {
    int PXf20LIcWbuK;
    while (cin >> PXf20LIcWbuK) {
        int kdpMLh6V7aP;
        kdpMLh6V7aP = 0;
        int qEZVwmPlQ = 0, fVGhgCUEidmo = PXf20LIcWbuK -(229 - 228), qp = 0, qq = PXf20LIcWbuK -1;
        if (PXf20LIcWbuK == 0)
            break;
        {
            int i = 0;
            while (i < PXf20LIcWbuK) {
                cin >> tianji[i];
                i++;
            };
        }
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
        {
            int i = 0;
            while (i < PXf20LIcWbuK) {
                cin >> qiwang[i];
                i++;
            };
        }
        qsort (tianji, PXf20LIcWbuK, sizeof (int), cmp);
        qsort (qiwang, PXf20LIcWbuK, sizeof (int), cmp);
        while (fVGhgCUEidmo >= qEZVwmPlQ) {
            while (qiwang[qp] < tianji[qEZVwmPlQ] && qEZVwmPlQ <= fVGhgCUEidmo) {
                qp = qp + 1;
                qEZVwmPlQ++;
                kdpMLh6V7aP += 200;
            }
            while (tianji[fVGhgCUEidmo] > qiwang[qq] && qEZVwmPlQ <= fVGhgCUEidmo) {
                kdpMLh6V7aP += 200;
                fVGhgCUEidmo = fVGhgCUEidmo - 1;
                qq--;
            }
            if (tianji[qEZVwmPlQ] <= qiwang[qp] && qEZVwmPlQ <= fVGhgCUEidmo) {
                if (tianji[fVGhgCUEidmo] < qiwang[qp])
                    kdpMLh6V7aP = kdpMLh6V7aP - 200;
                fVGhgCUEidmo--;
                qp = qp + 1;
            };
        }
        cout << kdpMLh6V7aP << endl;
    };
}

