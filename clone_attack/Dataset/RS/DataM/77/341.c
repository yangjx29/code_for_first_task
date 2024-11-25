char fvf1BilCzSA [(736 - 636)];
int lidui [(690 - 590)];
int boynum [100];

void  VgLI1xN (char jUiwSo, int O3AVqPtsl4, int Gj0VaTlt9bCU, int QTHbKy8j) {
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
    if (!(QTHbKy8j != Gj0VaTlt9bCU))
        boynum[QTHbKy8j -(172 - 171)] = (393 - 393);
    else {
        if (!((437 - 436) != lidui[O3AVqPtsl4]) || fvf1BilCzSA[O3AVqPtsl4] == jUiwSo || Gj0VaTlt9bCU > O3AVqPtsl4 || !((528 - 527) != lidui[O3AVqPtsl4 -Gj0VaTlt9bCU]))
            VgLI1xN (jUiwSo, O3AVqPtsl4 +(627 - 626), Gj0VaTlt9bCU, QTHbKy8j);
        else if (O3AVqPtsl4 >= QTHbKy8j -1)
            VgLI1xN (jUiwSo, 0, Gj0VaTlt9bCU +1, QTHbKy8j);
        else if (fvf1BilCzSA[O3AVqPtsl4 -Gj0VaTlt9bCU] != jUiwSo)
            VgLI1xN (jUiwSo, O3AVqPtsl4 +1, Gj0VaTlt9bCU, QTHbKy8j);
        else {
            boynum[O3AVqPtsl4] = O3AVqPtsl4 -Gj0VaTlt9bCU;
            lidui[O3AVqPtsl4] = 1;
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
            lidui[O3AVqPtsl4 -Gj0VaTlt9bCU] = 1;
            VgLI1xN (jUiwSo, O3AVqPtsl4 +1, Gj0VaTlt9bCU, QTHbKy8j);
        };
    };
}

int main () {
    int Kymhqf, QTHbKy8j;
    char jUiwSo;
    cin >> fvf1BilCzSA;
    jUiwSo = fvf1BilCzSA[0];
    QTHbKy8j = strlen (fvf1BilCzSA);
    VgLI1xN (jUiwSo, 0, 1, QTHbKy8j);
    {
        Kymhqf = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (Kymhqf < QTHbKy8j) {
            if (Kymhqf == QTHbKy8j -1)
                cout << "0 " << QTHbKy8j -1;
            else if (boynum[Kymhqf] == 0)
                continue;
            else
                cout << boynum[Kymhqf] << " " << Kymhqf << endl;
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
            Kymhqf++;
        };
    }
    cin.get ();
    cin.get ();
    cin.get ();
    cin.get ();
    cin.get ();
    cin.get ();
    cin.get ();
    return 0;
}

