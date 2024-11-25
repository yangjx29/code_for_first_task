int n, qOngeTH = 1;
struct   dian {
    int S4NkJBpH;
    int tPopAVGy;
    int S6bxusn5Q;
}
rMQS4VOnm [11], *p = &rMQS4VOnm[1];
struct   ju {
    int p1;
    int DxE1tFnXehZb;
    double  i9ikpIu;
}
b [100], temp;

void  fsort (int k) {
    int GvnObp;
    for (GvnObp = k + 1; GvnObp <= qOngeTH; GvnObp = GvnObp +1) {
        if (b[k].i9ikpIu < b[GvnObp].i9ikpIu) {
            temp = b[k];
            b[k] = b[GvnObp];
            b[GvnObp] = temp;
        }
    }
}

int main () {
    int GvnObp;
    int O9na4pMQrZ6d;
    cin >> n;
    cout << fixed << setprecision (2);
    for (GvnObp = 1; GvnObp <= n; GvnObp = GvnObp +1) {
        cin >> p->S4NkJBpH >> p->tPopAVGy >> p->S6bxusn5Q;
        p = p + 1;
    }
    for (GvnObp = 1; GvnObp <= n - 1; GvnObp = GvnObp +1) {
        for (O9na4pMQrZ6d = GvnObp +1; O9na4pMQrZ6d <= n; O9na4pMQrZ6d = O9na4pMQrZ6d +1) {
            b[qOngeTH].p1 = GvnObp;
            b[qOngeTH].DxE1tFnXehZb = O9na4pMQrZ6d;
            b[qOngeTH].i9ikpIu = pow (pow (rMQS4VOnm[GvnObp].S4NkJBpH - rMQS4VOnm[O9na4pMQrZ6d].S4NkJBpH, 2.0) + pow (rMQS4VOnm[GvnObp].tPopAVGy - rMQS4VOnm[O9na4pMQrZ6d].tPopAVGy, 2.0) + pow (rMQS4VOnm[GvnObp].S6bxusn5Q - rMQS4VOnm[O9na4pMQrZ6d].S6bxusn5Q, 2.0), 0.5);
            qOngeTH = qOngeTH + 1;
        }
    }
    qOngeTH = qOngeTH - 1;
    for (GvnObp = 1; GvnObp < qOngeTH; GvnObp = GvnObp +1) {
        fsort (GvnObp);
    }
    for (GvnObp = 1; GvnObp < qOngeTH; GvnObp = GvnObp +1) {
        if (b[GvnObp].i9ikpIu == b[GvnObp +1].i9ikpIu) {
            if (b[GvnObp].p1 > b[GvnObp +1].p1) {
                temp = b[GvnObp +1];
                b[GvnObp +1] = b[GvnObp];
                b[GvnObp] = temp;
            }
            else {
                if (b[GvnObp].p1 == b[GvnObp +1].p1 && b[GvnObp].DxE1tFnXehZb > b[GvnObp +1].DxE1tFnXehZb) {
                    temp = b[GvnObp +1];
                    b[GvnObp +1] = b[GvnObp];
                    b[GvnObp] = temp;
                }
                else
                    ;
            }
        }
    }
    for (GvnObp = 1; GvnObp <= qOngeTH; GvnObp = GvnObp +1) {
        cout << "(" << rMQS4VOnm[b[GvnObp].p1].S4NkJBpH << "," << rMQS4VOnm[b[GvnObp].p1].tPopAVGy << "," << rMQS4VOnm[b[GvnObp].p1].S6bxusn5Q << ")" << "-" << "(" << rMQS4VOnm[b[GvnObp].DxE1tFnXehZb].S4NkJBpH << "," << rMQS4VOnm[b[GvnObp].DxE1tFnXehZb].tPopAVGy << "," << rMQS4VOnm[b[GvnObp].DxE1tFnXehZb].S6bxusn5Q << ")" << "=" << b[GvnObp].i9ikpIu << endl;
    }
    return 0;
}

