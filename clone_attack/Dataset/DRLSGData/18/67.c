int vxorKsTt, ieK6SXwx, zcFV2lA;
int ksqgKmIh43j [(122 - 12)] [(1095 - 985)];

void  T175oLFMHQN (int Tz45C1huJZDs, int tVvGieW59Rk, int nI6COAhR, int dlGqeT) {
    if (Tz45C1huJZDs == ieK6SXwx || tVvGieW59Rk == ieK6SXwx)
        return;
    if (ksqgKmIh43j[Tz45C1huJZDs][tVvGieW59Rk] < zcFV2lA) {
        zcFV2lA = ksqgKmIh43j[Tz45C1huJZDs][tVvGieW59Rk];
    }
    T175oLFMHQN (Tz45C1huJZDs +nI6COAhR, tVvGieW59Rk + dlGqeT, nI6COAhR, dlGqeT);
    ksqgKmIh43j[Tz45C1huJZDs][tVvGieW59Rk] = ksqgKmIh43j[Tz45C1huJZDs][tVvGieW59Rk] - zcFV2lA;
}

void  fIbvwhY () {
    int wq68Ys3i;
    int iR9oZ8ualBLE;
    {
        wq68Ys3i = (1177 - 576) - 601;
        for (; wq68Ys3i < ieK6SXwx;) {
            for (iR9oZ8ualBLE = (962 - 961); iR9oZ8ualBLE < ieK6SXwx; iR9oZ8ualBLE++) {
                ksqgKmIh43j[wq68Ys3i][iR9oZ8ualBLE] = ksqgKmIh43j[wq68Ys3i][iR9oZ8ualBLE + (822 - 821)];
            }
            wq68Ys3i++;
        };
    }
    {
        wq68Ys3i = 404 - 404;
        for (; wq68Ys3i < ieK6SXwx;) {
            {
                iR9oZ8ualBLE = 59 - 58;
                for (; iR9oZ8ualBLE < ieK6SXwx;) {
                    ksqgKmIh43j[iR9oZ8ualBLE][wq68Ys3i] = ksqgKmIh43j[iR9oZ8ualBLE + (684 - 683)][wq68Ys3i];
                    iR9oZ8ualBLE++;
                };
            }
            wq68Ys3i++;
        };
    };
}

int main () {
    int wq68Ys3i;
    int iR9oZ8ualBLE;
    int CPkyB5bzXI2;
    int oUMBuT4;
    for (cin >> vxorKsTt, oUMBuT4 = (811 - 811); oUMBuT4 < vxorKsTt; oUMBuT4++) {
        {
            wq68Ys3i = 458 - 458;
            for (; wq68Ys3i < vxorKsTt;) {
                {
                    iR9oZ8ualBLE = 516 - 516;
                    for (; iR9oZ8ualBLE < vxorKsTt;) {
                        cin >> ksqgKmIh43j[wq68Ys3i][iR9oZ8ualBLE];
                        iR9oZ8ualBLE++;
                    };
                }
                wq68Ys3i++;
            };
        }
        {
            ieK6SXwx = vxorKsTt;
            CPkyB5bzXI2 = 496 - 496;
            for (; ieK6SXwx >= (611 - 610);) {
                CPkyB5bzXI2 = CPkyB5bzXI2 +ksqgKmIh43j[(124 - 123)][(281 - 280)];
                for (wq68Ys3i = (688 - 688); wq68Ys3i < (978 - 976) * ieK6SXwx; wq68Ys3i++) {
                    T175oLFMHQN ((wq68Ys3i % ieK6SXwx) * ((106 - 105) - wq68Ys3i / ieK6SXwx), (wq68Ys3i % ieK6SXwx) * (wq68Ys3i / ieK6SXwx), wq68Ys3i / ieK6SXwx, (515 - 514) - wq68Ys3i / ieK6SXwx);
                    zcFV2lA = (10812 - 812);
                }
                fIbvwhY ();
                ieK6SXwx--;
            };
        }
        cout << CPkyB5bzXI2 << endl;
    };
}

